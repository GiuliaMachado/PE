//Giulia de Oliveira Machado 
//11202130151
#include <stdio.h>
#include "matriz.h"
#define MAX 100


Matriz criarMatriz(int l, int c) {
    Matriz matriz;
    matriz.l = l;
    matriz.c = c;
    return matriz;
}

void preencherMatriz(Matriz matriz) {
    for (int i = 0; i < matriz.l; i++) {
        for (int j = 0; j < matriz.c; j++) {
            scanf("%d", &matriz.elementos[i][j]);
        }
    }
}

Matriz multiplicarMatrizes(Matriz matrizA, Matriz matrizB) {
    Matriz resultado = criarMatriz(matrizA.l, matrizB.c);
    int somaprod = 0;
    for (int i = 0; i < matrizA.l; i++) {
        for (int j = 0; j < matrizB.c; j++) {
            resultado.elementos[i][j] = 0;
            for (int k = 0; k < matrizB.l; k++) {
                somaprod += matrizA.elementos[i][k] * matrizB.elementos[k][j];
                
            } 
            resultado.elementos[i][j] = somaprod;
            somaprod = 0;
        }
    }
    return resultado;
}

void imprimirMatriz(Matriz matriz) {
    for (int i = 0; i < matriz.l; i++) {
        for (int j = 0; j < matriz.c; j++) {
            printf("%d ", matriz.elementos[i][j]);
        }
        printf("\n");
    }
}

