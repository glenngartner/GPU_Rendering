//
// Created by Glenn on 11/18/2018.
//

#include <Texture.h>

#include "Texture.h"
#include <stb_image.h>

App::Texture::Texture() {
}

App::Texture::Texture(const char *imageLocation) {
    this->loadImage(imageLocation);
}


void App::Texture::loadImage(const char *imageLocation) {
   this->imageData = stbi_load(imageLocation, &this->width, &this->height, &this->channels, STBI_rgb);
}

