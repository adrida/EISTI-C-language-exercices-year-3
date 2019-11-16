/*!
 * \file aGagne.c
 * \brief : Verifie si joueur a gagne dans le plateau de jeu actuel
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-11-15
 */

#include "../lib.h"

/*!
* \fn :int check_lines(int ttint_plateau[N][N])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-16
*
* \brief : Verifie si une ligne est complete 
* \param ttint_plateau[N][N] : plateau de jeu
*
* \return : Retourne 1 si une ligne est complete et 0 sinon
*/
int check_lines(int ttint_plateau[N][N])
{
	int i;
	int j;
	int tem;

	i = 0;
	j = 0;
	tem = 1;
	while (i != N)
	{
		j = 0;
		tem = 1;
		while (j != N)
		{
			if (ttint_plateau[i][j] != ttint_plateau[i][0])
				tem = 0;
			j++;
		}
		if (tem == 0)
			return 1;
		i++; 
	}
	return 0;
}


/*!
* \fn : int check_columns(int ttint_plateau[N][N])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-16
*
* \brief : Verifie si une colonne est completee 
* \param ttint_plateau[N][N] : Plateau de jeu
*
* \return : Retourne 1 si une colonne est completee ou 0 sinon
*/
int check_columns(int ttint_plateau[N][N])
{
	int i;
	int j;
	int tem;

	i = 0;
	j = 0;
	tem = 1;
	while (i != N)
	{
		j = 0;
		tem = 1;
		while (j != N)
		{
			if (ttint_plateau[i][j] != ttint_plateau[0][j])
				tem = 0;
			j++;
		}
		if (tem == 0)
			return 1;
		i++; 
	}
	return 0;
}

/*!
* \fn : int check_diag(int ttint_plateau[N][N])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-16
*
* \brief : Verifie les diagonales 
* \param ttint_plateau[N][N] : Plateau de jeu
*
* \return : Retourne 1 si une diagonale est complete 0 sinon
*/
int check_diag(int ttint_plateau[N][N])
{
	int i;
	int j;
	int tem;

	i = 0;
	j = 0;
	tem = 1;
	while (i != N)
	{
		tem = 1;
		if (ttint_plateau[i][j] != ttint_plateau[0][0])
			tem = 0;
		i++; 
		j++;
	}
	i = 0;
	j = N;
	while (i != N)
	{
		tem = 1;
		if (ttint_plateau[i][j] != ttint_plateau[0][N])
			tem = 0;
		i++;
		j--;
	}
	if (tem == 0)
		return 1;
	return 0;
}

/*!
* \fn : int	aGagne(int ttint_plateau[N][N])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-16
*
* \brief : Verifie si un joueur a gagne ou pas en verifiant lignes / colonnes / diagonales 
* \param ttint_plateau[N][N] : Plateau de jeu
*
* \return : Retourne 1 si un joueur a gagne 0 sinon
*/
int	aGagne(int ttint_plateau[N][N])
{
	if (check_lines(ttint_plateau) || check_columns(ttint_plateau) || check_lines(ttint_plateau))
		return 1;
	return 0;
}
