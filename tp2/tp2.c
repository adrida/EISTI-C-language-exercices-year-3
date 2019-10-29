/*! \file tp2.c
 * \brief 
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-10-29
 */

/* Inclusion des entetes de libraire */
#include <stdio.h>

/*! \fn void	saisienb()
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-10-29
 * \brief Question 1. Fonction qui demande de saisir un nombre et l'affiche
 */
void	saisienb(void)
{
	int nb;
	
	nb = 0;
	printf("Saisir nb\n");
	scanf("%d", &nb);
	printf("Votre nombre est %d\n", nb);
}

/*! \fn void	saisie2nb()
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-10-29
 * \brief Question 3. (La q2 n'est pas une fonction) Fonction qui demande de saisir 2 entiers et les affiches 
 */
void	saisie2nb(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	nb2 = 0;
	printf("Saisir premier nb : \n");
	scanf("%d", &nb1);
	printf("Saisir deuxieme nb : \n");
	scanf("%d", &nb2);
	printf("Vos nombres sont %d et %d \n", nb1, nb2);
}

/*! \fn void	get_minmax(void)
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-10-29
 * \brief Question 4. Trouve le min et le max a la suite d'une saisie succesive d'entiers
 */
void	get_minmax(void)
{
	int min;
	int max;
	int i;
	int tmp;
	int n;

	i = 1;
	tmp = 0;
	n = 2;
	printf("Saisir la taille  de l'ensemble : \n");
	if (!scanf("%d", &n))
		return;
	printf("Element #%d de l'ensemble : \n", i);
	scanf("%d", &tmp);
	max = tmp;
	min = tmp;
	i++;
	while (i <= n)
	{
		printf("Element #%d de l'ensemble : \n", i);
		scanf("%d", &tmp);
		if (tmp > max)
			max = tmp;
		if (tmp < min)
			min = tmp;
		i++;
	}
	printf ("Max de l'ensemble : %d\n Min de l'ensemble : %d\n",max,min);
}

/*! \fn void disp_info(void)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-10-29
* \brief Question 5. Saisie des informations d'une personne et affichage de celles ci  
*/
void disp_info(void)
{
	char nom[30];
	char prenom[30];
	char date[11];
		
	printf("Entrez votre nom : ");
	scanf("%s", nom);
	printf("Entrez votre prenom : ");
	scanf("%s", prenom);
	printf("Entrez votre date de naissance : (format : jj/mm/yyyy) ...");
	scanf("%s", date);
	printf("Voici ce que vous avez entre : \n");
	printf("Nom : %s\n", nom);
	printf("Prenom : %s\n", prenom);	
	printf("Date de naissance : %s\n", date);	
}


/*! \fn void	div()
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-10-29
* \brief Question 6. Fonction qui divise deux entiers
* \remark  La fonction prend en compte des entiers donc ne traite pas les nombres decimaux d'ou le fait qu'il n'y ait pas de resultat avec les deux dernieres entrees proposee dans l'ennonce. Autre observation, etant donne que dans le printf la variable est sous la forme %d, la valeur prise par n/d est transformee en entier donc par exemple 5/2=2.5 devient 2 et si n < N alors n/N < 1 donc la valeur est 0.
*/
void	div()
{
	int n = 0;	
	int d = 1;

	printf ("N = ?\n");
	scanf("%d",&n);
	printf ("D = ?\n");
	scanf("%d", &d);
	if (d != 0)
		printf("%d / %d = %d\n", n,d, n/d);
	else
		printf("division impossible");
}

int main()
{

	printf("\n------ QUESTION 1 : Saisie d'un entier -------\n");
//	saisienb();
	printf("\n------ QUESTION 2 : Que se passe-t'il lorsque l'on entre autre chose qu'un nombre? -------\n  -----> scanf renvoie une erreur c'est donc la valeur initiale de la variable qui s'affiche. Si la variable n'est pas initialisee un nombre aleatoire est renvoye (L'adresse memoire peut etre?) et la saisie ne fonctionne pas \n");
	printf("\n------ QUESTION 3 : Saisie de deux entiers -------\n");
//	saisie2nb();
	
	printf("\n------ QUESTION 4 : Minimum et maximum -------\n");
//	get_minmax();
	printf("\n------ QUESTION 5 : Saisie personne -------\n");
//	disp_info();
	printf("\n------ QUESTION 6 : Division d'entiers -------\n");
	div();



	return 0;
}

