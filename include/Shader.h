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
        bool useTextureCoordinates = false;
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
        Mesh *mesh;
        unsigned int shaderProgram;
        Shader();
        Shader(App::Mesh *mesh, App::ShaderParameters *shaderParameters = nullptr);
    private:
        unsigned int vertexShader;
        unsigned int fragmentShader;
        std::string vertexShaderSource;
        std::string fragmentShaderSource;
        const char *vertexSourceFileLocation;
        const char *fragmentSourceFileLocation;

        unsigned int createShader(std::string shaderSource, GLuint shaderType);
        unsigned int createShaderProgram(unsigned int vertexShader, unsigned int fragmentShader);

    };
}


#endif //GPU_RENDERING_SHADER_H
