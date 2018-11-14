//
// Created by g on 11/13/18.
//

#include <string>

#ifndef OPENGL_FROM_SCRATCH_SHADERLOADER_H
#define OPENGL_FROM_SCRATCH_SHADERLOADER_H

namespace App {

    class FileLoader {
    public:
        static std::string loadShader(const char *filePath);
    };
}


#endif //OPENGL_FROM_SCRATCH_SHADERLOADER_H
