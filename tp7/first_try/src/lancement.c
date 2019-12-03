
#include "../lib.h"

float **get_matrix(int size)
{
	float **mat;
	int i = 0;
	int j = 0;

	if(!(mat = (float **)malloc(sizeof(float*) * size)))
		return NULL;
	while (i != size)
	{
		if(!(mat[i] = (float *)malloc(sizeof(int) * size)))
			return NULL;
		i++;
	}	
	i = 0;
	while (i != size)
	{
		j = 0;
		while (j != size)
		{
			printf(">>Remplissage ... \n>>Ligne : %d\n>>Colonne : %d\n>> Valeur? \n", i + 1,j + 1);	
			scanf("%f", &mat[i][j]);
			j++;
		}
		i++;
	} 
	return mat;
}

int	get_size(int ac, char **av)
{
	int i;
	int j;
	char c[1];

	i = 0;
	j = 0;
	while(ac != 1)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] == '-' && av[i][j+1] == 'n')
			{
				c[0] = av[i][j+3];
				return (atoi(c));
			}
			j++;
		}
		i++;
		ac--;
	}
	return 0;
}

int	get_method(int ac, char **av)
{
	int i;
	
	i = 0;
	while(ac != 1)
	{
		if (strcmp(av[i]) == "gauss")
			return 1;
		if (strcmp(av[i]) == "determinant")
			return 2;
		i++;
		ac--;
	}
	return 0;
}



void	disp_mat(float **mat, int size)
{
	int i = 0;
	int j = 0;

	while (i != size)
	{
		j = 0;
		while (j != size)
		{
			printf("%f ", mat[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
