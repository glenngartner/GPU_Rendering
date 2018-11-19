#version 450

out vec4 FragColor;

in vec3 ourColor;
in vec2 TexCoord;

uniform sampler2D texture;

void main() {
    FragColor = texture(texture, TexCoord);
}
