/*!
* \file somme.c
* \brief : Somme de deux vecteurs
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*/

#include "../lib.h"

/*!
* \fn :void    somme(int vect1[M], int vect2[M], int vect3[M])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*
* \brief : Calcule la somme de deux vecteurs et mets le resultat dans un 3eme 
* \param vect1[M] : Vecteur 1
* \param vect2[M] : Vecteur 2
* \param vect3[M] : Vecteur resultat
*/
void    somme(int vect1[M], int vect2[M], int vect3[M])
{
	int i;

	i = 0;
	
	while (i != M)
	{
		vect3[i] = vect1[i] + vect2[i];
		i++;
	}
}
