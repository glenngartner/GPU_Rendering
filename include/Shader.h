//
// Created by Glenn on 11/18/2018.
//

#ifndef GPU_RENDERING_SHADER_H
#define GPU_RENDERING_SHADER_H

#include <glad/glad.h>
#include <vector>
#include <string>
#include "Mesh.h"

namespace App {

    struct ShaderParameters {
        bool useVertexColors = false;
        unsigned int vertexShader;
        unsigned int fragmentShader;
        unsigned int shaderProgram;
        std::string vertexShaderSource;
        std::string fragmentShaderSource;
        const char *vertexSourceFileLocation;
        const char *fragmentSourceFileLocation;
    };

    class Shader {

    public:
        unsigned int vertexShader;
        unsigned int fragmentShader;
        unsigned int shaderProgram;
        std::vector<float> color = {1.0f, 0.75f, 0.25f};
        std::string vertexShaderSource;
        std::string fragmentShaderSource;
        const char *vertexSourceFileLocation;
        const char *fragmentSourceFileLocation;
        Mesh *mesh;

        Shader(App::Mesh *mesh, App::ShaderParameters *shaderParameters);

        unsigned int createShader(std::string shaderSource, GLuint shaderType);

        unsigned int createShaderProgram(unsigned int vertexShader, unsigned int fragmentShader);

        void useMeshColor();
    };
}


#endif //GPU_RENDERING_SHADER_H
