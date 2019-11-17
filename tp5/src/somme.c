/*!
* \file somme.c
* \brief : Somme de deux vecteurs
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*/

//#include "../lib.h"
#include <stdio.h>
#define M 5

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

int test_somme(void)
{
	int v1[M];
	int v2[M];
	int v3[M];

	v1[0] = 1;
	v1[1] = 1;
	v1[2] = 1;
	v1[3] = 1;
	v1[4] = 50;

	v2[0] = 2;
	v2[1] = 2;
	v2[2] = 2;
	v2[3] = 2;
	v2[4] = 2;

	v3[0] = 0;
	v3[1] = 0;
	v3[2] = 0;
	v3[3] = 0;
	v3[4] = 0;

	somme(v1,v2,v3);
	int i = 0;
	while (i != M)
	{
		printf("Case %d : %d \n", i, v3[i]);
		i++;
	}
	return 0;
}
