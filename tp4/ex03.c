/*! \file ex03.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 23-10-2019 
 *  \brief
 */

#include <stdio.h>
#include <stdlib.h>

float	pi_john(int n)
{
	float i;
	float pi;

	i = 1;
	pi = 1;

	while (i <= n)
	{
		pi = pi * (((2 * i) * (2 * i)) / (((2 * i) * (2 * i)) - 1));
		i++;
	}
	return (pi * 2);
}

int	main(int ac, char **av)
{
	printf("Approx pi : %f\n", pi_john(atoi(av[1])));
	return 0;
}
