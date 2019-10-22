/*! \file ex01.c 
 *  \author ridaadam
 *  \version 0.1
 *  \date 22-10-2019 
 *  \brief
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int	quaddrillage(int n)
{
	int x;
	int y;
	int i;
	int count;
	int r = 4;

	x = 0;
	y = 0;
	i = 0;
	count = 0;
	while (i != n)
	{
		x = rand();
		y = rand();
	//	if (sqrt((x * x) + (y * y)) <= r)
			count++;
		i++;	
	}
	return count;
}

int main(int ac, char **av)
{
//	printf("A power B = %d\n", ((atoi(av[1]))pow(atoi(av[2]))));
	printf("Approximation de pi : %d\n", quaddrillage(atoi(av[1])));
	return 0; 	
}
