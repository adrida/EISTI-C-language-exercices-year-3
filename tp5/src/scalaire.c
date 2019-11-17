/*!
* \file scalaire.c
* \brief :Calcule le produit scalaire de deux vecteurs
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*/

//#include "../lib.h"
#include <stdio.h>
#define M 5

/*!
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

int main(void)
{
	int v1[M];
	int v2[M];

	v1[0] = 2;
	v1[1] = 1;
	v1[2] = 3;
	v1[3] = 2;
	v1[4] = 6;

	v2[0] = 3;
	v2[1] = 4;
	v2[2] = 5;
	v2[3] = 6;
	v2[4] = 7;

	printf("Scalaire = %d \n", scalaire(v1,v2));
	return 0;
}
