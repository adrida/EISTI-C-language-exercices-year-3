/*! \file ex01.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 22-10-2019 
 *  \brief
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*!
* \fn : float	quaddrillage(int n)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-11
*
* \brief : Fonction qui calcule une approximation de pi en utilisant la methode du quadrillage
* \param n : nombre d'itteration -> Correspond en fait a la precision voulue pour pi
*
* \return : Retourne l'approximation de pi obtenue
*/
float	quaddrillage(int n)
{
	float x;
	float y;
	float i;
	float count;
	int r = 10;

	x = ((float)rand()/(float)(RAND_MAX/r));
//	printf("x = %f\n", x);
	y = ((float)rand()/(float)(RAND_MAX/r));
//	printf("y = %f\n", y);
	i = 0;
	count = 0;
	while (i <= n)
	{
		x = ((float)rand()/(float)(RAND_MAX/r));
		y = ((float)rand()/(float)(RAND_MAX/r));
//		printf(" RACINE = %f\n", (sqrt((x * x) + (y * y))));
		if (sqrt((x * x) + (y * y)) <= r)
		{	
			count++;
//			printf("COUNT = %d\n", count);
//			printf("[--------------\n");
//			printf("x = %f\n", x);
//			printf("y = %f\n", y);
//			printf("--------------]\n");
		}
		else
			printf("\n>>>>>>  ! Skiped ! cpt = %f-------\n i = %f\n", count,i );
		i++;	
	}
	printf("Iteration = %f\n", i);
	printf("COUNT = %f\n", count);
	return (4 * (count / i));
}

int main(int ac, char **av)
{
	printf("Approximation de pi : %f\n", quaddrillage(atoi(av[1])));
	return 0; 	
}
