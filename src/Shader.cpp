//
// Created by Glenn on 11/18/2018.
//

#include <Shader.h>
#include <iostream>
#include <Mesh.h>
#include "FileLoader.h"
#include "Shader.h"


App::Shader::Shader() {

}

App::Shader::Shader(App::Mesh *mesh, App::ShaderParameters *shaderParameters) {
    this->mesh = mesh;

    if (shaderParameters != nullptr){this->mesh->useVertexColors = shaderParameters->useVertexColors;}

    this->mesh->initVertexData();

    if (shaderParameters == nullptr || shaderParameters->vertexSourceFileLocation == NULL ){
        this->vertexSourceFileLocation =  "../Shaders/basic.vert.glsl";
    } else {
        this->vertexSourceFileLocation = shaderParameters->vertexSourceFileLocation;
    }

    if (shaderParameters == nullptr || shaderParameters->fragmentSourceFileLocation == NULL){
        this->fragmentSourceFileLocation = "../Shaders/uniformColor.frag.glsl";
    } else {
        this->fragmentSourceFileLocation = shaderParameters->fragmentSourceFileLocation;
    }

    if (shaderParameters == nullptr || shaderParameters->vertexShaderSource == ""){
        this->vertexShaderSource = App::FileLoader::loadShader(this->vertexSourceFileLocation);
    } else {
        this->vertexShaderSource = shaderParameters->vertexShaderSource;
    }

    if (shaderParameters == nullptr || shaderParameters->fragmentShaderSource == ""){
        this->fragmentShaderSource = App::FileLoader::loadShader(this->fragmentSourceFileLocation);
    } else {
        this->fragmentShaderSource = shaderParameters->fragmentShaderSource;
    }

    if (shaderParameters == nullptr || shaderParameters->vertexShader == 0){
        this->vertexShader = this->createShader(this->vertexShaderSource, GL_VERTEX_SHADER);
    } else {
        this->vertexShader = this->createShader(shaderParameters->vertexShaderSource, GL_VERTEX_SHADER);
    }

    if (shaderParameters == nullptr || shaderParameters->fragmentShader == 0){
        this->fragmentShader = this->createShader(this->fragmentShaderSource, GL_FRAGMENT_SHADER);
    } else {
        this->fragmentShader = this->createShader(shaderParameters->fragmentShaderSource, GL_FRAGMENT_SHADER);
    }

    if (shaderParameters == nullptr || shaderParameters->shaderProgram == 0){
        this->shaderProgram = this->createShaderProgram(this->vertexShader, this->fragmentShader);
    }else {
        this->shaderProgram = shaderParameters->shaderProgram;
    }
}

unsigned int App::Shader::createShader(std::string shaderSource, GLuint shaderType) {
    // create the vertex shader
    unsigned int shader;
    const char *shorthandShaderType;
    const char *shaderSourceCString = shaderSource.c_str();

    if (shaderType == GL_VERTEX_SHADER) {

        shader = glCreateShader(GL_VERTEX_SHADER);
        shorthandShaderType = "VERTEX";
        this->vertexShader = shader;

    } else if (shaderType == GL_FRAGMENT_SHADER) {

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

    if (!compileSuccess) {
        glGetShaderInfoLog(shader, 512, NULL, infoLog);
        std::cout << "ERROR: SHADER::" << shorthandShaderType << "::COMPILATION FAILED\n" << infoLog << std::endl;
        return -1;
    }

    return shader;
}

unsigned int App::Shader::createShaderProgram(unsigned int vertexShader, unsigned int fragmentShader) {
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
    if (!success) {
        glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
        std::cout << "ERROR: SHADER PROGRAM::FAILED\n" << infoLog << std::endl;
        return -1;

    }

    this->shaderProgram = shaderProgram;

    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    return shaderProgram;
}




