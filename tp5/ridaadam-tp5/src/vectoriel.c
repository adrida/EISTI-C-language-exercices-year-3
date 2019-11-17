/*!
* \file vectoriel.c
* \brief : Produit vectoriel de deux vecteurs
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*/

#include "../lib.h"

/*!
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-17
*
* \brief : Calcul le produit vectoriel de deux vecteurs et mets le resultat dans un 3eme 
* \param vect1[3] : Vecteur 1
* \param vect2[3] : Vectuer 2
* \param vect3[3] : Vecteur 3
* \remark : Un produit vectoriel n'est defini que dans R3 d'ou la dimension fixe des vecteurs
*/
void    vectoriel(int vect1[3], int vect2[3], int vect3[3])
{
	vect3[0] = (vect1[1] * vect2[2]) - (vect1[2] * vect2[1]); 
	vect3[1] = (vect1[2] * vect2[0]) - (vect1[0] * vect2[2]);
	vect3[2] = (vect1[0] * vect2[1]) - (vect1[1] * vect2[0]);
}
