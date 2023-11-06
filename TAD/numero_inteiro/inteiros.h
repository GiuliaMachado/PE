#ifndef INTEIROS_H
#define INTEIROS_H
#define MAX 100

typedef struct{
    int elementos[MAX]; //cria um vetor de inteiros
    int tamanho; //controla o tamanho do vetor
} inteiros;

inteiros cria_inteiros();
void add_elemento(inteiros inteiro, int elemento);
void remove_elemento(inteiros inteiro, int elemento);
int contem_elemento(inteiros inteiro, int elemento);
inteiros uniao_inteiros(inteiros inteiro1, inteiros inteiro2);
inteiros interseccao_inteiros(inteiros inteiro1, inteiros inteiro2);
void imprime_inteiros(inteiros inteiro);

#endif
