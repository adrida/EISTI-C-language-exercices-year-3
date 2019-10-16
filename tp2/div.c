#include <stdio.h>
void	div()
{
	int n = 0;	
	int d = 1;

	printf ("N = ?\n");
	scanf("%d",&n);
	printf ("D = ?\n");
	scanf("%d", &d);
	if (d != 0)
		printf("%d / %d = %d\n", n,d,n/d);
	else
		printf("division impossible");
}

int main(int ac, char **av)
{
	// La fonction prend en compte des entiers donc ne traite pas les nombres decimaux d'ou le fait qu'il n'y ait pas de resultat avec les deux dernieres entrees
	div();
	return (0);
}
