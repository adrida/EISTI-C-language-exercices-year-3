#include <stdio.h>

void	bidon(void)
{
	int n;
	
	scanf("%d", &n);
	printf("input2 = %d\n", n);
}




int	main(int ac, char **av)
{
	int n;
	
	scanf("%d", &n);
	printf("input = %d\n", n);
	bidon();	
	printf("input3 = %d\n", n);
	return 0;
}
