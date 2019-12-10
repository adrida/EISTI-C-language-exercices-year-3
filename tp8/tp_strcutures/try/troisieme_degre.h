#ifndef TROISIEME_DEGRE_h
# define TROISIEME_DEGRE_h

#include <math.h> //sqrt
#include <stdlib.h> //atoi atof
#include <stdio.h> // printf

struct nombreComplexe
{
	float Re;
	float Im;
};

struct solutionEqu3D
{
	struct nombreComplexe x1;
	struct nombreComplexe x2;
	struct nombreComplexe x3;
};
#endif