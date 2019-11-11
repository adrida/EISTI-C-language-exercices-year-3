/*! \file ex04.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 28-10-2019 
 *  \brief : ex4 tp4 approx sqrt2 methode newton
 */

#include "../lib.h"

/*!
* \fn long double	newton(int n)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-11
*
* \brief : Calcul de sqrt 2 methode de newton 
* \param n : Nombre d'iterations, ie precision
*
* \return : retourne valeur de sqrt 2
*/
long double	newton(int n)
{
	long double	unp;
	int 		i;

	i = 0;
	unp = 1;
	while (i <= n)
	{
		unp = (unp / 2) + (1 / unp);
		i++;
	}
	return unp;
}
