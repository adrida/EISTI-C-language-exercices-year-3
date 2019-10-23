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
	float x;
	float y;
	int i;
	int count;
	int r = 1;

	x = ((float)rand()/(float)(RAND_MAX/r));
	printf("x = %f\n", x);
	y = ((float)rand()/(float)(RAND_MAX/r));
	printf("y = %f\n", y);
	i = 0;
	count = 0;
	while (i <= n)
	{
		x = ((float)rand()/(float)(RAND_MAX/r));
		y = ((float)rand()/(float)(RAND_MAX/r));
		if (sqrtf((x * x) + (y * y)) < r)
		{	
			count++;
			printf("COUNT = %d\n", count);
			printf("[--------------\n");
			printf("x = %f\n", x);
			printf("y = %f\n", y);
			printf("--------------]\n");
		}
		i++;	
	}
	return count;
}

int main(int ac, char **av)
{
	printf("Approximation de pi : %d\n", quaddrillage(atoi(av[1])));
	return 0; 	
}