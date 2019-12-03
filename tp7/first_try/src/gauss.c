/*!
* \file gauss.c
* \brief : methode de gauss
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-12-03
*/
#include "../lib.h"

void	disp_mat_plius(float **mat, int lines, int col)
{
	int i = 0;
	int j = 0;

	while (i != lines)
	{
		j = 0;
		while (j != col)
		{
			printf("%f ", mat[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}



float **dilatation(float **mat, int i, float k, int size, int len)
{
	int j;
	
	j = 0;
	while (j != len)
	{
		mat[i][j] = k * mat[i][j];
		j++;
	}
	return mat;
}

float **permutation(float **mat,int i, int j, int size, int len)
{
	int k;

	float tmp[size];
	k = 0;
	while(k != len)
	{
		tmp[k] = mat[i][k];
		k++;
	}
	k = 0;
	while(k != len)
	{
		mat[i][k] = mat[j][k];
		k++;
	}
	k = 0;
	while(k != len)
	{
		mat[j][k] = tmp[k];
		k++;
	}
	return mat;
}

float **transvection(float **mat, int i, int j, float k, int size, int len)
{
	int l;

	l = 0;
	while(l != len)
	{
		mat[i][l] = mat[i][l] + k * mat[j][l];
		l++;
	}
	return mat;
}

float **zerosSousPivot(float **mat, int i, int size, int len)
{
	int j;

	j = i+1;
	float tmp;
	tmp = (1 / mat[i][i]);
	while(j != size)
	{
		mat = transvection(mat, j, i, -(tmp * mat[j][i]), size, len);
		j++;
	}
	mat = dilatation(mat, i, tmp, size, len);
	return mat;
}

float **formeTriangulaire(float **mat, int size, int len)
{
	int i;

	i = 0;
	while (i != size)
	{
		printf("Etape numero %d : \n", i);
		disp_mat(mat,size);
		mat = zerosSousPivot(mat,i,size,len);
		i++;
	}
	return mat;
}

float **formeTriangulaire2(float **mat, int size, int len)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i != size)
	{
		j = i;
		printf("Etape numero %d : \n", i);
		disp_mat_plius(mat,size,len);
		if(mat[i][i] == 0)
		{
			while(mat[i][i] == 0)
				{
					j++;
					mat = permutation(mat,i,j,size,len);
				}
		}
		else
			mat = zerosSousPivot(mat,i,size,len);
		i++;
		j++;
	}
	return mat;
}

float **formeTriangulaire3(float **mat, int size, int len)
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
					mat = permutation(mat,i,j,size,len);
				}
		}
		else
			mat = zerosSousPivot(mat,i,size,len);
		i++;
		j++;
	}
	return mat;
}

float **zerosSurPivot(float **mat, int i, int size, int len)
{
	int j;

	j = i-1;
	while(j >= 0)
	{
		mat = transvection(mat, j, i, -(mat[j][i]), size,len);
		j--;
	}
	return mat;
}


float **identite(float **mat, int size, int len)
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
					mat = permutation(mat,i,j,size,len);
				}
		}
		else
			mat = zerosSurPivot(mat,i,size,len);
		i++;
		j++;
	}
	return mat;
}



float **inverse(float **mat, int size, int len)
{
	float **mat_etendue;
	int i = 0;
	int j = 0;

	mat_etendue = (float **)malloc(sizeof(float *) * size);
	while (i != size)
	{
		mat_etendue[i] = (float *)malloc(sizeof(float) * 2 * size);
		i++;
	}


	i = 0;
	while(i != size)
	{
		j = 0;
		while (j != size)
		{
			mat_etendue[i][j] = mat[i][j];
			j++;
		}
		i++;
	}
	i = 0;
	while(i != size)
	{
		j = size;
		while ( j != 2 * size)
		{
			if (i + size != j)
				mat_etendue[i][j] = 0;
			else
				mat_etendue[i][j] = 1;
			j++;
		}
		i++;
	}
	//printf("before GAUSS\n");
	//disp_mat_plius(mat_etendue,size,2*size);
	mat_etendue = formeTriangulaire3(mat_etendue,size,2*size);
	mat_etendue = identite(mat_etendue,size,2*size);	
	//printf("after GAUSS\n");
	//disp_mat_plius(mat_etendue,size,2*size);

	i = 0;
	j = size;
	int k;
	while(i != size)
	{
		k = 0;
		j = size;
		while(j != 2 * size)
		{
			mat[i][k] = mat_etendue[i][j];
			j++;
			k++;
		}
		i++;
	}
	return mat;
}
