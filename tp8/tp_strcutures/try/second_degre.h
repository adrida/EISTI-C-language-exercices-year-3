#ifndef SECOND_DEGRE_h
# define SECOND_DEGRE_h

#include <math.h> //sqrt
#include <stdlib.h> //atoi atof
#include <stdio.h> // printf

struct nombreComplexe
{
	float Re;
	float Im;
};

struct solutionEqu2D
{
	struct nombreComplexe x1;
	struct nombreComplexe x2;
};

#endif