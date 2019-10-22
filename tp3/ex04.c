#include <stdio.h>

void	affichageTriangle(int n)
{
	int i;
	int j;
	int k;

	i = 1;
	j = 1;
	k = 0;
	if (n < 1)
		return;
	while (i != n + 1)
	{
		j = 0;
		k = 0;
		while (k != n - i)
		{
			printf(" ");
			k++;
		}
		while (j != 2 * i - 1)
		{
			printf("*");
			j++;	
		}
		printf("\n");
		i++;
	}		
}

void	tableMultiplication(int n)
{
}

void	estAmstrong(int n)
{
}



void	menu(void)
{
	int i;
	int n;

	printf("Faites votre choix : \n");
	printf("1 : Affichage Triangle \n");
	printf("2 : Table de multiplication \n");
	printf("3 : Nombre d'amstrong \n");
	scanf ("%d", &i);
	if (i == 0)
		return;
	if (i == 1)
	{
		printf("Entier n : \n");
		scanf ("%d", &n);
		affichageTriangle(n);
	}
	if (i == 2)
	{
		printf("Entier n : \n");
		scanf ("%d", &n);
		tableMultiplication(n);
	}
	if (i == 3)
	{
		printf("Entier n : \n");
		scanf ("%d", &n);
		estAmstrong(n);
	}

}




int	main(int ac, char **av)
{
	menu();
	return 0;
}
