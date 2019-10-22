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
	int i;

	i = 1;
	while (i <= 10)
	{
		printf("%d x %d = %d\n", i , n , i * n);
		i++;
	}
}

void	estAmstrong(int n)
{
	int somme_cubes = 0;
	int i;

	i = n;
	while (i != 0)
	{
		somme_cubes = somme_cubes + ((i % 10) * (i % 10) * (i % 10));
		i = i /10;
	}
	if (somme_cubes == n)
		printf("C'est un nombre d'Amstrong\n");
	else
		printf("Ce n'est pas un nombre d'Amstrong\n");
	return;	
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
