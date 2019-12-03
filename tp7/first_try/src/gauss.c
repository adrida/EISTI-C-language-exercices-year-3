#include "../lib.h"

float **dilatation(float **mat, int i, float k, int size)
{
	int j;
	
	j = 0;
	while (j != size)
	{
		mat[i][j] = k * mat[i][j];
		j++;
	}
	return mat;
}

float **permutation(float **mat,int i, int j, int size)
{
	int k;

	float tmp[size];
	k = 0;
	while(k != size)
	{
		tmp[k] = mat[i][k];
		k++;
	}
	k = 0;
	while(k != size)
	{
		mat[i][k] = mat[j][k];
		k++;
	}
	k = 0;
	while(k != size)
	{
		mat[j][k] = tmp[k];
		k++;
	}
	return mat;
}

