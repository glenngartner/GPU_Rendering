//
// Created by Glenn on 11/18/2018.
//

#ifndef GPU_RENDERING_TEXTURE_H
#define GPU_RENDERING_TEXTURE_H

#include <string>

namespace App {

    enum TextureTypes {
        UNASSIGNED,
        ALBEDO,
        ROUGHNESS,
        METALNESS,
        NORMAL,
        HEIGHT,
        AMBIENT_OCCLUSION,
    };

    class Texture {
    public:
        Texture();
        Texture(const char *imageLocation);

        int width, height, channels;
        unsigned char *imageData;
        unsigned int glTexture;

        TextureTypes textureType = UNASSIGNED;

    private:
        void loadImage(const char *imageLocation);
        void generateGLTexture();
    };
}


#endif //GPU_RENDERING_TEXTURE_H
