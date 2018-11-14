//
// Created by g on 11/13/18.
//

#include <glad/glad.h>
#include <vector>
#include <string>

#ifndef OPENGL_FROM_SCRATCH_MESH_H
#define OPENGL_FROM_SCRATCH_MESH_H

namespace App {

    class Mesh {
    public:
        Mesh();

        std::vector<int> verts;
        unsigned int vertexShader;
        unsigned int fragmentShader;
        unsigned int shaderProgram;
        unsigned int VAO;

        void initVBO();

        unsigned int createShader(std::string scriptFilePath, GLuint shaderType);

        unsigned int createShaderProgram(unsigned int vertexShader, unsigned int fragmentShader);
    };

}

#endif //OPENGL_FROM_SCRATCH_MESH_H
