//
// Created by Glenn on 11/18/2018.
//

#ifndef GPU_RENDERING_MATERIAL_H
#define GPU_RENDERING_MATERIAL_H

#include "Shader.h"
#include "Texture.h"
#include "Vectors.h"

namespace App {
    struct MaterialParams {
        Vec3 albedoColor = {-1.0f, -1.0f, -1.0f};
        float roughnessValue = -1.0f;
        float metalnessValue = -1.0f;
        Texture albedoTexture;
        Texture roughnessTexture;
        Texture metalnessTexture;
        Texture ambientOcclusionTexture;
        ShaderParameters *shaderParameters;
    };
    class Material {
    public:
        Material(Mesh *mesh, MaterialParams *materialParams = nullptr);
        Vec3 albedoColor = {1.0f, 0.0f, 0.0f};
        Texture albedoTexture;
        float roughnessValue = 0.25f;
        Texture roughnessTexture;
        float metalnessValue = 0.0f;
        Texture metalnessTexture;
        Texture ambientOcclusionTexture;
        Shader shader;

        void useAlbedoColor();
    };
}


#endif //GPU_RENDERING_MATERIAL_H
