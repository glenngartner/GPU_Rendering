//
// Created by g on 11/13/18.
//

#include <FileLoader.h>
#include <string>
#include <fstream>
#include <iostream>

std::string App::FileLoader::loadShader(const char *filePath){

    std::string content;
    std::ifstream fileStream(filePath, std::ios::in);

    if (!fileStream.is_open()){
        std::cerr << "Could not read shader file from: " << filePath << std::endl;
        return "";
    }

    std::string line = "";
    while (!fileStream.eof()){
        std::getline(fileStream, line);
        content.append(line + "\n");
    }

    fileStream.close();
    return content;
}
