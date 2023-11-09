//Giulia de Oliveira Machado 
//11202130151
#include <stdio.h>
#include "matriz.h"

int main(){
    Matriz a, b, result;
    int l1, c1, l2, c2;
    scanf("%d", &l1);
    scanf("%d", &c1);

    a = criarMatriz(l1, c1);
    preencherMatriz(a);

    scanf("%d", &l2);
    scanf("%d", &c2);

    b = criarMatriz(l2, c2);
    preencherMatriz(b);

    result = multiplicarMatrizes(a, b);

    for (int i = 0; i < a.l; i++) {
        for (int j = 0; j < b.c; j++) {
            printf("%d ", result.elementos[i][j]);
        }
        printf("\n");
    }

    return 0;   
}