//Giulia de Oliveira Machado 
//11202130151
#ifndef MATRIZ_H
#define MATRIZ_H

#define MAX 100

typedef struct {
    int elementos[MAX][MAX];
    int l;
    int c;
} Matriz;

Matriz criarMatriz(int l, int c);
void preencherMatriz(Matriz matriz);
Matriz multiplicarMatrizes(Matriz matrizA, Matriz matrizB);
void imprimirMatriz(Matriz matriz);

#endif
