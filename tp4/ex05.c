/*! \file ex05.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 28-10-2019 
 *  \brief
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float	halley(int n)
{
	float un;
	int i;

	i = 0;
	un = 1;
	while (i <= n)
	{
		un = un * (((un * un) + 6) / ((3 * un * un) + 2));
		i++;
	}
	return un;
}

/*
int	main(int ac, char **av)
{

	printf("Approx sqrt 2 = %f\n", halley(atoi(av[1])));
	return 0;

}
*/
