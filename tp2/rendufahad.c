#include <stdio.h>

int	saisirnb()
{
	int nb = 0;
	printf("Saisir nb\n");
	scanf("%d", &nb);
	return nb;
}


void	get_minmax(int n)
{
	int min;
	int max;
	int i = 1;
	int tmp = 0;

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



void saisie_personne()
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

void	div()
{
	int n = 0;	
	int d = 1;

	printf ("N = ?\n");
	scanf("%d",&n);
	printf ("D = ?\n");
	scanf("%d", &d);
	if (d != 0)
		printf("%d / %d = %d\n", n,d,n/d);
	else
		printf("division impossible");
}

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


int taille_mois(int mm, int yy)
{
	if (mm < 1 || mm > 12)
		return 0;
	if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
		return 31;
	if (mm == 2)
	{
		if (((yy %  4) == 0) && (((yy % 100) > 0) || (yy % 400) == 0))
			return 29;
		else
			return 28;
	}
	return 30;
}

void	pre_date()
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
	if ((taille_mois(mm, yy) == 0) || (dd > taille_mois(mm,yy)) || (dd < 1))
	{
		printf ("Date non valide\n");
		return;
	}
	if (taille_mois(mm,yy) == dd)
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



int main()
{
	printf("Votre nombre est %d\n", saisirnb());
	int n = 2;
	printf("Saisir la taille  de l'ensemble pour la question min max : \n");
	scanf("%d", &n);
	if (n <= 0)
		return 0;
	get_minmax(n);
	saisie_personne();
	div();
	pred_heure();
	pre_date();
	return 0;
}
