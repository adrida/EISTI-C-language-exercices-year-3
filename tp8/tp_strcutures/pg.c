#include "structures.c"

/**
 * \file pg.c
 * \brief programme d'exécution
 * \author Jules R
 * \version 1
 * \date 13 décembre 2017
 *
 * Programme pour exécuter les fonctions relatives aux structures : résolution d'équation du second et troisième degré
 *
 */

/**
 * \fn int main(int argc, char *argv[]) 
 * \brief exécute les fonctions nécessaires
 *
 * \param argc nombre d'arguments
 * \param *argv[] valeur des arguments
 * \return 0
 */
int main (int argc, char *argv[]) {
	int int_retour;
	solutionEqu2D solutionD2;
	solutionEqu3D solutionD3;
	reel a3, a2,a1,a0;	
	polynome premier_polynome;
	printf("aX^3 + bX^2 + cX + d");
	
	printf("\na = "); // Demande de a3
	int_retour = scanf("%lf", &a3);
	if (int_retour == 0){
		exit(-1);
	}
	premier_polynome.a3 = a3;
	
	printf("\nb = "); // Demande de a2
	int_retour = scanf("%lf", &a2);
	if (int_retour == 0){
		exit(-1);
	}
	premier_polynome.a2 = a2;
	
	printf("\nc = "); // Demande de a1
	int_retour = scanf("%lf", &a1);
	if (int_retour == 0){
		exit(-1);
	}
	premier_polynome.a1 = a1;
	
	printf("\nd = "); // Demande de a0
	int_retour = scanf("%lf", &a0);
	if (int_retour == 0){
		exit(-1);
	}
	premier_polynome.a0 = a0;
	
	afficherPolynome(premier_polynome);
	
	if (premier_polynome.a3 == 0) {
		solutionD2 = resoudreEquation2D(premier_polynome);
		descriptionSolutionD2(solutionD2); // Renvoie description de la solution: polynôme et ses racines
	}
	else { 
		solutionD3 = resoudreEquation3D(premier_polynome); 
		descriptionSolutionD3(solutionD3); // Même chose qu'au-dessus, mais pour un polynôme de degré 3 
	}
	
	printf("\n");
	return 0;
}
