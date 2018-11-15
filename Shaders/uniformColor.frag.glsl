#version 450

out vec4 FragColor;

uniform vec4 meshColor;

void main() {
    FragColor = meshColor;
}
