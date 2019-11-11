/*!
 * \file menu.c
 * \brief : menu d'acces au differentes fonctions
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-11-11
 */

#include "lib.h"

void	menu(void)
{
	int i;
	int n;

	i = 1;
	n = 0;
	if (i == 0)
		return;
	printf("Menu TP4\n\n");
	printf("Selectionnez un exercice : \n");
	printf("      1       Pi par quadrillage\n");	
	printf("      2       Pi par Madhava\n");	
	printf("      3       Pi par John\n");	
	printf("      4       Racine de 2 Newton\n");	
	printf("      5       Racine de 2 Halley\n");	
	printf("      6       Racine de 2 Theon\n");	
	printf("      0       Quitter le programme\n");
	printf("Votre selection? :\n");
	scanf("%d", &i);
	if (i == 1)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		quadrillage(n);
	}
	if (i == 2)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		pi_madhava(n);
	}
	if (i == 3)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		pi_john(n);
	}
	if (i == 4)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		newton(n);
	}
	if (i == 5)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		halley(n);
	}
	if (i == 6)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		theon(n);
	}
	menu();
}
