#include "../lib.h"
void	disp_mat(float **mat, int size);

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
		printf("Etape numero %d : \n", i);
		disp_mat(mat,size);
		mat = zerosSousPivot(mat,i,size);
		i++;
	}
	return mat;
}

float **formeTriangulaire2(float **mat, int size)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i != size)
	{
		j = i;
		printf("Etape numero %d : \n", i);
		disp_mat(mat,size);
		if(mat[i][i] == 0)
		{
			while(mat[i][i] == 0)
				{
					j++;
					mat = permutation(mat,i,j,size);
				}
		}
		else
			mat = zerosSousPivot(mat,i,size);
		i++;
		j++;
	}
	return mat;
}

float **formeTriangulaire3(float **mat, int size)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i != size)
	{
		j = i;
		if(mat[i][i] == 0)
		{
			while(mat[i][i] == 0)
				{
					j++;
					mat = permutation(mat,i,j,size);
				}
		}
		else
			mat = zerosSousPivot(mat,i,size);
		i++;
		j++;
	}
	return mat;
}

float **zerosSurPivot(float **mat, int i, int size)
{
	int j;

	j = i-1;
	while(j >= 0)
	{
		mat = transvection(mat, j, i, -(mat[j][i]), size);
		j--;
	}
	return mat;
}


float **identite(float **mat, int size)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i != size)
	{
		j = i;
		if(mat[i][i] == 0)
		{
			while(mat[i][i] == 0)
				{
					j++;
					mat = permutation(mat,i,j,size);
				}
		}
		else
			mat = zerosSurPivot(mat,i,size);
		i++;
		j++;
	}
	return mat;
}
