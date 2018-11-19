//
// Created by Glenn on 11/18/2018.
//

#include <glad/glad.h>
#include <Texture.h>

#include "Texture.h"
#include "Mesh.h"
#include <stb_image.h>

App::Texture::Texture() {
}

App::Texture::Texture(const char *imageLocation) {
    this->loadImage(imageLocation);
    this->generateGLTexture();
}


void App::Texture::loadImage(const char *imageLocation) {
   this->imageData = stbi_load(imageLocation, &this->width, &this->height, &this->channels, STBI_rgb);
}

void App::Texture::generateGLTexture() {
    unsigned int texture;
    glGenTextures(1, &texture);
    this->glTexture = texture;

    glBindTexture(GL_TEXTURE_2D, texture);

    // set wrapping method
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    // set filter method
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);


    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, this->width, this->height, 0, GL_RGB, GL_UNSIGNED_BYTE, this->imageData);
    glGenerateMipmap(GL_TEXTURE_2D);

    stbi_image_free(this->imageData);
}

