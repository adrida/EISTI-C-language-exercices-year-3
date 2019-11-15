/*!
* \file affichage.c
* \brief :  Affiche le tableau
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-15
*/

/*!
* \fn : char	disp_char(int index)
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-15
* \brief : Traduit la valeur numerique de chaque case en caractere. 
*
* \param index : valeur de la case
*
* \return : Retourne X si le joueur 1 a joue ou O si le joueur 2 a joue ou " " si personne a joue
*/
char	disp_char(int index)
{
	if (index == 1)
		return ('X');
	if (index == 2)
		return ('O');
	else
		return (' ');
}

/*!
* \fn : void	affichage(int ttint_plateau[N][N])
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-15
* \brief : Affiche le plateau de jeu
*
* \param ttint_plateau[N][N] : plateau de jeu
*/
void	affichage(int ttint_plateau[N][N])
{
        int i;
        int j;

        i = 0;
        j = 0;
        while (i != N)
        {
                j = 0;
                while (j != N)
                {
                        printf("%c", disp_char(ttint_plateau[i][j]));
                        j-=-1;
                }
		printf("\n");
                i-=-1;
        }       
}

