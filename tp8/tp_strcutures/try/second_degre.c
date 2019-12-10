#include "second_degre.h"

struct solutionEqu2D	resolution(float a, float b, float c)
{
	struct solutionEqu2D sol;
	float d;

	d = (b * b) - (4 * a * c);
	sol.x1.Im = 0;
	sol.x2.Im = 0;
	sol.x1.Re = 0;
	sol.x2.Re = 0;
	if (d >= 0)
	{
		sol.x1.Re = (- b) - sqrt(d) / (2 * a);
		sol.x2.Re  = (- b) + sqrt(d) / (2 * a);
	}
	else
	{
		sol.x1.Re = (- b) / (2 * a);
		sol.x2.Re = sol.x1.Re;
		sol.x1.Im = sqrt(-d) / (2 * a);
		sol.x2.Im = -sol.x1.Im;
	}
	return (sol);
}

int	main(int ac, char **av)
{
	struct solutionEqu2D sol;
/*
	float a = (float)atoi(av[1]);
	float b = (float)atoi(av[2]);
	float c = (float)atoi(av[3]); */
	float a = atof(av[1]);
	float b = atof(av[2]);
	float c = atof(av[3]);
	sol = resolution(a,b,c);
	printf (" X1  : \n\t Re = %f \n\t Im = %f \n", sol.x1.Re, sol.x1.Im);
	printf (" X2  : \n\t Re = %f \n\t Im = %f \n", sol.x2.Re, sol.x2.Im);
	return 0;
}