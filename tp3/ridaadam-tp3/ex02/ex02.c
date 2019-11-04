/*! \file ex02.c
* \brief : exercice 2 tp3, portee d'une variable
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-04
*/
#include <stdio.h>

/*! 
* \fn  void	bidon(void)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-04
* \brief : Fonction pour experimenter la portee des variables 
*/
void	bidon(void)
{
	int n;
	
	scanf("%d", &n);
	printf("input2 = %d\n", n);
}

/*!
* \fn int	main(int ac, char **av)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-04
*
* \brief : Fonction principale, lance les fonctions de l'ennonce 
* \param ac : Nb d'arguments
* \param av : Arguments
*
* \return : Retourne 0 si tout se passe bien
*/
int	main(int ac, char **av)
{
	int n;
	
	scanf("%d", &n);
	printf("input = %d\n", n);
	bidon();	
	printf("input3 = %d\n", n);
	return 0;
}
