#include <stdio.h>
#include <stdlib.h>

int saisieEntier(void)
{
	int n;
	int nb;
	
	nb = scanf("%d",&n);
	if (nb == 0)
		exit(EXIT_FAILURE);
	return (n);	
}

void	Saisie(void)
{
	int n;
	
	printf("%d\n",saisieEntier());
}

int	main(int ac, char **av)
{
	Saisie();	
	return (0);
}
