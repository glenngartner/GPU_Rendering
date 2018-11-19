//
// Created by Glenn on 11/18/2018.
//

#ifndef GPU_RENDERING_TEXTURE_H
#define GPU_RENDERING_TEXTURE_H

#include <string>

namespace App {

    class Texture {
    public:
        Texture();
        Texture(const char *imageLocation);

        int width, height, channels;
        unsigned char *imageData;

    private:
        void loadImage(const char *imageLocation);
    };
}


#endif //GPU_RENDERING_TEXTURE_H
