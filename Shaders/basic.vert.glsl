#version 450 core

layout (location = 0) in vec3 aPos;

uniform mat4 rotationMatrix;

void main(){
    gl_Position = rotationMatrix * vec4(aPos, 1.0);
}