#include <stdio.h>

int	is_bis(int yy)
{
	if ( ((yy %  4) == 0) && (((yy % 100) > 0) || (yy % 400) == 0))
		return 1;
	else
		return 0;
}

int get_month_len(int mm, int yy)
{
	if (mm < 1 || mm > 12)
		return 0;
	if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
		return 31;
	if (mm == 2)
	{
		if (is_bis(yy))
			return 29;
		else
			return 28;
	}
	return 30;
}

void	pre_date()
{

	int dd = 0;
	int mm = 0;
	int yy =  0;
	printf("Jour?\n");
	scanf("%d",&dd);
	printf("Mois?\n");
	scanf("%d",&mm);
	printf("Annee?\n");
	scanf("%d",&yy);
	if ((get_month_len(mm, yy) == 0) || (dd > get_month_len(mm,yy)) || (dd < 1))
	{
		printf ("Date non valide\n");
		return;
	}
	if (get_month_len(mm,yy) == dd)
	{
		if (mm == 12)
		{
			mm = 1;
			yy++;
		}
		else
			mm++;
		dd = 1;
	}
	else
		dd++;
	printf("Dans 1 jour nous serons le : %d/%d/%d\n", dd,mm,yy);
}



int main(int ac, char **av)
{
	pre_date();
	return 0;
}
