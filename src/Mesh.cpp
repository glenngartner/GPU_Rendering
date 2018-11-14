//
// Created by g on 11/13/18.
//

#include <glad/glad.h>
#include <iostream>
#include <Mesh.h>

#include "Mesh.h"

App::Mesh::Mesh() {
    std::cout << "New mesh created" << std::endl;
}

/**
 * Initializes the VBO of the object
 */

void App::Mesh::initVBO() {
    float verts[] = {
            -0.5f, -0.5f, 0.0f,
            0.5f, -0.5f, 0.0f,
            0.0f, 0.5f, 0.0f
    };

    // create memory on the GPU to store vertex data. This is the vertex buffer object
    unsigned int VBO;
    glGenBuffers(1, &VBO);

    // generate a vertex array object to store the vertex buffer object
    unsigned int VAO;
    glGenVertexArrays(1, &VAO);

    // bind the vertex array object
    glBindVertexArray(VAO);

    // save instance of VAO to this object
    this->VAO = VAO;

    // bind this buffer object to the array buffer type on the GPU
    glBindBuffer(GL_ARRAY_BUFFER, VBO);

    // Configure the data in the currently bound array buffer object.
    // This data persists with the object, bound or unbound
    // Future uses of this VBO will have this data assigned to it
    glBufferData(GL_ARRAY_BUFFER, sizeof(verts), verts, GL_STATIC_DRAW);

    // tell openGL how to interpret the vertex data in memory
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    // send the data to the graphics card
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
