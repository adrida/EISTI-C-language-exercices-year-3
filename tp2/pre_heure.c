/*! \file pre_heure.c
* \brief 
* \author Adam Rida <ridaadam@eisti.eu>
* \version 1
* \date 2019-10-29
*/

#include <stdio.h>

void	pred_heure()
{
	int hh = 0;
	int mm = 0;

	printf("Heure ?\n");
	scanf("%d", &hh);
	printf("Minute ?\n");
	scanf("%d", &mm);

	if (hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59)
	{
		if (mm == 59)
		{
			if (hh == 23)
				hh = 0;
			else
				hh++;
			mm = 0;
		}
		else 
			mm++;
	}
	printf("Heure dans 1 minute : %dh%d\n", hh,mm);
}

/*! \fn int main(int ac, char **av)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 1
* \date 2019-10-29
*
* \brief 
* \param ac
* \param av
*
* \return 
*/
int main(int ac, char **av)
{
	pred_heure();
	return 0;
}
