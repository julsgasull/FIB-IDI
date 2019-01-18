#version 330 core

out vec4 FragColor;

void main() {
    FragColor = vec4(1, 0, 0, 1);       //vermell
    if (gl_FragCoord.x < 354 && gl_FragCoord.y < 345) FragColor = vec4(1, 1, 0, 1); //groc
    else if ((gl_FragCoord.x >= 354 && gl_FragCoord.y < 345)) FragColor = vec4(0, 1, 0, 1); //verd
    else if ((gl_FragCoord.x >= 354 && gl_FragCoord.y >= 345)) FragColor = vec4(0, 0, 1, 1); //blau
}
