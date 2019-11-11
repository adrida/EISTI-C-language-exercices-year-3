/*! \file ex02.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 23-10-2019 
 *  \brief : Exercice 2 tp4 approx pi methode madhava
 */

#include "../lib.h"

/*!
* \fn : float	pi_madhava(int n)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-11
* \brief : Calcul de pi selon la methode de Madhava 
*
* \param n : Nombre d'iterations ie precision
*
* \return : Retourne l'approximation de pi
*/
float	pi_madhava(int n)
{
	int i;
	float pi;

	i = 0;
	pi = 0;

	while (i <= n)
	{
		if ((i % 2) == 0)
			pi += ( 1 / ((2 * (float)i) + 1));
		else
			pi += ( (-1) / ((2 * (float)i) + 1));
		i++;	
	}	
	return (4 * pi);
}
