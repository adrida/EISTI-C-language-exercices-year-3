#ifndef EQUATIONS_h
# define EQUATIONS_h

#include <math.h> //sqrt
#include <stdlib.h> //atoi atof pour les tests
#include <stdio.h> // printf
#include <limits.h> // int min et int max
# define ABS(x) (x < 0 ? -x : x)

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

struct solutionEqu3D
{
	float x1;
	struct nombreComplexe x2;
	struct nombreComplexe x3;
};

struct solutionEqu2D	resolution(float a, float b, float c);
void	disp_res(struct solutionEqu2D sol);
float get_value(float a,float b,float c, float d, float x);
float	sol_approchee(float a,float b,float c, float d, float e);
struct solutionEqu3D	troisieme_degre(float a,float b,float c, float d);
void	disp_res_trois(struct solutionEqu3D sol);


#endif