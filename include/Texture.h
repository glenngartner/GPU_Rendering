//
// Created by Glenn on 11/18/2018.
//

#ifndef GPU_RENDERING_TEXTURE_H
#define GPU_RENDERING_TEXTURE_H

#include <string>
#include "Mesh.h"

namespace App {

    class Texture {
    public:
        Texture();
        Texture(const char *imageLocation, Mesh *mesh);

        int width, height, channels;
        unsigned char *imageData;
        unsigned int glTexture;

    private:
        void loadImage(const char *imageLocation);
        void generateGLTexture(Mesh *mesh);
    };
}


#endif //GPU_RENDERING_TEXTURE_H
