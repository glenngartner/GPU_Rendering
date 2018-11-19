//
// Created by Glenn on 11/19/2018.
//

#include <Transforms.h>

#include "Transforms.h"
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

void App::Transforms::run() {
    std::cout << "\n#########################################" << std::endl;
    std::cout << "Printing Transform tests to the console::" << std::endl;
    std::cout << "###########################################" << std::endl;


    glm::vec4 vec(1.0f, 0.0f, 0.0f, 1.0f);
    glm::mat4 identityMatrix(1.0f);
    glm::vec3 amountToTranslateBy(1.0f, 1.0f, 0.0f);
    glm::mat4 translationMatrix = glm::translate(identityMatrix, amountToTranslateBy);
    vec = translationMatrix * vec;
    printf("x: %f, y: %f, z: %f", vec.x, vec.y, vec.z);






    std::cout << "\n###########################################" << std::endl;
}

void App::Transforms::printStatement(std::string string) {
    std::cout << string << std::endl;
}


