/*! \file ex03.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 23-10-2019 
 *  \brief : ex03 tp4 approx sqrt2
 */

#include "../lib.h"

/*!
* \fn float	pi_john(int n)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-11
* \brief : Approx racine de 2 methode de john
*
* \param n : Nombre d'iterations ie precision
*
* \return : Retourne une approx de racine de 2
*/
float	pi_john(int n)
{
	float i;
	float pi;

	i = 1;
	pi = 1;

	while (i <= n)
	{
		pi = pi * (((2 * i) * (2 * i)) / (((2 * i) * (2 * i)) - 1));
		i++;
	}
	return (pi * 2);
}
