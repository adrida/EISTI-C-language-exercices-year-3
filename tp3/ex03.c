/*!
* \file ex03.c
* \brief : Ex3 tp3, Probleme d'appel de fonction
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-04
*/
#include <stdio.h>

/*!
* \fn void	echange(int nb1, int nb2)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-04
* \brief : Fonction qui echange la valeur de deux nombres
*
* \param nb1 : nombre 1
* \param nb2 : nombre 2
*/
void	echange(int nb1, int nb2)
{
	int tmp;

	printf("Avant echange\n");
	printf("Nb1 = %d\n", nb1);
	printf("Nb2 = %d\n", nb2);
	tmp = nb1;
	nb1 = nb2;
	nb2 = tmp;
	printf("Apes echange\n");
	printf("Nb1 = %d\n", nb1);
	printf("Nb2 = %d\n", nb2);
}


/*!
* \fn int main(int ac, char **av)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-04
*
* \brief : Fonction principal, demonstration des problemes d'appel de fonction 
* \param ac : nb d'args
* \param av : args
*
* \return : retourne 0 si tout se passe bien 
*/
int main(int ac, char **av)
{
	int nb1;
	int nb2;

	nb1 = 5;
	nb2 = 7;

	printf("Avant appel de la fonction \n");
	printf("Nb1 = %d\n", nb1);
	printf("Nb2 = %d\n", nb2);
	printf("Appel de la fonction echange \n");
	echange(nb1,nb2);
	printf("Apres appel de la fonction \n");
	printf("Nb1 = %d\n", nb1);
	printf("Nb2 = %d\n", nb2);
}	
