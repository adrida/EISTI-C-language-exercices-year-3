/*!
* \file equations.c
* \brief : programme permettant d'approximer la resolution d'equation du second et du troiseme degre
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-12-10
*/
#include "../equations.h"

/*!
* \fn : struct solutionEqu2D	resolution(float a, float b, float c)
* \brief : Resout une equation du second degre 
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-12-10
*
* \param a : coeff a
* \param b : coeff b
* \param c : coeff c
*
* \return : Retourne la solution stockee dans une structure adaptee
*/
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

/*!
* \fn : void	disp_res(struct solutionEqu2D sol)
* \brief : Affiche la solution d'une eq du 2nd degre 
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-12-10
*
* \param sol : solution
*/
void	disp_res(struct solutionEqu2D sol)
{
	printf (" X1  : \n\t Re = %f \n\t Im = %f \n", sol.x1.Re, sol.x1.Im);
	printf (" X2  : \n\t Re = %f \n\t Im = %f \n", sol.x2.Re, sol.x2.Im);
}

/*!
* \fn : float get_value(float a,float b,float c, float d, float x)
* \brief : Calcule la valeur de f(x) pour une eq du 3eme degre 
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-12-10
*
* \param a : coeff a
* \param b : coeff b
* \param c : coeff c
* \param d : coeff d
* \param x : x
*
* \return : f(x) 
*/
float get_value(float a,float b,float c, float d, float x)
{
	return(a*x*x*x+b*x*x+c*x+d);
}

/*!
* \fn : float	sol_approchee(float a,float b,float c, float d, float e)
* \brief : trouve une valeur approchee dune des racine avec une precision e 
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-12-10
*
* \param a
* \param b
* \param c
* \param d
* \param e : precision
*
* \return : valeur racine 
*/
float	sol_approchee(float a,float b,float c, float d, float e)
{
	float mid;
 	//float inf = (float)INT_MIN;
	//float sup = (float)INT_MAX; 	
	float inf = -10000;
	float sup = 10000;

	mid = (inf + sup) / 2;
	
	printf("val mid = %f\n", get_value(a,b,c,d,mid));
	printf("val inf = %f\n", get_value(a,b,c,d,inf));
	printf("val sup = %f\n", get_value(a,b,c,d,sup));

	while (ABS(get_value(a,b,c,d,inf) - get_value(a,b,c,d,sup)) > 2*e)
	{
		printf("indice = %f\n", mid);
		printf("inf = %f\n", inf);
		printf("sup = %f\n", sup);
		mid = (inf + sup) / 2;
		if(get_value(a,b,c,d,inf) * get_value(a,b,c,d,mid) >= 0)
			inf = mid;
		else
			sup = mid;
	}
	return (get_value(a,b,c,d,mid));
}

/*!
* \fn : struct solutionEqu3D	troisieme_degre(float a,float b,float c, float d)
* \brief : trouve les solutions d'une eq de 3eme degre 
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-12-10
*
* \param a
* \param b
* \param c
* \param d
*
* \return : solution sol eq 3eme degre
*/
struct solutionEqu3D	troisieme_degre(float a,float b,float c, float d)
{
	struct solutionEqu3D sol;
	sol.x1 = 0;
	sol.x2.Re = 0;
	sol.x2.Im = 0;
	sol.x3.Re = 0;
	sol.x3.Im = 0; 
	float p = (3 * a * c - pow(b,2)) / (3 * pow(a, 2));
	float q = (2 * pow(b,3) - 9 * a * b * c + 27 * pow(a,2) * d) / (27 * pow(a,3));
	float delta_un = q * q + 4*p*p*p / 27 ;
	float racineUne = pow((-q-sqrt(delta_un)/2), 1/3) + pow((-q+sqrt(delta_un)/2), 1/3) - b/(3*a);
	float r;
	float s;
	float t;
	r = a;
	s = b + racineUne;
	t = c + (b + a + racineUne) * racineUne;
	struct solutionEqu2D sol2d;
	sol2d = resolution(r,s,t);
	sol.x1 = racineUne;
	sol.x2 = sol2d.x1;
	sol.x3 = sol2d.x2;
	return sol;
}

/*!
* \fn : void	disp_res_trois(struct solutionEqu3D sol)
* \brief : affiche une solution d'eq du 3eme degre 
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-12-10
*
* \param sol : sol a afficher
*/
void	disp_res_trois(struct solutionEqu3D sol)
{
	printf (" X1 = %f \n", sol.x1);
	printf (" X2  : \n\t Re = %f \n\t Im = %f \n", sol.x2.Re, sol.x2.Im);
	printf (" X3  : \n\t Re = %f \n\t Im = %f \n", sol.x3.Re, sol.x3.Im);
}


int main (int ac, char ** av)
{
	struct solutionEqu3D sol;
	float a = atof(av[1]);
	float b = atof(av[2]);
	float c = atof(av[3]);
	float d = atof(av[4]);
	sol = troisieme_degre(a,b,c,d);
	disp_res_trois(sol);
	return 0;
}
