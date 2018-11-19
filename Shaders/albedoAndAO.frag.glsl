#version 450

out vec4 FragColor;
in vec2 TexCoord;

uniform sampler2D albedoTexture;
uniform sampler2D aoTexture;

void main() {
    FragColor = texture(albedoTexture, TexCoord)  * texture(aoTexture, TexCoord);
}
