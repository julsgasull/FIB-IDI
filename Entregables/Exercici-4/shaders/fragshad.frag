#version 330 core

// in vec3 fcolor;
in vec4 vertexFS;
in vec3 normalFS;

in vec3 matambFS;
in vec3 matdiffFS;
in vec3 matspecFS;
in float matshinFS;
// in vec3 fcolor;

out vec4 FragColor;

uniform mat4 view;
uniform vec3 posFocus0;
uniform vec3 posFocus1;
uniform vec3 posFocus2;
uniform int focusType;

vec3 colFocus 		= vec3(0.8, 0.8, 0.8);
vec3 llumAmbient 	= vec3(0.2, 0.2, 0.2);
// vec3 posFocus 		= vec3(0.0, 0.0, 0.0);  // en SCA

vec3 Lambert (vec3 NormSCO, vec3 L)
{ // S'assumeix que els vectors que es reben com a paràmetres estan normalitzats
  vec3 colRes = llumAmbient * matambFS;	// Inicialitzem color a component ambient

	if (dot (L, NormSCO) > 0) colRes = colRes + colFocus * matdiffFS * dot (L, NormSCO);	// Afegim component difusa, si n'hi ha

	return (colRes);
}

vec3 Phong (vec3 NormSCO, vec3 L, vec4 vertSCO)
{
	// Els vectors estan normalitzats

	vec3 colRes = Lambert (NormSCO, L);	  // Inicialitzem color a Lambert

	// Calculem R i V
  if (dot(NormSCO,L) < 0) return colRes;  // no hi ha component especular

	vec3 R = reflect(-L, NormSCO); // equival a: normalize (2.0*dot(NormSCO,L)*NormSCO - L);
  vec3 V = normalize(-vertSCO.xyz);

	if ((dot(R, V) < 0) || (matshinFS == 0)) return colRes;  // no hi ha component especular

	float shine = pow(max(0.0, dot(R, V)), matshinFS);	// Afegim la component especular

	return (colRes + matspecFS * colFocus * shine);
}

void main ()
{
	// L + normalitzarla
  vec3 Lfragment;

  // Camera
  if (focusType == 0) Lfragment = normalize(posFocus0 - vertexFS.xyz);

  // Escena
  else if (focusType == 1)
  {	// patricio1
    vec4 posFocusNew = view * vec4(posFocus1, 1.0);
    Lfragment = normalize((posFocusNew-vertexFS).xyz);
  }
	else //if (focusType == 2)
	{ // patricio2
		vec4 posFocusNew = view * vec4(posFocus2, 1.0);
		Lfragment = normalize((posFocusNew-vertexFS).xyz);
	}

	// Normal
	vec3 normalNew = normalize(normalFS);

	// Phong
	FragColor = vec4 (Phong(normalNew, Lfragment, vertexFS), 1);
}
