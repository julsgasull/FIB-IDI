#version 330 core

out vec4 FragColor;

void main() {
    FragColor = vec4(1.0);
    if (gl_FragCoord.x < 354) 
    {
        FragColor = vec4(1, 0, 0, 1);
    }
}
