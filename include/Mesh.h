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

        std::vector<int> indices;
        unsigned int VAO;
        bool useVertexColors = false;
        bool useTextureCoordinates = false;
        void initVertexData();
    private:
        std::vector<float> verts;
        unsigned int VBO;
        unsigned int EBO;
    };

}

#endif //OPENGL_FROM_SCRATCH_MESH_H
