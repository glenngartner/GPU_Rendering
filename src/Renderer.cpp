//
// Created by g on 11/13/18.
//

#include <glad/glad.h>
#include <iostream>
#include "Renderer.h"

void App::Renderer::Render(GLFWwindow *window) {
    // render code here
    glfwSwapBuffers(window);

    glfwPollEvents();
}

int App::Renderer::Start(){

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

    while (!glfwWindowShouldClose(window)) {
        Render(window);
    }

    return 0;

}

void App::Renderer::WindowResizeCallback(GLFWwindow *window, int width, int height) {
    std::cout << "Window resizing: width: " << width  <<" height: " << height << std::endl;
    glViewport(0, 0, width, height);
}
