#include <stdio.h>
#include <math.h>
#define MAX 100
void le_matriz(int l, int c, int m[][MAX]);
void soma_matriz(int l, int c, int m1[][MAX], int m2[][MAX], int m3[][MAX]);
int imprime_matriz(int l, int c, int m[][MAX]);
int main(){
    int l, c;
    int m1[MAX][MAX], m2[MAX][MAX], m3[MAX][MAX];
    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    while(l<1 || l > 100){
        printf("Digite um numero entre 1 e 100: ");
        scanf("%d", &l);
    }
    
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);
    while(c<1 || c > 100){
        printf("Digite um numero entre 1 e 100: ");
        scanf("%d", &c);
    }
    printf("Digite os elementos da primeira matriz: ");
    le_matriz(l, c, m1);
    printf("Digite os elementos da segunda matriz: ");
    le_matriz(l, c, m2);
    soma_matriz(l, c, m1, m2, m3);
    imprime_matriz(l , c, m3);
    return 0;
}

void le_matriz(int l, int c, int m[][MAX]){
    for(int i = 0; i<l; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
}

void soma_matriz(int l, int c, int m1[][MAX], int m2[][MAX], int m3[][MAX]){
    for(int i=0; i< l; i++)
        for(int j = 0; j < c; j++)
            m3[i][j] = m1[i][j] + m2[i][j];
}

int imprime_matriz(int l, int c, int m[][MAX]){
    int i, j;
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}