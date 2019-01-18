#version 330 core

out vec4 FragColor;

void main() {
    FragColor = vec4(1, 0, 0, 1);       //vermell
    if (gl_FragCoord.x < 354 && gl_FragCoord.y < 345) FragColor = vec4(1, 1, 0, 1); //groc
    else if ((gl_FragCoord.x >= 354 && gl_FragCoord.y < 345)) FragColor = vec4(0, 1, 0, 1); //verd
    else if ((gl_FragCoord.x >= 354 && gl_FragCoord.y >= 345)) FragColor = vec4(0, 0, 1, 1); //blau
    
    if (int(gl_FragCoord.y) % 25 == 0) discard;
    else if (int(gl_FragCoord.y + 1) % 25 == 0) discard;
    else if (int(gl_FragCoord.y + 2) % 25 == 0) discard;
    else if (int(gl_FragCoord.y + 3) % 25 == 0) discard;
    else if (int(gl_FragCoord.y + 4) % 25 == 0) discard;
}
