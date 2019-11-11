/*!
 * \file menu.c
 * \brief : menu d'acces au differentes fonctions
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-11-11
 */

#include "lib.h"

/*!
* \fn : void	menu(void)
* \brief : Menu principal
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-11
*/
void	menu(void)
{
	int i;
	int n;

	n = 0;
	i = 0;
	printf("^^^^^^^^^^^^^^^^\n\nMenu TP4\n\n");
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
	if (i == 0)
		return;
	if (i == 1)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		printf("pi = %f\n",quaddrillage(n));
	}
	if (i == 2)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		printf("pi = %f\n",pi_madhava(n));
	}
	if (i == 3)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		printf("pi = %f\n",pi_john(n));
	}
	if (i == 4)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		printf("sqrt(2) = %Lf\n",newton(n));
	}
	if (i == 5)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		printf("sqrt(2) = %f\n",halley(n));
	}
	if (i == 6)
	{
		printf("Precision voulue (itterations) : \n");
		scanf("%d",&n);
		printf("sqrt(2) = %f\n",theon(n));
	}
	menu();
}
