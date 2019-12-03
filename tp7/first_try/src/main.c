

#include "../lib.h"
float **dilatation(float **mat, int i, float k, int size);
float **permutation(float **mat,int i, int j, int size);
float **transvection(float **mat, int i, int j, float k, int size);
float **zerosSousPivot(float **mat, int i, int size);



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

int main(int ac, char **av)
{
	int size;
	size = get_size(ac,av);
	float **mat;
	printf("Size = %d\n",size);
	mat = get_matrix(size);
	disp_mat(mat,size);
	mat = zerosSousPivot(mat,0,size);
	printf("-------------\n");
	disp_mat(mat,size);
	return 0;
}
