#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	joueLettre(char *motATrouver, char *motMystere, char lettre)
{
	int i = 0;
	int cpt = 0;

	while (motMystere[i] != '\0')
	{
		if (motATrouver[i] == lettre)
		{
			motMystere[i] = lettre;
			cpt++;
		}
		i++;
	} 
	return cpt;
}


int main(int ac, char **av)
{
	char *mat = av[2];
	char *mmst = av[1];
	char let = av[3][0];
	printf("Occs = %d\n", joueLettre(mat,mmst,let));
	printf("New thing = %s\n", mmst);
	return 0;
}
