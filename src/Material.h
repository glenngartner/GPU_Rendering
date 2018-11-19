//
// Created by Glenn on 11/18/2018.
//

#ifndef GPU_RENDERING_MATERIAL_H
#define GPU_RENDERING_MATERIAL_H

#include "Shader.h"

namespace App {

    class Material {
    public:
        unsigned int albedoColor = 0xFF0000;
        // Texture albedoTexture;
        float roughnessValue = 0.25f;
        // Texture roughnessTexture;
        float metalnessValue = 0.0f;
        // Texture metalnessTexture
        Shader *shader;
    };
}


#endif //GPU_RENDERING_MATERIAL_H
