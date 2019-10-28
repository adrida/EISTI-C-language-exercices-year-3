/*! \file ex06.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 28-10-2019 
 *  \brief
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float	theon(int n)
{
	float pn;
	float qn;
	float tmp;
	int i;

	pn = 1;
	qn = 1;
	i = 0;
	while (i <= n)
	{	
		tmp = qn;
		qn = pn + qn;
		pn = pn + 2 * tmp;
		i++;
	}
	return (pn / qn);
}


int	main(int ac, char **av)
{
	// ATTENTION UTILISE UNE ITERATION < 100 SINON CHANGER FLOAT EN DOUBLE LONG
	printf("Approx sqrt 2 = %f\n", theon(atoi(av[1])));
	return 0;
}
