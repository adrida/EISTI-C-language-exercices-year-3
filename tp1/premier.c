	/*! Commentaire de fichier oxygen
\file premier.c
\author Adam Rida <ridaadam@eisti.eu>
\version 0.2
\date 16/11/2019
\brief TP 1 du module programmation procédurale en C
*/

/* Inclusion des entetes de librairies */
#include <stdio.h>

/*! Commentaire de la fonction main (doxygen)
\fn int main(int ac, char** av)
\author Adam Rida <ridaadam@eisti.eu
\version 0.2
\date 16/11/2019
\brief Programme qui affiche bonjour tout le monde sur la sortie standard. Premier programme en c avec la documentation doxygen
\param ac nombre d'arguments en entree
\param av arguments en entree
\return 0 si tout se passe correctement
*/
int main(int ac, char **av)
{
  /* Affichage de la string "bonjour tout le monde". Les séquences d'échappements permettent de modifier l'affichage de son text. On peut ainsi inserer des retour chariot \n ou des tabulations \r. */
	printf("Bonjour tout le monde");
	return (0);
/* Fin du programme, pour mettre le doxygen il suffit de mettre "doxygen -g" et "Doxygen Doxyfile" ensuite il faut aller sur le index.html dans le dossier html généré */
} 
