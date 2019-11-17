/*!
* \file main.c
* \brief : fonction principale qui lance le jeu 
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*/

#include "../lib.h"

/*!
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*
* \brief : fonction main qui initialise le plateau de jeu puis lance le jeu 
* \param ac : nombre d'args
* \param av : args
*
* \return : 0 si tout se passe bien
*/
int	main (int ac, char **av)
{
	int ttint_plateau[N][N];

	init(ttint_plateau);
	tourDeJeu(ttint_plateau);
	return 0;
}
