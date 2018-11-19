//
// Created by Glenn on 11/18/2018.
//

#ifndef GPU_RENDERING_GAMEOBJECT_H
#define GPU_RENDERING_GAMEOBJECT_H

#include "Mesh.h"
#include "Shader.h"
#include "Material.h"

namespace App {

    class GameObject {
    public:
        GameObject(Mesh *mesh, Material *material);
        Mesh *mesh;
        Material *material;
    };
}


#endif //GPU_RENDERING_GAMEOBJECT_H
