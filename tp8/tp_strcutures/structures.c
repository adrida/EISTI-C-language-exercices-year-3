#include "structures.h"

/**
 * \file structures.c
 * \brief Fichiers de fonctions
 * \author Jules Renier
 * \version 1
 * \date 07/12/2017
 *
 * Fichier contenant les principales fonctions permettant de manipuler les équations du second degré
 *
 */
 
 


/**
 * \fn void afficherPolynome (polynome poly)
 * \brief fonction qui affiche le polynôme sous sa forme aX^2 + bX + c
 *
 * \param polynome poly à afficher
 */
 
void afficherPolynome (polynome poly) {
	printf("polynome = ");
	if (poly.a3 != 0) {
		printf(" %.2f X^3", poly.a3); 
	}
	
	if (poly.a2 > 0) { 
		printf(" + %.2f X^2", poly.a2); 
	}
	
	else if (poly.a2 < 0){
		printf(" - %.2f X^2", -poly.a2);
	}
	
	if (poly.a1 < 0) {
		printf(" - %.2f X", -poly.a1);
	}
	
	else if (poly.a1 > 0){
		printf(" + %.2f X", poly.a1);
	}
	
	if (poly.a0 < 0) {
		printf(" - %.2f \n", -poly.a0);
	}
	
	else if (poly.a0 > 0){
		printf(" + %.2f \n", poly.a0);
	}
}

/**
 * \fn afficherComplexe(nombreComplexe nombre)
 * \brief affiche un nombreComplexe
 *
 * \param nombre à afficher
 * \return pas de retour, affiche sur le terminal comment on écrit un nombre complexe
 */
void afficherComplexe(nombreComplexe nombre){
	if (nombre.partieImaginaire < 0){
		printf("%.2f - %.2f i", nombre.partieReelle, -nombre.partieImaginaire);
	}
	else{
		printf("%.2f + %.2f i", nombre.partieReelle, nombre.partieImaginaire);
	}
}


/**
 * \fn solutionEqu2D resoudreEquation(polynome poly)
 * \brief Trouve les racines et ressort le résultat dans une structure solutionEqu2D
 *
 * \param polynome poly dont on cherche les racines
 * \return ressort une structure solutionEqu2D avec nombre de racines, et leurs valeurs si elles existent
 */
solutionEqu2D resoudreEquation2D(polynome poly){
	solutionEqu2D solution;
	solution.poly = poly;
	if (poly.a2 != 0) {
		reel delta = poly.a1 * poly.a1 - 4 * poly.a2 * poly.a0;
		if (delta > 0) {
			reel racine1 = (-poly.a1 - sqrt(delta)) / (2 * poly.a2);
			reel racine2 = (-poly.a1 + sqrt(delta)) / (2 * poly.a2);
			solution.racineUne.partieReelle = racine1;
			solution.racineUne.partieImaginaire = 0;
			solution.racineDeux.partieReelle = racine2;
			solution.racineDeux.partieImaginaire = 0;
			solution.nbRacines = 2; 
		}
		else if (delta == 0) {
			reel racine = poly.a1 / (2*poly.a2);
			solution.racineUne.partieReelle = racine;
			solution.racineUne.partieImaginaire = 0;
			solution.nbRacines = 1;
		}
		else {
			solution.nbRacines = 2;
			solution.racineUne.partieReelle = -poly.a1/(2*poly.a2);
			solution.racineUne.partieImaginaire = -sqrt(-delta)/(2*poly.a2);
			solution.racineDeux.partieReelle = -poly.a1/(2*poly.a2);
			solution.racineDeux.partieImaginaire = sqrt(-delta)/(2*poly.a2);
		}
	}
	else {
		solution.nbRacines = 1;
		reel racine = -poly.a0 / poly.a1;
		solution.racineUne.partieReelle = racine;
		solution.racineUne.partieImaginaire = 0;
	}
	return solution;
}

