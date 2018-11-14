//
// Created by g on 11/13/18.
//

#include <GLFW/glfw3.h>
#include <vector>
#include "Mesh.h"

#ifndef OPENGL_FROM_SCRATCH_APP_H
#define OPENGL_FROM_SCRATCH_APP_H

namespace App {
    class Renderer {
    public:

        static const int WINDOW_WIDTH = 800;
        static const int WINDOW_HEIGHT = 600;

        static std::vector<Mesh *> meshes;

        static int Start();

    private:
        static void Render(GLFWwindow *window);
        static void Render(GLFWwindow *window, std::vector<Mesh *> meshes);

        static void WindowResizeCallback(GLFWwindow *window, int width, int height);

        static void ProcessInput(GLFWwindow *window);
    };
}

#endif //OPENGL_FROM_SCRATCH_APP_H
