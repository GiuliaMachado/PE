#include <stdio.h>

#define MAX 100
void le_matriz(int l, int c, int m[][MAX]);
int simetrica(int l, int c, int m[][MAX]);
int main(){
    int l, c;
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

    if(simetrica(l, c, m) == 0)
        printf("Eh simetrica");
    else
        printf("Nao eh simetrica");
    return 0;
}

void le_matriz(int l, int c, int m[][MAX]){
    for(int i =0; i <l;i++){
        for(int j=0; j<c; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

int simetrica(int l, int c, int m[][MAX]){
    int count = 0;
    for(int i = 0; i< l;i++){
        for(int j = 0; j < c; j++){
            if(m[i][j] != m[j][i]){
                count++;
            }
        }
    }
    return count;
}