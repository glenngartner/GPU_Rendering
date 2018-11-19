//
// Created by Glenn on 11/18/2018.
//

#include "Material.h"

App::Material::Material(Mesh *mesh, MaterialParams *materialParams) {
    if (materialParams == nullptr){
        this->shader = Shader(mesh);
    } else{
        if (materialParams->albedoColor.x != -1){ this->albedoColor = materialParams->albedoColor;}
        if (materialParams->roughnessValue!= -1.0f){ this->roughnessValue = materialParams->roughnessValue;}
        if (materialParams->metalnessValue!= -1.0f){ this->metalnessValue = materialParams->metalnessValue;}

        if (materialParams->albedoTexture.imageData != nullptr) {
            this->albedoTexture = materialParams->albedoTexture;
            this->albedoTexture.textureType = ALBEDO;
            this->activeTextures.push_back(&(this->albedoTexture));
        }
        if (materialParams->roughnessTexture.imageData != nullptr){
            this->roughnessTexture = materialParams->roughnessTexture;
            this->roughnessTexture.textureType = ROUGHNESS;
            this->activeTextures.push_back(&(this->roughnessTexture));
        }
        if (materialParams->metalnessTexture.imageData != nullptr){
            this->metalnessTexture = materialParams->metalnessTexture;
            this->metalnessTexture.textureType = METALNESS;
            this->activeTextures.push_back(&(this->metalnessTexture));
        }
        if (materialParams->ambientOcclusionTexture.imageData != nullptr){
            this->ambientOcclusionTexture = materialParams->ambientOcclusionTexture;
            this->ambientOcclusionTexture.textureType = AMBIENT_OCCLUSION;
            this->activeTextures.push_back(&(this->ambientOcclusionTexture));
        }

        this->shader = Shader(mesh, materialParams->shaderParameters);

        materialParams = nullptr;
    }
}

void App::Material::useAlbedoColor() {
    int meshColorUniform = glGetUniformLocation(this->shader.shaderProgram, "meshColor");
    glUniform4f(meshColorUniform, this->albedoColor.x, this->albedoColor.y, this->albedoColor.z, 1.0f);
}
