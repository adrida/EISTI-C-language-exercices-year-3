

//#include "../lib.h"
#include <stdlib.h>
#include <stdio.h>
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


int main(int ac, char **av)
{
	int size;

	printf("Size = %d\n",size = get_size(ac,av));
	return 0;
}
