/*!
* \file somme.c
* \brief : Somme de deux vecteurs
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*/

//#include "../lib.h"
#include <stdio.h>

void    vectoriel(int vect1[3], int vect2[3], int vect3[3])
{
	vect3[0] = (vect1[1] * vect2[2]) - (vect1[2] * vect2[1]); 
	vect3[1] = (vect1[2] * vect2[0]) - (vect1[0] * vect2[2]);
	vect3[2] = (vect1[0] * vect2[1]) - (vect1[1] * vect2[0]);
}

int main(void)
{
	int v1[3];
	int v2[3];
	int v3[3];

	v1[0] = 1;
	v1[1] = 2;
	v1[2] = 3;

	v2[0] = 2;
	v2[1] = 2;
	v2[2] = 2;

	v3[0] = 0;
	v3[1] = 0;
	v3[2] = 0;

	vectoriel(v1,v2,v3);
	int i = 0;
	while (i != 3)
	{
		printf("Case %d : %d \n", i, v3[i]);
		i++;
	}
	return 0;
}
