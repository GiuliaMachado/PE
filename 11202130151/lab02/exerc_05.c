#include <stdio.h>
#include <math.h>
#define MAX 100

void le_matriz(int l, int c, int m[][MAX]);
void transposta(int l, int c, int m[][MAX], int t[][MAX]);
int imprime_matriz(int l, int c, int m[][MAX]);

int main(){
    int l, c;
    int m[MAX][MAX], t[MAX][MAX];
    printf("Informe a quantidade de linhas da matriz: ");
    scanf("%d",&l);
    while(l < 1 || l > 100){
        printf("Informe um numero maior que 1 e menor que 100.\n");
        scanf("%d",&l);
    }

    printf("Informe a quantidade de colunas da matriz: ");
    scanf("%d",&c);
    while(c < 1 || c > 100){
        printf("Informe um numero maior que 1 e menor que 100.\n");
        scanf("%d",&c);
    }
    le_matriz(l, c, m);
    transposta(l, c, m, t);
    imprime_matriz(l, c, t);
    return 0;
}

void le_matriz(int l, int c, int m[][MAX]){
    for(int i = 0; i< l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

void transposta(int l, int c, int m[][MAX], int t[][MAX]){
    for(int i = 0; i < l;i++){
        for(int j =0; j < c; j++){
            t[j][i] = m[i][j]; 
        }
    }
}
//trocar dimensoes pra imprimir matriz transposta
int imprime_matriz(int l, int c, int m[][MAX]){
    int i, j;
    for (i = 0; i < c; i++) {
        for (j = 0; j < l; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}