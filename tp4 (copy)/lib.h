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

float   	quaddrillage(int n);
float		pi_madhava(int n);
float		pi_john(int n);
long double	newton(int n);
float		halley(int n);
float		theon(int n);
void		menu(void);
#endif
