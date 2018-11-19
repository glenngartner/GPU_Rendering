//
// Created by g on 11/13/18.
//

#include <glad/glad.h>
#include <iostream>
#include "Renderer.h"
#include <FileLoader.h>
#include <Renderer.h>
#include "GameObject.h"
#include "Mesh.h"
#include "Material.h"
#include "Texture.h"
#include "Transforms.h"
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"


void App::Renderer::Render(GLFWwindow *window) {

    // process inputs
    ProcessInput(window);

    // render code here
    glClearColor(0.5f, 0.5f, 0.25f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // check for events
    glfwPollEvents();

    // swap buffers
    glfwSwapBuffers(window);
}

void App::Renderer::Render(GLFWwindow *window, std::vector<App::GameObject *> gameObjects) {

    // set temp rotation matrix for passing to uniforms
    glm::mat4 rotationMatrix(1.0f); // set identity matrix
    rotationMatrix = glm::rotate(rotationMatrix, glm::radians((float)glfwGetTime() * 10.0f), glm::vec3(0.0f, 0.0f, 1.0f));

    // process inputs
    ProcessInput(window);

    // render code here
    glClearColor(0.5f, 0.5f, 0.25f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i < gameObjects.size(); i++){
        if (gameObjects[i]->mesh->useTextureCoordinates){
            for (int j = 0; j < gameObjects[i]->material->activeTextures.size(); j++){
                Texture *texture = gameObjects[i]->material->activeTextures[j];
                switch (texture->textureType){
                    case ALBEDO:
                        glActiveTexture(GL_TEXTURE0);
                        glBindTexture(GL_TEXTURE_2D, texture->glTexture);
                        break;
                    case AMBIENT_OCCLUSION:
                        glActiveTexture(GL_TEXTURE1);
                        glBindTexture(GL_TEXTURE_2D, texture->glTexture);
                        break;
                    default:
                        break;
                }
            }
        }

        glUseProgram(gameObjects[i]->material->shader.shaderProgram);

        // get shader uniform locations, as needed
        if (gameObjects[i]->mesh->useTextureCoordinates){
            glUniform1i(glGetUniformLocation(gameObjects[i]->material->shader.shaderProgram, "albedoTexture"), 0);
            glUniform1i(glGetUniformLocation(gameObjects[i]->material->shader.shaderProgram, "aoTexture"), 1);
        }
        else if (gameObjects[i]->mesh->useVertexColors){
            // vertex color instructions here, as needed
        } else {
            gameObjects[i]->material->useAlbedoColor();
            unsigned int uniformLoc = glGetUniformLocation(gameObjects[i]->material->shader.shaderProgram, "rotationMatrix");
            glUniformMatrix4fv(uniformLoc, 1, GL_FALSE, glm::value_ptr(rotationMatrix));
        }

        glBindVertexArray(gameObjects[i]->mesh->VAO);
        glDrawElements(GL_TRIANGLES, gameObjects[i]->mesh->indices.size(), GL_UNSIGNED_INT, 0);
    }


    // check for events
    glfwPollEvents();

    // swap buffers
    glfwSwapBuffers(window);
}

int App::Renderer::Start() {

    // init GFLW and configure it
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // get a window
    GLFWwindow *window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "OpenGL App", NULL, NULL);
    if (window == nullptr) {
        std::cout << "Could not create GLFW Window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, WindowResizeCallback);

    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
        std::cout << "Glad didn't initialize" << std::endl;
        return -1;
    }

    glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);

    std::vector<GameObject *> gameObjects = {};
    std::vector<float> mesh1Verts = {
            // vertex location
            0.0f, -0.0f, 0.0f,
            0.5f, -1.0f, 0.0f,
            -0.5f, -1.0f, 0.0f
    };
    std::vector<int> mesh1Indices = {0, 1, 2};
    Mesh mesh1 = Mesh(mesh1Verts, mesh1Indices);
    MaterialParams mesh1MaterialParams = {};
    mesh1MaterialParams.albedoColor = {1.0f, 0.8f, 0.0f};
    Material mesh1Material = Material(&mesh1, &mesh1MaterialParams);
    GameObject gameObject1 = GameObject(&mesh1, &mesh1Material);
    gameObjects.push_back(&gameObject1);

    // make gameobject 2
    std::vector<float> mesh2Verts = {
            // vertex location      // texture coords
            0.5f, 1.0f, -0.5f,      0.5f, 1.0f,
            1.0f, 0.0f, -0.5f,      1.0f, 0.0f,
            0.0f, 0.0f, -0.5f,      0.0f, 0.0f
    };
    std::vector<int> mesh2Indices = {0, 1, 2};
    Mesh mesh2 = Mesh(mesh2Verts, mesh2Indices);
    MaterialParams mesh2MaterialParams = {};
    ShaderParameters mesh2ShaderParams = {};
    mesh2ShaderParams.vertexSourceFileLocation = "../Shaders/albedoAndAO.vert.glsl";
    mesh2ShaderParams.fragmentSourceFileLocation = "../Shaders/albedoAndAO.frag.glsl";
    mesh2ShaderParams.useTextureCoordinates = true;
    mesh2ShaderParams.useVertexColors = false;
    mesh2MaterialParams.shaderParameters = &mesh2ShaderParams;
    mesh2MaterialParams.albedoTexture = Texture("../assets/brick_all_render.png");
    mesh2MaterialParams.ambientOcclusionTexture = Texture("../assets/Brick_AO.png");
    Material mesh2Material = Material(&mesh2, &mesh2MaterialParams);
    GameObject gameObject2 = GameObject(&mesh2, &mesh2Material);
    gameObjects.push_back(&gameObject2);

    // mesh 3 uses vertex colors
    std::vector<float> mesh3Verts = {
            // vert location    //vert color        // texture coordinates
            -1.0f, 0.0f, 1.0f,  1.0f, 0.0f, 0.0f,  // 0.5f, 1.0f,
            -0.5f, 1.0f, 1.0f,  0.0f, 1.0f, 0.0f,   //1.0f, 0.0f,
            0.0f, 0.0f, 1.0f,   0.0f, 0.0f, 1.0f//,   0.0f, 0.0f
    };

    std::vector<int> mesh3Indices = {0, 1, 2};

    Mesh mesh3 = Mesh(mesh3Verts, mesh3Indices);
    MaterialParams mesh3MaterialParams = {};
    ShaderParameters mesh3ShaderParams = {};
    mesh3ShaderParams.vertexSourceFileLocation = "../Shaders/vertexColor.vert.glsl";
    mesh3ShaderParams.fragmentSourceFileLocation = "../Shaders/vertexColor.frag.glsl";
    mesh3ShaderParams.useVertexColors = true;
    mesh3MaterialParams.shaderParameters = &mesh3ShaderParams;
    Material mesh3Material = Material(&mesh3, &mesh3MaterialParams);
    GameObject gameObject3 = GameObject(&mesh3, &mesh3Material);
    gameObjects.push_back(&gameObject3);

    // scratch or practice area for transforms
    Transforms::run();

    while (!glfwWindowShouldClose(window)) {
        Render(window, gameObjects);
    }

    glfwTerminate();
    return 0;
}

void App::Renderer::WindowResizeCallback(GLFWwindow *window, int width, int height) {
    std::cout << "Window resizing: width: " << width << " height: " << height << std::endl;
    glViewport(0, 0, width, height);
}

void App::Renderer::ProcessInput(GLFWwindow *window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, true);
    }

    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS){
        glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    }

    if (glfwGetKey(window, GLFW_KEY_F) == GLFW_PRESS){
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    }

}

