/*!
 * \file jouer.c
 * \brief : permet à un joueur donné de jouer sur une case spécifique
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-11-15
 */

#include "../lib.h"

/*!
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-15
*
* \brief : Permet au joueur de jouer  . Si la case est déjà occupée par l’autre joueur, affiche un message d’erreur
*
* \param ttint_plateau[N][N] : plateau de jeu
* \param int_joueur : valeur du joueur (1 ou 2)
* \param int_x : coordonnee x
* \param int_y : coordonne y
*
* \return : retourne 1 si tout se passe bien ou 0 en cas d'erreur
*/
int	jouer(int ttint_plateau[N][N], int int_joueur, int int_x, int int_y)
{

	if (int_x > N || int_y > N)
	{
		printf("Erreur de saisie. Fin\n");
		return (0);
	}
	if (ttint_plateau[int_x][int_y] != -1)
	{
		printf("Case non libre...\n");
		return (0);
	}
	ttint_plateau[int_x][int_y] = int_joueur;
	printf("Saisie validee...\n");
	return (1);
}

