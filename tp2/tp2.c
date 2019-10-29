/*! \file tp2.c
 * \brief 
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-10-29
 */
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
	printf("Nom : %s\n", nom);
	printf("Prenom : %s\n", prenom);	
	printf("Date de naissance : %s\n", date);	
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
	disp_info();



	return 0;
}

