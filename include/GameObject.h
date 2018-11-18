//
// Created by Glenn on 11/18/2018.
//

#ifndef GPU_RENDERING_GAMEOBJECT_H
#define GPU_RENDERING_GAMEOBJECT_H

#include "Mesh.h"
#include "Shader.h"

namespace App {

    class GameObject {
    public:
        GameObject(Mesh *mesh, Shader *shader);
        Mesh *mesh;
        Shader *shader;
    };
}


#endif //GPU_RENDERING_GAMEOBJECT_H
