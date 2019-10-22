#include <stdio.h>

int	saisienb()
{
	int nb = 0;
	printf("Saisir nb\n");
	scanf("%d", &nb);
	return nb;
}
int main()
{
	printf("Votre nombre est %d\n", saisienb());
	return 0;
}

