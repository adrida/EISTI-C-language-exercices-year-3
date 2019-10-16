#include <stdio.h>
#include <stdlib.h>

/*
int is_date_valid(char *date)
{
	int jj;
	int mm;
	int yy;
	jj = 10*(atoi(date[0])) + atoi(date[1]);
	mm = 10*(atoi(date[3])) + atoi(date[4]);
	yy = 1000*(atoi(date[6])) + 100*(atoi(date[7])) + 10*(atoi(date[8])) + atoi(date[9]);
	if (jj > 31 || jj < 1 || mm > 12 || mm < 1)
		return 0;
	return 1;
}
*/

void disp_info()
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


int main(int ac, char **av)
{
	disp_info();
	return 0;
}
