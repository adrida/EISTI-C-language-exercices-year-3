/*!
* \file determinant.c
* \brief : methode du determinant
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-26
*/

$

int	get_det(int mat[N][N])
{
	int i;
	int j;
	int det;

	i = 0;
	j = 0;
	det = 0;
	while (i != N)
	{
		j = 0;
		while (j != N)
		{
			det = det + (mat[i][j]) * (
			j++;
		}
		i++;
	}
	return det;
}

int **determinant(int mat[N][N])
{
	
}
