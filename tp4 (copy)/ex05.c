/*! \file ex05.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 28-10-2019 
 *  \brief : ex5 tp4 calcul sqrt2 halley
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*!
* 'fn float	halley(int n)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-11
*
* \brief : Approx racine 2 methode Halley
* \param n : nb d'iterations
*
* \return : valeur de sqrt 2
*/
float	halley(int n)
{
	float un;
	int i;

	i = 0;
	un = 1;
	while (i <= n)
	{
		un = un * (((un * un) + 6) / ((3 * un * un) + 2));
		i++;
	}
	return un;
}
