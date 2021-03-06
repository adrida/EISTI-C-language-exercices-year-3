/*!
 * \file tourDeJeu.c
 * \brief : Methode qui permet de faire jouer les joueurs chacun leur tour
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-11-16
 */

#include "../lib.h"

/*!
 * \fn :int	grille_complete(int ttint_plateau[N][N])
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-11-17
 *
 * \brief  : Verifie si le plateau est entierement rempli 
 * \param ttint_plateau[N][N] : plateau de jeu
 *
 * \return : Retourne 1 si le plateau est complet 0 sinon
 */
int	grille_complete(int ttint_plateau[N][N])
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
			if (ttint_plateau[i][j] == -1)
				return 0;
			j++;
		}
		i++;
	}
	printf("Grille complete, Match nul ! \n");
	return 1;
}


/*!
 * \fn : void	tourDeJeu(int ttint_plateau[N][N])
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-11-17
 *
 * \brief : permet de faire jouer les joueurs chacun leur tour, jusqu’à la fin de la partie. 
 * \param ttint_plateau[N][N] : plateau de jeu
 */
void	tourDeJeu(int ttint_plateau[N][N])
{
	int i;
	int line;
	int col;
	int ok;

	i = 1;
	line = 1;
	col = 1;
	ok = 0;

	while(!aGagne(ttint_plateau) && !grille_complete(ttint_plateau))
	{
		printf("             Tour %d\n", i);
		if (i % 2 == 1)
		{
			printf("*** JOUEUR 1 ***\n");
			ok = 0;
			while (ok != 1)
			{
				affichage(ttint_plateau);
				printf("Saisir la ligne ou vous voulez jouer :\n");
				scanf("%d", &line);
				printf("Saisir la colonne ou vous voulez jouer :\n");
				scanf("%d", &col);
				if (jouer(ttint_plateau,1,(line - 1),(col - 1)))
					ok = 1;
			}
		}
		else
		{
			printf("*** JOUEUR 2 ***\n");
			ok = 0;
			while (ok != 1)
			{
				affichage(ttint_plateau);
				printf("Saisir la ligne ou vous voulez jouer :\n");
				scanf("%d", &line);
				printf("Saisir la colonne ou vous voulez jouer :\n");
				scanf("%d", &col);
				if (jouer(ttint_plateau,2,(line - 1),(col - 1)))
					ok = 1;
			}
		}
		i++;
	}
	if (i % 2 == 0)
		printf("Joueur 1 Vainqueur\n");
	else
		printf("Joueur 2 Vainqueur\n");
	return;
}
