#ifndef __structure_h_
#define __structure_h_

typedef double reel; // remplace double par réel pour que ce soit plus compréhensible

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // nécessaire pour l'utilisation de sqrt et de pow 

/**
 * \file structures.h
 * \brief header de structure.c
 * \author Jules Renier
 * \version 1
 * \date 07/12/2017
 *
 * Permet d'importer tous les éléments nécessaires pour la manipulation des équations second degré, et ici sont définies les structures
 *
 */


/** 
 * \struct nombreComplexe
 * \brief pour pouvoir faire marcher les nb complexes
*/
struct nombreComplexe {
	reel partieReelle; /*!< partie réelle du complexe */
	reel partieImaginaire; /*!< partie imaginaire du complexe */
};

typedef struct nombreComplexe nombreComplexe; /* nombreComplexe nombre; */


// ----------------------------------------------------------------------------


/** 
 * \struct spolynome
 * \brief Structure pour un polynome de second degré 
 */
 
 
 // A REMPLACER PARTOUT PAR A0, A1, A2, A3 ce sera plus simple avec les polynomes de second et troisième degré
struct spolynome {
	reel a3; /*!< troisième degré*/
	reel a2; /*!< valeur deuxième degré */
	reel a1; /*!< valeur premier degré */
	reel a0; /*!< valeur degré 0 */
};


typedef struct spolynome polynome; // Au lieu d'écrire "struct spolynome nomvariable on écrira polynome nom_variable pour la déclarer"


// ----------------------------------------------------------------------------

/** 
* \struct solutionEqu2D
* \brief Structure donnant les racines et le nombre de racines d'un polynôme de second degré
*/
struct solutionEqu2D {
	polynome poly; /*!< polynôme de degré 2  */
	int nbRacines; /*!< nombre de Racines : 0, 1 ou 2 du polynome */
	nombreComplexe racineUne; /*!< première racine du polynôme */
	nombreComplexe racineDeux; /*!< deuxième racine du polynôme */
};

typedef struct solutionEqu2D solutionEqu2D; /* Remplace struct solutionEqu2D par solutionEqu2D */



/* -------------------------------------------------------------------------- */

/**
* \struct solutionEqu3D
* \brief Structure donnant les racines et le nombre de racines d'un polynôme du troisième degré
*/

struct solutionEqu3D {
	polynome poly; /*!< polynome de degré 3  */
	int nbRacines; /*!< nombreRacines : 0, 1, 2 ou 3  */
	reel racineUne; /*!< première racine  */
	nombreComplexe racineDeux; /*!< deuxième racine  */
	nombreComplexe racineTrois;/*!< troisième racine  */
};

typedef struct solutionEqu3D solutionEqu3D; 


void afficherPolynome (polynome poly);
void afficherComplexe(nombreComplexe nombre);
solutionEqu2D resoudreEquation2D(polynome poly);
nombreComplexe add(nombreComplexe nombre1, nombreComplexe nombre2);


#endif



