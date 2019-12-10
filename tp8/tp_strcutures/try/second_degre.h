#ifndef SECOND_DEGRE_h
# define SECOND_DEGRE_h

#include <math.h> //sqrt
#include <stdlib.h> //atoi atof
#include <stdio.h> // printf
#include <limits.h> // int min et int max

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

struct solutionEqu2D	resolution(float a, float b, float c);
void	disp_res(struct solutionEqu2D sol);


#endif