/**
 * \fn nombreComplexe add(nombreComplexe nombre1, nombreComplexe nombre2)
 * \brief addition de deux nombres complexes
 *
 * \param nombre1 premier nombre
 * \param nombre2 deuxième nombre
 * \return resultat = nombre1+nombre2, le tout étant des nombres complexes
 */
nombreComplexe add(nombreComplexe nombre1, nombreComplexe nombre2){
	nombreComplexe resultat;
	resultat.partieReelle = nombre1.partieReelle + nombre2.partieReelle;
	resultat.partieImaginaire = nombre1.partieImaginaire + nombre2.partieImaginaire;
	
	return resultat;
}


/**
 * \fn solutionEqu3D resoudreEquation3D (polynome poly)
 * \brief Résolution d'équation du 3e degré
 *
 * \param polynome poly de degré 3
 * \return retourne une solution avec nbRacines, valeur des racines et le polynome en lui même
 * 
 * J'ai utilisé pour cette fonction-là les méthodes de Cardan et de Tschirnhaus
 * 
 */

solutionEqu3D resoudreEquation3D (polynome poly){
	solutionEqu3D solution;
	solution.poly = poly;
	
	reel a = poly.a3;
	reel b = poly.a2;
	reel c = poly.a1;
	reel d = poly.a0;
	
	reel p = (3 * a * c - pow(b,2)) / (3 * pow(a, 2));
	reel q = (2 * pow(b,3) - 9 * a * b * c + 27 * pow(a,2) * d) / (27 * pow(a,3));
	
	reel delta_un = q * q + 4*p*p*p / 27 ;
	reel racineUne = pow((-q-sqrt(delta_un)/2), 1/3) + pow((-q+sqrt(delta_un)/2), 1/3) - b/(3*a); // pow(x, 1/3) : racine cubique de x
	
	polynome nouveauPoly2D;
	nouveauPoly2D.a2 = a;
	nouveauPoly2D.a1 = b + a * racineUne;
	nouveauPoly2D.a0 = c + (b + a * racineUne) * racineUne;
	
	
	solutionEqu2D solutionPoly2D = resoudreEquation2D(nouveauPoly2D);
	
	solution.nbRacines = 1 + solutionPoly2D.nbRacines;
	solution.racineUne = racineUne;
	solution.racineDeux = solutionPoly2D.racineUne;
	solution.racineTrois = solutionPoly2D.racineDeux;
	
	return solution;

}


/**
 * \fn void descriptionSolutionD2(solutionEqu2D solution)
 * \brief Affiche la description d'un polynôme de second degré, son nombre de racines ainsi que leurs valeurs
 *
 * \param solutionEqu2D solution qui contient toutes les valeurs que l'on souhaite afficher
 */

void descriptionSolutionD2(solutionEqu2D solution){
	printf("Le polynôme ");
	afficherPolynome(solution.poly);
	if (solution.nbRacines == 2){
		printf(" admet 2 racines : x1 = ");
		afficherComplexe(solution.racineUne);
		printf(" et x2 = ");
		afficherComplexe(solution.racineDeux);
	}
	else if (solution.nbRacines == 1) {
		printf(" n'admet qu'une racine : x= ");
		afficherComplexe(solution.racineUne);
	}
	else{
		printf(" n'admet aucune racine.");
	}
}

/**
 * \fn void descriptionSolutionD3(solutionEqu3D solution)
 * \brief Affiche la description d'un polynôme de troisième degré, son nombre de racines ainsi que leurs valeurs
 *
 * \param solutionEqu3D solution qui contient toutes les valeurs que l'on souhaite afficher
 */


void descriptionSolutionD3(solutionEqu3D solution){
	printf("Le polynôme ");
	afficherPolynome(solution.poly);
	printf(" admet 3 racines : x1 = %.2f", solution.racineUne);
	printf(", x2 = ");
	afficherComplexe(solution.racineDeux);
	printf(" et x3 = ");
	afficherComplexe(solution.racineTrois);
}

