/*!
 * \file td6.c
 * \brief : TD 6 pointeurs
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-11-25
 */

#include <stdio.h>

/*!
 * \fn : void	inutile(void)
 * \brief : Modification variable en utilisant un pointeur 
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-11-25
 */
void	inutile(void)
{
	int i;
	int *p;
	i = 0;
	p = &i;
	*p = 2;
	printf("Valeur de i : %d\n", i);	
}

/*!
* \fn : void	ptr_ptr(void)
* \brief : operations sur pointeurs
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-25
*/
void	ptr_ptr(void)
{
	int a ;
	int b ;
	int * p ;
	int * * pp ;
	a = 0;
	b = 1;
	p = &a ;
	a += b ;
	pp = &p ;
	printf("a : %d, *p : %d, **pp : %d\n", a, *p , **pp);
}

/*!
* \fn : void	moins_facile(void)
* \brief : affiche tous les indices des cases ou la valeur est 0
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-25
*/
void	moins_facile(void)
{
	int *tab1;
	int tab[6] = {1,2,0,3,0,0};
	tab1 = &tab[0];
	while (tab1 != &tab[6])
	{
		if (*tab1 == 0)
			printf("%ld, \n", tab1 - &tab[0]);
		tab1++;
	}
}

/*!
* \fn  : char	*rechercheMotif(char *src, char *motif)
* \brief : cherche une chaine motif dans une chaine src
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-25
*
* \param src : Chaine source
* \param motif : Pattern a trouver
*
* \return : Retourne un pointeur sur le debut de la sous chaine trouvee
*/
char	*rechercheMotif(char *src, char *motif)
{
	int i;
	int j;

	i = 0;
	while (src[i] != '\0')
	{
		j = 0;
		while (motif[j] == src[i + j])
		{
			if (motif[j + 1] == '\0')
			{
				return (src + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
	inutile();
	ptr_ptr();
	moins_facile();
	return 0;
}	
