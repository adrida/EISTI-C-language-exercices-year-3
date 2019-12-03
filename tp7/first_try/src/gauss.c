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

float **transvection(float **mat, int i, int j, float k, int size)
{
	int l;

	l = 0;
	while(l != size)
	{
		mat[i][l] = mat[i][l] + k * mat[j][l];
		l++;
	}
	return mat;
}

float **zerosSousPivot(float **mat, int i, int size)
{
	int j;

	j = i+1;
	float tmp;
	tmp = (1 / mat[i][i]);
	while(j != size)
	{
		mat = transvection(mat, j, i, -(tmp * mat[j][i]), size);
		j++;
	}
	mat = dilatation(mat, i, tmp, size);
	return mat;
}

float **formeTriangulaire(float **mat, int size)
{
	int i;

	i = 0;
	while (i != size)
	{
		mat = zerosSousPivot(mat,i,size);
		i++;
	}
	return mat;
}




