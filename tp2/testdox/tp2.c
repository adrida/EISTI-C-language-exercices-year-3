/*! \file tp2.c
 * \brief : TP2 Entree et sorties 
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-10-29
 */

/* Inclusion des entetes de libraire */
#include <stdio.h>
#include <math.h>
/*! \fn void	saisienb()
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-10-29
 * \brief : Question 1. Fonction qui demande de saisir un nombre et l'affiche
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
 * \brief : Question 3. (La q2 n'est pas une fonction) Fonction qui demande de saisir 2 entiers et les affiches 
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
 * \brief : Question 4. Trouve le min et le max a la suite d'une saisie succesive d'entiers
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
* \brief : Question 5. Saisie des informations d'une personne et affichage de celles ci  
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
* \brief : Question 6. Fonction qui divise deux entiers
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

/*! \fn void	pred_heure()
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-10-29
* \brief : Question 7. Prediction de l'heure qu'il sera a la minute suivante. 
*/
void	pred_heure()
{
	int hh = 0;
	int mm = 0;

	printf("Heure ?\n");
	scanf("%d", &hh);
	printf("Minute ?\n");
	scanf("%d", &mm);

	if (hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59)
	{
		if (mm == 59)
		{
			if (hh == 23)
				hh = 0;
			else
				hh++;
			mm = 0;
		}
		else 
			mm++;
	}
	printf("Heure dans 1 minute : %dh%d\n", hh,mm);
}


/*! \fn int	is_bis(int yy)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-10-29
*
* \brief : Determine si une annee est bisextille ou non
* \param yy : Annee dont il faut determiner si elle est bisextille ou non
*
* \return : 1 si oui 0 sinon
*/
int	is_bis(int yy)
{
	if ( ((yy %  4) == 0) && (((yy % 100) > 0) || (yy % 400) == 0))
		return 1;
	else
		return 0;
}

/*! \fn int get_month_len(int mm, int yy)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-10-29
* 
* \brief : Determine le nombre de jours dans 1 mois
*
* \param mm : Mois dont il faut determiner le nombre de jours
* \param yy : Annee de la date recherchee
*
* \return : Retourne le nombre de jours si le mois est valide, 0 sinon
*/
int get_month_len(int mm, int yy)
{
	if (mm < 1 || mm > 12)
		return 0;
	if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
		return 31;
	if (mm == 2)
	{
		if (is_bis(yy))
			return 29;
		else
			return 28;
	}
	return 30;
}

/*! \fn void	pred_date()
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-10-29
* \brief : Question 8. Predire la date qu'il sera le jour suivant de la date saisie
* \remark Il faut bien prendre en compte les annees bisextiles
*/
void	pred_date()
{

	int dd = 0;
	int mm = 0;
	int yy =  0;
	printf("Jour?\n");
	scanf("%d",&dd);
	printf("Mois?\n");
	scanf("%d",&mm);
	printf("Annee?\n");
	scanf("%d",&yy);
	if ((get_month_len(mm, yy) == 0) || (dd > get_month_len(mm,yy)) || (dd < 1))
	{
		printf ("Date non valide\n");
		return;
	}
	if (get_month_len(mm,yy) == dd)
	{
		if (mm == 12)
		{
			mm = 1;
			yy++;
		}
		else
			mm++;
		dd = 1;
	}
	else
		dd++;
	printf("Dans 1 jour nous serons le : %d/%d/%d\n", dd,mm,yy);
}


/*! \fn void	fact(void)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-10-29
* \brief : Fonction qui calcule puis affiche la factorielle d'un entier saisi 
*/
void	fact(void)
{
	int n = 0;
	int res = 1;
	int i;
	printf("Entrez votre nombre :\n");
	scanf("%d", &n);
	i = n;
	if (n <= 0)
		return;
	if (n == 0)
		printf("%d! = %d\n", n, res); 
	else
	{
		while (n != 0)
		{
			res = n * res;
			n--;
		}
		printf("%d! = %d\n", i, res); 
	}
	return;
}

/*! \fn void	pgcd(void)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-10-29
* \brief : Fonction qui calcule et affiche le pgcd de deux entiers saisis
*/
void	pgcd(void)
{

	int a = 1;
	int b = 1;
	int r = 0;
	printf("Entrez votre nombre a :\n");
	scanf("%d", &a);
	printf("Entrez votre nombre b :\n");
	scanf("%d", &b);
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("Le PGCD est %d\n", a); 
	return;
}

/*! \fn void	eq2nd(void)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-10-29
* \brief : Fonction qui trouve et affiche les racines d'une equation du second degre 
*/
void	eq2nd(void)
{
	
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	printf("Entrez le coeff a :\n");
	scanf("%e", &a);
	printf("Entrez le coeff b :\n");
	scanf("%e", &b);
	printf("Entrez le coeff c :\n");
	scanf("%e", &c);
	d = (b * b) - (4 * a * c);
	if (d > 0)
		printf("La racine 1 est : %f\nLa racine 2 est : %f", ((-b - sqrt(d)) / (2 * a)) , ((-b + sqrt(d)) / (2 * a)));
	if (d == 0)
		printf("La racine est : %f\n",((-b) / (2 * a)));
	if (d < 0)
		printf ("Pas de racines reelles.\n");
	return;

}


/*! \fn void	menu(void)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-10-29
* \brief : Question 9. Menu qui permet de realiser les differentes operations mathematiques proposees
* \remark Il s'agit d'un menu recursif, il aurait aussi ete possible de le faire grace a une boucle while. ATTENTION, ne pas oublier -lm lors de la compilation pour la fonction sqrt 
*/
void	menu(void)
{
	int input = 1;

	printf("\n\n                         ========== MENU ===========\n"); 
	printf("\n                        1 --- Calcul de factorielle \n");
	printf("                        2 --- PGCD \n");
	printf("                        3 --- Equation second degre \n");
	printf("                        0 ---> Quitter \n\n");
	printf("Faites votre choix : \n");
	scanf("%d", &input);
	if (input == 0)
		return;
	if (input == 1)
		fact();
		if (input == 2)
			pgcd();
		if (input == 3)
			eq2nd();
	menu();
}


/*! int main(int ac, char **av)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-10-29
*
* \brief :  Main du TP2 tous les exercices s'executent les uns apres les autres
* \return : 0 si tout se passe bien
*/
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
//	div();
	printf("\n------ QUESTION 7 : Predire l'heure -------\n");
//	pred_heure();
	printf("\n------ QUESTION 8 : Predire la date -------\n");
//	pred_date();
	printf("\n------ QUESTION 9 : Operations mathematiques -------\n");
	menu();

	return 0;
}

