/*!
* \file ex01.c
* \brief : Exercice 1 du tp3, saisie d'entiers 
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-04
*/
#include <stdio.h>
#include <stdlib.h>

/*!
* \fn	int saisieEntier(void)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-04
* \brief : Saisie et retour d'un entier 
*
* \return : Retourne l'entier saisi 
*/
int saisieEntier(void)
{
	int n;
	int nb;
	
	nb = scanf("%d",&n);
	if (nb == 0)
		exit(EXIT_FAILURE);
	return (n);	
}

/*!
* \fn  void	Saisie(void)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-04
* \brief : Saisie d'un entier et l'affiche 
*/
void	Saisie(void)
{
	int n;
	
	printf("%d\n",saisieEntier());
}

/*!
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-04
*
* \brief : Fonction principale du fichier, lancement de la fonction Saisie(); 
* \param ac : nombre d'arguments 
* \param av : arguments
*
* \return : retourne 0 si tout se passe bien
*/
int	main(int ac, char **av)
{
	Saisie();	
	return (0);
}
