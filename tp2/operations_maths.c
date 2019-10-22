#include <stdio.h>
#include <math.h>

void	fact(void)
{
	int n = 0;
	int res = 1;
	int i;
	printf("Entrez votre nombre :\n");
	scanf("%d", &n);
	i = n;
	if (n <= 0)
		return;
	if (n == 0)
		printf("%d! = %d\n", n, res); 
	else
	{
		while (n != 0)
		{
			res = n * res;
			n--;
		}
		printf("%d! = %d\n", i, res); 
	}
	return;
}
void	pgcd(void)
{

	int a = 1;
	int b = 1;
	int r = 0;
	printf("Entrez votre nombre a :\n");
	scanf("%d", &a);
	printf("Entrez votre nombre b :\n");
	scanf("%d", &b);
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("Le PGCD est %d\n", a); 
	return;
}

void	eq2nd(void)
{
	
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	printf("Entrez le coeff a :\n");
	scanf("%e", &a);
	printf("Entrez le coeff b :\n");
	scanf("%e", &b);
	printf("Entrez le coeff c :\n");
	scanf("%e", &c);
	d = (b * b) - (4 * a * c);
	if (d > 0)
		printf("La racine 1 est : %f\nLa racine 2 est : %f", ((-b - sqrt(d)) / (2 * a)) , ((-b + sqrt(d)) / (2 * a)));
	if (d == 0)
		printf("La racine est : %f\n",((-b) / (2 * a)));
	return;

}


void	menu(void)
{
	int input = 1;

	printf("\n\n                         ========== MENU ===========\n"); 
	printf("\n                        1 --- Calcul de factorielle \n");
	printf("                        2 --- PGCD \n");
	printf("                        3 --- Equation second degre \n");
	printf("                        0 ---> Quitter \n\n");
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
