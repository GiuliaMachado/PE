// Giulia de Oliveira Machado
// 11202130151
#include <stdio.h>

//funcoes
void le_vetor(int n, int v[]);
int busca(int valores[], int n, int chave);

int main(){
    int n, chave;
    int v[2100];
    printf("Digite quantos elementos terá o vetor:");
    scanf("%d", &n);
    printf("Digite uma chave: ");
    scanf("%d", &chave);
    printf("Digite os elementos do vetor: ");
    le_vetor(n, v);

    if(busca(v, n, chave) != -1)
        printf("Indice do vetor onde está o valor da chave: %d ", busca(v, n, chave));
    else
        printf("%d", busca(v, n, chave));

    return 0;
}

void le_vetor(int n, int v[]){
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);
}

int busca(int valores[], int n, int chave){
    int cont = 0;
    for(int i = 0; i < n; i++){
        if(valores[i] == chave){
            cont = i;
        }      
    }
    if(cont >= 1){
        return cont;
    }
    else{
        return -1;
    }       
}