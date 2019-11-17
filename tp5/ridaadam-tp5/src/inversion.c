/*!
* \file inversion.c
* \brief : Inverse les elements d'in tableau
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*/

#include "../lib.h"

/*!
* \fn : void	inversion(int	tab[M])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*
* \brief : Inverse un tableau d'entier 
* \param tab[M] : Tableau a inverser
*/
void	inversion(int	tab[M])
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = M - 1;
	tmp = 0;

	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
