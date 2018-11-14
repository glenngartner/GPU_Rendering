//
// Created by g on 11/13/18.
//

#include <glad/glad.h>
#include <iostream>
#include "Renderer.h"
#include <FileLoader.h>
#include <Renderer.h>

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

void App::Renderer::Render(GLFWwindow *window, std::vector<App::Mesh *> meshes) {

    // process inputs
    ProcessInput(window);

    // render code here
    glClearColor(0.5f, 0.5f, 0.25f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i < meshes.size(); i++){
        glUseProgram(meshes[i]->shaderProgram);
        glBindVertexArray(meshes[i]->VAO);
        glDrawElements(GL_TRIANGLES, meshes[i]->indices.size(), GL_UNSIGNED_INT, 0);
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

    // load shader files
    std::string vertexSource = App::FileLoader::loadShader("../Shaders/basic.vert.glsl");
    std::string fragmentSource = App::FileLoader::loadShader("../Shaders/basic.frag.glsl");

    std::vector<Mesh *> meshes = {};

    Mesh mesh1 = Mesh();
    meshes.push_back(&mesh1);

    mesh1.initVBO();
    mesh1.createShader(vertexSource, GL_VERTEX_SHADER);
    mesh1.createShader(fragmentSource, GL_FRAGMENT_SHADER);
    mesh1.createShaderProgram(mesh1.vertexShader, mesh1.fragmentShader);

    std::vector<float> mesh2Verts = {
            0.5f, 1.0f, -0.5f,
            1.0f, 0.0f, -0.5f,
            0.0f, 0.0f, -0.5f
    };
    std::vector<int> mesh2Indices = {0, 1, 2};
    Mesh mesh2 = Mesh(mesh2Verts, mesh2Indices);
    meshes.push_back(&mesh2);

    fragmentSource = App::FileLoader::loadShader("../Shaders/justRed.frag.glsl");
    mesh2.initVBO();
    mesh2.createShader(vertexSource, GL_VERTEX_SHADER);
    mesh2.createShader(fragmentSource, GL_FRAGMENT_SHADER);
    mesh2.createShaderProgram(mesh2.vertexShader, mesh2.fragmentShader);

    while (!glfwWindowShouldClose(window)) {
        Render(window, meshes);
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

}

