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
void	*invert(void *tab);
void	*somme(void *tab);
float	scalaire(int *vect1, int *vect2);
void	*vectoriel(void *tab);
void	init(int ttint_plateau[N][N]);
void	affichage(int ttint_plateau[N][N]);
int	jouer(int ttint_plateau[N][N], int int_joueur, int int_x, int int_y);
int	aGagne(int ttint_plateau[N][N]);
void	tourDeJeu(int ttint_plateau[N][N]);
void		menu(void);
#endif
