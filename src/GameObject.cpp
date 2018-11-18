//
// Created by Glenn on 11/18/2018.
//

#include <GameObject.h>

#include "GameObject.h"

App::GameObject::GameObject(App::Mesh *mesh, App::Shader *shader) {
    this->mesh = mesh;
    this->shader = shader;
}
