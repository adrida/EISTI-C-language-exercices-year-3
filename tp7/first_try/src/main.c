/*!
* \file main.c
* \brief : main de lancement
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-12-03
*/


#include "../lib.h"

int main(int ac, char **av)
{
	int size;
	float **mat;
	size = get_size(ac,av);
	printf("Size = %d\n",size);
	mat = get_matrix(size);
	disp_mat(mat,size);
	printf("-------------\n");
//	if (get_method(ac,av) == 1)
//	{
		printf("Methode de Gauss\n");
		mat = inverse(mat,size,size);
		disp_mat(mat,size);

//	}
//	if (get_method(ac,av) == 2)
//	{
		printf("Methode du determinant\n");
 //      mat = inverse_determinant(mat, size);
        disp_mat(mat,size);
//	}
//	printf("-------------\n");
	return 0;
}
