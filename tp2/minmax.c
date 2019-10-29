
#include <stdio.h>


void	get_minmax(int n)
{
	int min;
	int max;
	int i = 1;
	int tmp = 0;

	printf("Element #%d de l'ensemble : \n", i);
	scanf("%d", &tmp);
	max = tmp;
	min = tmp;
	i++;
	while (i <= n)
	{
		printf("Element #%d de l'ensemble : \n", i);
		scanf("%d", &tmp);
		if (tmp > max)
			max = tmp;
		if (tmp < min)
			min = tmp;
		i++;
	}
	printf ("Max de l'ensemble : %d\n Min de l'ensemble : %d\n",max,min);
}




int main()
{
	int n = 2;
	printf("Saisir la taille  de l'ensemble : \n");
	scanf("%d", &n);
	if (n > 0)
		get_minmax(n);
	return 0;
}
