


#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define N 3
#define M 6

/*!
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*
* \brief : Calcul le produit vectoriel de deux vecteurs et mets le resultat dans un 3eme 
* \param vect1[3] : Vecteur 1
* \param vect2[3] : Vectuer 2
* \param vect3[3] : Vecteur 3
* \remark : Un produit vectoriel n'est defini que dans R3 d'ou la dimension fixe des vecteurs
*/
void    vectoriel(int vect1[3], int vect2[3], int vect3[3])
{
	vect3[0] = (vect1[1] * vect2[2]) - (vect1[2] * vect2[1]); 
	vect3[1] = (vect1[2] * vect2[0]) - (vect1[0] * vect2[2]);
	vect3[2] = (vect1[0] * vect2[1]) - (vect1[1] * vect2[0]);
}



/*!
* \fn :void    somme(int vect1[M], int vect2[M], int vect3[M])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*
* \brief : Calcule la somme de deux vecteurs et mets le resultat dans un 3eme 
* \param vect1[M] : Vecteur 1
* \param vect2[M] : Vecteur 2
* \param vect3[M] : Vecteur resultat
*/
void    somme(int vect1[M], int vect2[M], int vect3[M])
{
	int i;

	i = 0;
	
	while (i != M)
	{
		vect3[i] = vect1[i] + vect2[i];
		i++;
	}
}


/*!
* \fn : int   scalaire(int vect1[M], int vect2[M])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
* \brief : Calcul le produit scalaire de deux vecteurs 
*
* \param vect1[M] : Vecteur 1
* \param vect2[M] : Vecteur 2
*
* \return : Valeur du produit scalaire
*/
int   scalaire(int vect1[M], int vect2[M])
{
	int i;
	int res;

	i = 0;
	res = 0;
	
	while (i != M)
	{
		res = res + (vect1[i] * vect2[i]);
		i++;
	}
	return res;
}



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


/*!
* \fn : char	disp_char(int index)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-15
* \brief : Traduit la valeur numerique de chaque case en caractere. 
*
* \param index : valeur de la case
*
* \return : Retourne X si le joueur 1 a joue ou O si le joueur 2 a joue ou " " si personne a joue
*/
char	disp_char(int index)
{
	if (index == 1)
		return ('X');
	if (index == 2)
		return ('O');
	else
		return (' ');
}

/*!
* \fn : void	affichage(int ttint_plateau[N][N])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-15
* \brief : Affiche le plateau de jeu
*
* \param ttint_plateau[N][N] : plateau de jeu
*/
void	affichage(int ttint_plateau[N][N])
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
                        printf("%c", disp_char(ttint_plateau[i][j]));
                        j-=-1;
                }
		printf("\n");
                i-=-1;
        }       
}


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
	tem = 0;
	while (i != N)
	{
		j = 0;
		tem = 0;
		while (j != N)
		{
			if (ttint_plateau[i][j] == ttint_plateau[i][0] && ttint_plateau[i][0] != -1)
				tem++;
			j++;
		}
		if (tem == N)
		{
			printf("Victoire!\n");
			return 1;
		}
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
	tem = 0;
	while (j != N)
	{
		i = 0;
		tem = 0;
		while (i != N)
		{
			if (ttint_plateau[i][j] == ttint_plateau[0][j] && ttint_plateau[0][j] != -1)
				tem++;
			i++;
		}
		if (tem == N)
		{
			printf("Victoire!\n");
			return 1;
		}
		j++; 
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
	int diag1;
	int diag2;

	i = 0;
	j = 0;
	diag1 = 0;
	diag2 = 0;
	while (i != N)
	{
		if (ttint_plateau[i][j] == ttint_plateau[0][0] && ttint_plateau[0][0] != -1)
		{
			diag1++;
		}
		i++; 
		j++;
	}
	i = 0;
	j = N - 1;
	while (i != N)
	{
		if (ttint_plateau[i][j] == ttint_plateau[0][N - 1] && ttint_plateau[0][N - 1] != -1)
			diag2++;;
		i++;
		j--;
	}
	if ((diag1 == N || diag2 == N))
	{
		printf("Victoire!\n");
		return 1;
	}
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
	if (check_lines(ttint_plateau) || check_columns(ttint_plateau) || check_diag(ttint_plateau))
		return 1;
	return 0;
}



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

void	init_vect(int vect[M])
{
	int i;
	int value;

	i = 0;
	value = 0;
	while (i != M)
	{
		printf("Saisir la valeur de la case %d :\n", i);  
		scanf("%d", &value);
		vect[i] = value;
		i++;
	}
	i = 1;
	printf("Vecteur initialise :\n V = ( %d", vect[0]);
	while (i != M)
	{
		printf(", %d", vect[i]);
		i++;
	}
	printf(")\n");
}

void	disp_vect(int vect[M])
{
	int i;
	i = 1;
	printf("Affichage du vecteur resultat :\n V = ( %d", vect[0]);
	while (i != M)
	{
		printf(", %d", vect[i]);
		i++;
	}
	printf(")\n");
}
void	menu(void)
{
	int i;
	int v1[M];
	int v2[M];
	int v3[M];
	int ttint_plateau[N][N];

	i = 0;
	printf("\n\n^^^^^^^^^^^^^^^^\n\n    Menu TP5\n\n");
	printf("Attention, pour faire tester les exercices sur les vecteurs, vous pouvez changer la dimension dans le fichier lib.h \n\n");
	printf("Selectionnez un exercice : \n");
	printf("      1       Inversion tableau\n");	
	printf("      2       Somme vecteurs\n");	
	printf("      3       Produit scalaire\n");	
	printf("      4       Produit vectoriel\n");	
	printf("      5       Jeu du Tic Tac Toe\n");	
	printf("      0       Quitter le programme\n");
	printf("Votre selection? :\n");
	scanf("%d", &i);
	if (i == 0)
		return;
	if (i == 1)
	{
		printf("Fonction qui inverse les elements d'un tableau de taille M \n");
		init_vect(v1);
		inversion(v1);
		disp_vect(v1);	
	}
	if (i == 2)
	{
		printf("Fonction qui somme deux vecteurs \n");
		init_vect(v1);
		init_vect(v2);
		somme(v1,v2,v3);
		disp_vect(v3);	
	}	
	if (i == 3)
	{
		printf("Fonction qui calcule le produit scalaire de deux vecteurs \n");
		init_vect(v1);
		init_vect(v2);
		printf("v1 . v2 = %d\n", scalaire(v1,v2));
	}	
	if (i == 4)
	{
	{
		printf("Fonction qui calcule le produit vectoriel deux vecteurs \n");
		init_vect(v1);
		init_vect(v2);
		vectoriel(v1,v2,v3);
		disp_vect(v3);	
	}	
	}
	if (i == 5)
	{
		printf("Lancement du jeu du Tic Tac Toe\n");
		init(ttint_plateau);
		tourDeJeu(ttint_plateau);
	}
	menu();
}


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
	menu();
	return 0;
}
