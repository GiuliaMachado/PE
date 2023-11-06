#include <stdio.h>
#define MAX 100

void le_matriz(int l, int c, int m[][MAX]);
void nova_matriz(int c, int m[][MAX], int ind1, int ind2);
int imprime_matriz(int l, int c, int m[][MAX]);

int main(){
    int l, c, ind1, ind2;
    int m[MAX][MAX];
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &l);
    while(l < 1 || l > 100){
        printf("Informe um numero maior que 1 e menor que 100.\n");
        scanf("%d",&l);
    }
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &c);
    while(c < 1 || c > 100){
        printf("Informe um numero maior que 1 e menor que 100.\n");
        scanf("%d",&c);
    }
    printf("Digite os numeros da matriz: ");
    le_matriz(l, c, m);

    printf("Digite dois inteiros menores que n: ");
    scanf("%d", &ind1);
    scanf("%d", &ind2);

    while(ind1 > l || ind2> l){
        printf("Digite dois inteiros MENORES que n: ");
        scanf("%d", &ind1);
        scanf("%d", &ind2);
    }

    nova_matriz(c, m, ind1, ind2);
    imprime_matriz(l, c, m);
    return 0;
}


void le_matriz(int l, int c, int m[][MAX]){
    for(int i =0; i <l;i++){
        for(int j=0; j<c; j++){
            scanf("%d", &m[i][j]);
        }
    }
}
void nova_matriz(int c, int m[][MAX], int ind1, int ind2){
        for(int j = 0; j<c; j++){
            int temp = m[ind1][j];
            m[ind1][j] = m[ind2][j];
            m[ind2][j] = temp;
        }
}

int imprime_matriz(int l, int c, int m[][MAX]){
    int i, j;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}