/*!
* \file init.c
* \brief : initialisation du plateau de jeu
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-15
*/

#include "../lib.h"

/*!
* \fn : void	init(int ttint_plateau[N][N])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-15
* \brief : init plateau de jeu, toutes les cases a -1 
*
* \param ttint_plateau[N][N] : plateau de jeu (dimension N x N)
*/
void	init(int ttint_plateau[N][N])
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i != N)
	{
		j = 0;
		while (j != N)
		{
			ttint_plateau[i][j] = (-1);
			j++;
		}
		i++;
	}
}

