/*! \file ex06.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 28-10-2019 
 *  \brief : ex6 tp4 calcul sqrt 2 methode theon
 */

#include "../lib.h"

/*!
* \fn float	theon(int n)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-11
*
* \brief : Approx sqrt2 2 methode theon 
* \param n : nb d'iterations 
*
* \return : Retourne valeur de sqrt obtenue
* \remark : ATTENTION UTILISER UNE ITERATION < 100 SINON CHANGER FLOAT EN DOUBLE LONG
*/
float	theon(int n)
{
	float pn;
	float qn;
	float tmp;
	int i;

	pn = 1;
	qn = 1;
	i = 0;
	while (i <= n)
	{	
		tmp = qn;
		qn = pn + qn;
		pn = pn + 2 * tmp;
		i++;
	}
	return (pn / qn);
}

