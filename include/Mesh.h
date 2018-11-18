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
        Mesh(std::vector<float> verts, std::vector<int> indices);

        std::vector<float> verts;
        std::vector<int> indices;
        unsigned int vertexShader;
        unsigned int fragmentShader;
        unsigned int shaderProgram;
        unsigned int VAO;
        std::vector<float> color = {1.0f, 0.75f, 0.25f};

        bool useVertexColors = false;

        void initMeshData();

        unsigned int createShader(std::string scriptFilePath, GLuint shaderType);

        unsigned int createShaderProgram(unsigned int vertexShader, unsigned int fragmentShader);

        void useMeshColor();
        void colorChangeOverTime(float speed);
    };

}

#endif //OPENGL_FROM_SCRATCH_MESH_H
