/*! \file ex04.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 28-10-2019 
 *  \brief
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long double	newton(int n)
{
	long double	unp;
	int 		i;

	i = 0;
	unp = 1;
	while (i <= n)
	{
		unp = (unp / 2) + (1 / unp);
		i++;
	}
	return unp;
}



int	main(int ac, char **av)
{
	printf ("Approx sqrt 2  = %Lf\n", newton(atoi(av[1])));
	return 0;
}