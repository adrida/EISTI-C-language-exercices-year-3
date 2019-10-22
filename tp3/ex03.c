#include <stdio.h>

void	echange(int nb1, int nb2)
{
	int tmp;

	printf("Avant echange\n");
	printf("Nb1 = %d\n", nb1);
	printf("Nb2 = %d\n", nb2);
	tmp = nb1;
	nb1 = nb2;
	nb2 = tmp;
	printf("Apes echange\n");
	printf("Nb1 = %d\n", nb1);
	printf("Nb2 = %d\n", nb2);
}


int main(int ac, char **av)
{
	int nb1;
	int nb2;

	nb1 = 5;
	nb2 = 7;

	printf("Avant appel de la fonction \n");
	printf("Nb1 = %d\n", nb1);
	printf("Nb2 = %d\n", nb2);
	printf("Appel de la fonction echange \n");
	echange(nb1,nb2);
	printf("Apres appel de la fonction \n");
	printf("Nb1 = %d\n", nb1);
	printf("Nb2 = %d\n", nb2);
}	
