

//#include "../lib.h"
#include <stdlib.h>
#include <stdio.h>

int **get_matrix(int size)
{
	int **mat;
	int i = 0;
	int j = 0;
	
	if(!(mat = (int **)malloc(sizeof(int*) * size)))
		return NULL;
	while (i != size)
	{
		if(!(mat[i] = (int *)malloc(sizeof(int) * size)))
			return NULL;
		i++;
	}	
	i = 0;
	while (i != size)
	{
		j = 0;
		while (j != size)
		{
			printf(">>Remplissage ... \n>>Ligne : %d\n>>Colonne : %d\n>> ? ", i + 1,j + 1);	
			scanf("%d", &mat[i][j]);
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
}


void	disp_mat(int **mat, int size)
{
	int i = 0;
	int j = 0;

	while (i != size)
	{
		j = 0;
		while (j != size)
		{
			printf("%d ",mat[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int main(int ac, char **av)
{
	int size;
	FILE* fic = NULL;
	char *mat_brute = NULL;
	size = get_size(ac,av);
	int **mat;
	
	printf("Size = %d\n",size);
	fgets(mat_brute, sizeof(int) * size * size, stdout);
	if (mat_brute == NULL)
		mat = get_matrix(size);
	disp_mat(mat,size);
	return 0;
}
