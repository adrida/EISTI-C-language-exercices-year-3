#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int	joueLettre(char *motATrouver, char *motMystere, char lettre)
{
	int i = 0;
	int cpt = 0;

	while (motMystere[i] != '\0')
	{
		if (motATrouver[i] == lettre)
		{
			motMystere[i] = lettre;
			cpt++;
		}
		i++;
	} 
	return cpt;
}

char	get_char(void)
{
	char c;
		printf("Quelle lettre voulez-vous jouer ?\n");
	scanf("%c",&c);
	return c;
}

int	jouePendu(char *motATrouver)
{

	char *motM;
	int i = 0;
	int tours = 10;
	char lettre;

	while (motATrouver[i] != '\0')
		i++;
	motM = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	while(motATrouver[i] != '\0')
	{
		motM[i] = '_';
		i++;
	}
	motM[i] = '\0';
	i = 0;
	while (tours > 0 && strcmp(motATrouver, motM) != 0)
	{
		printf("\n\nMot :  %s Nb d’essais restant : %d\n", motM, tours);
		lettre = get_char();
		if(!joueLettre(motATrouver, motM, lettre))
			tours--;
	}
	if (strcmp(motATrouver, motM) == 0)
	        printf("\n\nGagne ! Le mot mystere etait bien : %s", motATrouver);
	else
	        printf("\n\nPerdu ! Le mot mystere etait : %s", motATrouver);
	return 0;
}


int piocherMot(char *motPioche)
{
    FILE* dico = NULL;
    int nombreMots = 0, numMotChoisi = 0, i = 0;
    int caractereLu = 0;
    dico = fopen("dico.txt", "r"); 

    if (dico == NULL) 
    {
        printf("\nImpossible de charger le dictionnaire de mots");
        return 0;
    }
    do
    {
        caractereLu = fgetc(dico);
        if (caractereLu == '\n')
            nombreMots++;
    } while(caractereLu != EOF);
    numMotChoisi = nombreAleatoire(nombreMots); 
    rewind(dico);
    while (numMotChoisi > 0)
    {
        caractereLu = fgetc(dico);
        if (caractereLu == '\n')
            numMotChoisi--;
    }
    fgets(motPioche, 100, dico);
    motPioche[strlen(motPioche) - 1] = '\0';
    fclose(dico);
    return 1;
}

int nombreAleatoire(int nombreMax)
{
    srand(time(NULL));
    return (rand() % nombreMax);
}

int main(int ac, char **av)
{
	jouePendu(av[1]);
	return 0;
}
