// Giulia de Oliveira Machado
// 11202130151
#include <stdio.h>
void le_vetor(int n, int v[]);
int imprime_vetor(int n, int v[]);
int ordena_vetor(int n, int v[]);

int main(){
    int n;
    int v[2001];
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    while(n <1 || n > 100){
        printf("Digite um tamanho valido (1 a 100): ");
        scanf("%d", &n);
    }
    le_vetor(n, v);
    ordena_vetor(n, v);
    imprime_vetor(n, v);
    return 0;
}

void le_vetor(int n, int v[]){
    for(int i =0; i < n; i++){
        scanf("%d", &v[i]);   
    }
}

int ordena_vetor(int n, int v[]){
    for(int i = 0; i < n -1 ; i++){
        int ind_menor = i;
        for(int k = i + 1; k < n; k++){
            if(v[k] > v[ind_menor]){
                ind_menor = k;
            }
        }
        if(ind_menor != i){
            int temp = v[i];
            v[i] = v[ind_menor];
            v[ind_menor] = temp;    
        }
    }
    printf("\n");
}

int imprime_vetor(int n, int v[]){
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

// 7 - 2 4 6 0 5 9 1