/*!
* \file scalaire.c
* \brief :Calcule le produit scalaire de deux vecteurs
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*/

#include "../lib.h"

/*!
* \fn : int   scalaire(int vect1[M], int vect2[M])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
* \brief : Calcul le produit scalaire de deux vecteurs 
*
* \param vect1[M] : Vecteur 1
* \param vect2[M] : Vecteur 2
*
* \return : Valeur du produit scalaire
*/
int   scalaire(int vect1[M], int vect2[M])
{
	int i;
	int res;

	i = 0;
	res = 0;
	
	while (i != M)
	{
		res = res + (vect1[i] * vect2[i]);
		i++;
	}
	return res;
}
