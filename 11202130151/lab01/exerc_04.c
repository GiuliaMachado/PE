// Giulia de Oliveira Machado
// 11202130151
#include <stdio.h>
#define MAX 100
//funcoes
void produto_hadamard(int n, double u[], double v[], double resultado []) ;
void le_vetor(int n, double v[]);
int imprime_vetor(int n, double v[]);

int main(){
    int n;
    double u[100], v[100], resultado[100];
    scanf("%d", &n);

    while(n <1 || n > 100){
        printf("Digite um numero maior que 1 e menor que 100\n");
        scanf("%d", &n);
    }

    printf("Digite os elementos do primeiro vetor:\n");
    le_vetor(n, u);
    printf("Digite os elementos do segundo vetor:\n");
    le_vetor(n, v);


    produto_hadamard(n, u, v, resultado);
    imprime_vetor(n, resultado);
    return 0;
}

void produto_hadamard(int n, double u[], double v[], double resultado []){
    for(int i = 0; i < n; i++)
        resultado[i] = u[i] * v[i];
}

void le_vetor(int n, double v[]){
    for(int i = 0; i < n; i++)
        scanf("%lf", &v[i]);
}

int imprime_vetor(int n, double v[]){
    for(int i = 0; i < n; i++)
        printf("%.2lf ", v[i]);
}