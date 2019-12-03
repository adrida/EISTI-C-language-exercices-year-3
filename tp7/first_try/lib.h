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

float **dilatation(float **mat, int i, float k, int size);
float **permutation(float **mat,int i, int j, int size);
float **transvection(float **mat, int i, int j, float k, int size);
float **zerosSousPivot(float **mat, int i, int size);
float **formeTriangulaire(float **mat, int size);
float **formeTriangulaire2(float **mat, int size);
float **formeTriangulaire3(float **mat, int size);
float **zerosSurPivot(float **mat, int i, int size);
float **identite(float **mat, int size);
float **inverse(float **mat, int size);
float **get_matrix(int size);
int	get_size(int ac, char **av);
void	disp_mat(float **mat, int size);
float ** reduced(float ** mat, int n, int x, int y);
float determinant(float ** mat, int n);
float ** comat(float ** mat, int n);
float ** transpose(float ** mat, int n);
float ** mull(float x, float ** mat, int n);
float ** inverse_determinant(float ** mat, int size);
int	get_method(int ac, char **av);

#endif
