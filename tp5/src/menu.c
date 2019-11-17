/*!
* \file menu.c
* \brief : Menu tp5
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*/

#include "../lib.h"

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

