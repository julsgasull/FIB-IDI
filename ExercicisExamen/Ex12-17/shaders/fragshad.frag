#version 330 core

in vec3 fcolor;
out vec4 FragColor;

// Ex9: pintar escena franges blanques i negres
uniform bool franges;
vec3 color = fcolor;	// variable auxiliar per poder modificar-la (si s'escau)


void main()
{
	if (franges) // Ex9: pintar escena franges blanques i negres
	{
		int id = int(gl_FragCoord.y)/10;			// Franges de 10 pixels

		if (id%2 == 0)	color = vec3 (0., 0., 0.);	// Negre
		else 			color = vec3 (1., 1., 1.);	// Blanc
	}

	FragColor = vec4(color,1);
}
