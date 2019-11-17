/*!
 * \file lib.h
 * \brief : lib avec toutes les fonctions
 * \author Adam Rida <ridaadam@eisti.eu>
 * \version 0.1
 * \date 2019-11-11
 */

#ifndef LIB_h
# define LIB_h
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define N 3
#define M 6
void	inversion(int tab[M]);
void	somme(int vect1[M], int vect2[M], int vect3[M]);
int	scalaire(int vect1[M], int vect2[M]);
void	vectoriel(int vect1[3], int vect2[3], int vect3[3]);
void	init(int ttint_plateau[N][N]);
void	affichage(int ttint_plateau[N][N]);
int	jouer(int ttint_plateau[N][N], int int_joueur, int int_x, int int_y);
int	aGagne(int ttint_plateau[N][N]);
void	tourDeJeu(int ttint_plateau[N][N]);
char	disp_char(int index);
int     grille_complete(int ttint_plateau[N][N]);
int	check_lines(int ttint_plateau[N][N]);
int	check_columns(int ttint_plateau[N][N]);
int	check_diag(int ttint_plateau[N][N]);
void	menu(void);
void	init_vect(int vect[M]);
void	disp_vect(int vect[M]);
#endif
