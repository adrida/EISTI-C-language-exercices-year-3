#include <stdio.h>
#define N 3
void	init(int ttint_plateau[N][N]);
char	disp_char(int index);
void	affichage(int ttint_plateau[N][N]);
int     jouer(int ttint_plateau[N][N], int int_joueur, int int_x, int int_y);
int     aGagne(int ttint_plateau[N][N]);
void    tourDeJeu(int ttint_plateau[N][N]);

int	main (int ac, char **av)
{
	int ttint_plateau[N][N];

	init(ttint_plateau);
//	tourDeJeu(ttint_plateau);
	affichage(ttint_plateau);

	jouer(ttint_plateau, 1 , 2, 0);
	jouer(ttint_plateau, 1 , 2, 1);
	jouer(ttint_plateau, 1 , 2, 2);

	affichage(ttint_plateau);
	printf ("Resultat de la partie : %d\n", aGagne(ttint_plateau));
	return 0;
}
