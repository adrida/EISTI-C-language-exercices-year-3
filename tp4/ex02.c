/*! \file ex02.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 23-10-2019 
 *  \brief
 */

#include <stdio.h>
#include <stdlib.h>

float	pi_madhava(int n)
{
	int i;
	float pi;

	i = 0;
	pi = 0;

	while (i <= n)
	{
		//	printf("iteration #%d\n", i);
		if ((i % 2) == 0)
			pi += ( 1 / ((2 * (float)i) + 1));
		else
			pi += ( (-1) / ((2 * (float)i) + 1));
		i++;	
		printf("pi value : %f\n", pi);
//		printf("Val affectee = %f \n", ( 1 / ((2 * (float)i) + 1)));
	}	
	return (4 * pi);
}



int	main(int ac, char **av)
{
	printf("Approx pi = %f\n", pi_madhava(atoi(av[1])));
	return 0;
}
