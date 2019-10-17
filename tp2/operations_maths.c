#include <stdio.h>

void	fact(void)
{
	int n = 0;
	int res = 1;
	printf("Entrez votre nombre :\n");
	scanf("%d", &n);
	if (n == 0)
		printf("%d! = %d\n", n, res); 
	else
	{
		while (n != 0)
		{
			res = n * res;
			n--;
		}
		printf("%d! = %d\n", n, res); 
	}
	return;
}
void	pgcd(void);
void	eq2nd(void);



void	menu(void)
{
	int input = 1;

	printf("========== MENU ===========\n"); 
	printf("Faites votre choix : \n");
	printf("1 --- Calcul de factorielle \n");
	printf("2 --- PGCD \n");
	printf("3 --- Equation second degre \n");
	printf("0 ---> Quitter \n\n");
	printf("Faites votre choix : \n");
	scanf("%d", &input);
	if (input == 0)
		return;
	if (input == 1)
		fact();
	if (input == 2)
		pgcd();
	if (input == 3)
		eq2nd();
	menu();
}


int	main(int ac, char **av)
{
	menu();
	return 0;
}
