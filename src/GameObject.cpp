//
// Created by Glenn on 11/18/2018.
//

#include <GameObject.h>

#include "GameObject.h"

App::GameObject::GameObject(App::Mesh *mesh, Material *material) {
    this->mesh = mesh;
    this->material = material;
}
