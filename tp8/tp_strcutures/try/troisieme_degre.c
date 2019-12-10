#include "troisieme_degre.h"

struct solutionEqu3D	troisieme_degre(float a,float b,float c, float d)
{
	//float disc0 = (b*b) + (4 * c * c * c) / 27;
	float disc0 = (b*b) - 3 * a * c;
	float disc1 = 2*(b*b*b) - (9 * a * b * c) + (27 * a * a *d);
	float Cp = pow(((disc1 + sqrt(disc1*disc1-4*disc0*disc0*disc0))/ 2) / 2, 1.0/3.0);
	float Cm = pow(((disc1 - sqrt(disc1*disc1-4*disc0*disc0*disc0))/ 2) / 2, 1.0/3.0);
	struct solutionEqu3D sol;
	sol.x1.Im = 0;
	sol.x2.Im = 0;
	sol.x3.Im = 0;
	sol.x1.Re = 0;
	sol.x2.Re = 0;
	sol.x3.Re = 0;

	sol.x1.Re = (1 / (3 * a)) * (b + Cp + (disc0 / Cp));
	return sol;
//	sol.x1.Re = pow((-d - sqrt(disc)) / 2, 1.0/3.0)  + pow((-d + sqrt(disc)) / 2, 1.0/3.0);
//	return (pow((-d - sqrt(disc)) / 2, 1.0/3.0)  + pow((-d + sqrt(disc)) / 2, 1.0/3.0));
}

void	disp_res(struct solutionEqu3D sol)
{
	printf (" X1  : \n\t Re = %f \n\t Im = %f \n", sol.x1.Re, sol.x1.Im);
	printf (" X2  : \n\t Re = %f \n\t Im = %f \n", sol.x2.Re, sol.x2.Im);
	printf (" X3  : \n\t Re = %f \n\t Im = %f \n", sol.x2.Re, sol.x2.Im);
}


int main (int ac, char ** av)
{
	struct solutionEqu3D sol;
	float a = atof(av[1]);
	float b = atof(av[2]);
	float c = atof(av[3]);
	float d = atof(av[4]);
	sol = troisieme_degre(a,b,c,d);
	disp_res(sol);
	return 0;
}