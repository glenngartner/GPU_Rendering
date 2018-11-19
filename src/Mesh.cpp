//
// Created by g on 11/13/18.
//

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <cmath>
#include <iostream>
#include <Mesh.h>

#include "Mesh.h"

/**
 * If no verts used to init mesh, use the default triangle
 */
App::Mesh::Mesh() {
    this->verts = {
            -0.5f, -0.5f, 0.0f,
            0.5f, -0.5f, 0.0f,
            0.0f, 0.5f, 0.0f
    };

    this->indices = {0, 1, 2};
}

/**
 * If custom verts are used to init mesh
 * @param verts
 */
App::Mesh::Mesh(std::vector<float> verts, std::vector<int> indices) {
    this->verts = verts;
    this->indices = indices;
}

void App::Mesh::initVertexData() {

    // create memory on the GPU to store vertex data. This is the vertex buffer object
    unsigned int VBO;
    glGenBuffers(1, &VBO);
    this->VBO = VBO;

    // create EBO object
    unsigned int EBO;
    glGenBuffers(1, &EBO);
    this->EBO = EBO;

    // generate a vertex array object to store the vertex buffer object
    unsigned int VAO;
    glGenVertexArrays(1, &VAO);

    // bind the vertex array object
    glBindVertexArray(VAO);

    // save instance of VAO to this object
    this->VAO = VAO;

    // bind the vertex buffer object (VBO) to the active buffer, and set its data
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, this->verts.size() * sizeof(float), &this->verts[0], GL_STATIC_DRAW);

    // bind EBO to the active buffer, and set its data
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, this->indices.size() * sizeof(float), &this->indices[0],
                 GL_STATIC_DRAW);

    // tell openGL how to interpret the vertex data in the VBO

    if (this->useVertexColors && this->useTextureCoordinates) {
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *) 0);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *) (3 * sizeof(float)));
        glEnableVertexAttribArray(1);

        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *)(6 * sizeof(float)));
        glEnableVertexAttribArray(2);
    } else if (this->useVertexColors && !this->useTextureCoordinates){
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *) 0);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *) (3 * sizeof(float)));
        glEnableVertexAttribArray(1);

    } else {
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *) 0);
        glEnableVertexAttribArray(0);
    }

    // set the element buffer as the current buffer state, since we're rendering with indices
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
}
