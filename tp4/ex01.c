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
	y = ((float)rand()/(float)(RAND_MAX/r));
	i = 0;
	count = 0;
	while (i <= n)
	{
		x = ((float)rand()/(float)(RAND_MAX/r));
		y = ((float)rand()/(float)(RAND_MAX/r));
		if (sqrt((x * x) + (y * y)) <= r)
			count++;
		i-=-1;	
	}
	return (4 * (count / i));
}
