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

    // process inputs
    ProcessInput(window);

    // render code here
    glClearColor(0.5f, 0.5f, 0.25f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i < gameObjects.size(); i++){
        glUseProgram(gameObjects[i]->shader->shaderProgram);
        if (!gameObjects[i]->mesh->useVertexColors){
            gameObjects[i]->shader->useMeshColor();
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

    Mesh mesh1 = Mesh();
    ShaderParameters mesh1ShaderParams = {};
    Shader mesh1Shader = Shader(&mesh1, &mesh1ShaderParams);
    GameObject gameObject1 = GameObject(&mesh1, &mesh1Shader);
    gameObjects.push_back(&gameObject1);

    // make gameobject 2
    std::vector<float> mesh2Verts = {
            0.5f, 1.0f, -0.5f,
            1.0f, 0.0f, -0.5f,
            0.0f, 0.0f, -0.5f
    };
    std::vector<int> mesh2Indices = {0, 1, 2};
    Mesh mesh2 = Mesh(mesh2Verts, mesh2Indices);
    ShaderParameters mesh2ShaderParams = {};
    Shader mesh2Shader = Shader(&mesh2, &mesh2ShaderParams);
    GameObject gameObject2 = GameObject(&mesh2, &mesh2Shader);
    gameObjects.push_back(&gameObject2);

    // mesh 3 uses vertex colors
    std::vector<float> mesh3Verts = {
            // vert location    //vert color
            -1.0f, 0.0f, 1.0f,  1.0f, 0.0f, 0.0f,
            -0.5f, 1.0f, 1.0f,  0.0f, 1.0f, 0.0f,
            0.0f, 0.0f, 1.0f,   0.0f, 0.0f, 1.0f
    };

    std::vector<int> mesh3Indices = {0, 1, 2};

    Mesh mesh3 = Mesh(mesh3Verts, mesh3Indices);
    ShaderParameters mesh3ShaderParams = {};
    mesh3ShaderParams.vertexSourceFileLocation = "../Shaders/vertexColor.vert.glsl";
    mesh3ShaderParams.fragmentSourceFileLocation = "../Shaders/vertexColor.frag.glsl";
    mesh3ShaderParams.useVertexColors = true;
    Shader mesh3Shader = Shader(&mesh3, &mesh3ShaderParams);
    GameObject gameObject3 = GameObject(&mesh3, &mesh3Shader);
    gameObjects.push_back(&gameObject3);


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

