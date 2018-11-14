//
// Created by g on 11/13/18.
//

#include <glad/glad.h>
#include <iostream>
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

/**
 * Initializes the VBO, VAO, and vertex data of the object in GL terms
 */

void App::Mesh::initVBO() {

    // create memory on the GPU to store vertex data. This is the vertex buffer object
    unsigned int VBO;
    glGenBuffers(1, &VBO);

    // create EBO object
    unsigned int EBO;
    glGenBuffers(1, &EBO);


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
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, this->indices.size() * sizeof(float), &this->indices[0], GL_STATIC_DRAW);

    // tell openGL how to interpret the vertex data in memory
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    // set the element buffer as the current buffer state, since we're rendering with indices
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);

}
/**
 * Creates a gl shader
 * @param shaderSource
 * @param shaderType
 * @return gl shader as an unsigned int
 */
unsigned int App::Mesh::createShader(std::string shaderSource, GLuint shaderType) {
    // create the vertex shader
    unsigned int shader;
    const char *shorthandShaderType;
    const char *shaderSourceCString = shaderSource.c_str();

    if (shaderType == GL_VERTEX_SHADER){

        shader = glCreateShader(GL_VERTEX_SHADER);
        shorthandShaderType = "VERTEX";
        this->vertexShader = shader;

    } else if (shaderType == GL_FRAGMENT_SHADER){

        shader = glCreateShader(GL_FRAGMENT_SHADER);
        shorthandShaderType == "FRAGMENT";
        this->fragmentShader = shader;
    } else {
        std::cout << "Shader type not recognized" << std::endl;
        return -1;
    }

    // attach the shader object just created to the shader source code
    glShaderSource(shader, 1, &shaderSourceCString, NULL);
    glCompileShader(shader);

    // check if shader compiling worked
    int compileSuccess;
    char infoLog[512];
    glGetShaderiv(shader, GL_COMPILE_STATUS, &compileSuccess);

    if (!compileSuccess){
        glGetShaderInfoLog(shader, 512, NULL, infoLog);
        std::cout << "ERROR: SHADER::" << shorthandShaderType << "::COMPILATION FAILED\n" << infoLog << std::endl;
        return -1;
    }

    return shader;
}

/**
 * Creates a shader program
 * @param vertexShader
 * @param fragmentShader
 * @return shader program as unsigned int
 */
unsigned int App::Mesh::createShaderProgram(unsigned int vertexShader, unsigned int fragmentShader) {
    // create the shader program object
    unsigned int shaderProgram;
    shaderProgram = glCreateProgram();

    // attach shaders to the shader program object
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);

    int success;
    char infoLog[512];
    // check for program errors
    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
    if (!success){
        glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
        std::cout << "ERROR: SHADER PROGRAM::FAILED\n" << infoLog << std::endl;
        return -1;

    }

    this->shaderProgram = shaderProgram;

    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    return shaderProgram;

}

