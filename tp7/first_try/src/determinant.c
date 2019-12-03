/*!
* \file determinant.c
* \brief : methode du determinant
* \author Adam Rida <ridaadam@eisti.eu>
* \version 0.1
* \date 2019-11-26
*/

#include "../lib.h"

float **make_mat(int n) {
    float** matrix = malloc(n * sizeof(float*));
    
    for(int i = 0; i < n; i++) {
        matrix[i] = malloc(n * sizeof(float));

        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }   
    }   
    return matrix;
}
float ** reduced(float ** mat, int n, int x, int y) {
    int m = n - 1;
   float ** new = (float **)make_mat(m);
    
    for(int i = 0; i < m; i++) {
        int u = i;
        if (u >= x) {
            u++;
        }

        for(int j = 0; j < m; j++) {
            int v = j;
            if (v >= y) {
                v++;
            }
            new[i][j] = mat[u][v];
        } 
    }
    return new;
}

float determinant(float ** mat, int n) {
    if (n == 1) {
        return mat[0][0];
    }

    float det = 0;
    int i = 0;
    for (int j = 0; j < n; j++) {
        int sign = (i + j) % 2 == 0 ? 1 : -1;

        float ** r = reduced(mat, n, i, j);
        det += mat[i][j] *  sign * determinant(r, n - 1);

        //free_mat(r, n - 1);
    }
    return det;
}

float ** comat(float ** mat, int n) {
    float ** com = (float **)make_mat(n);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sign = (i + j) % 2 == 0 ? 1 : -1;

            float ** r = reduced(mat, n, i, j);
            com[i][j] = sign * determinant(r, n - 1);
            //free_mat(r, n - 1);
        }
    }
    return com;
}

float ** transpose(float ** mat, int n) {
    float ** t = (float **)make_mat(n);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            t[i][j] = mat[j][i];
        }
    }
    return t;
}


float ** mull(float x, float ** mat, int n) {
    float ** res = (float **)make_mat(n);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = x * mat[i][j];
        }
    }
    return res;
}

float ** inverse_determinant(float ** mat, int size) {
    float det = determinant(mat, size);
    float ** com = comat(mat, size);
    float ** tcom = transpose(com, size);
    float ** inverse = mull(1.0/det, tcom, size);
    //free_mat(com, size);
   // free_mat(tcom, size);

    return inverse;
}