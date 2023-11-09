//Giulia de Oliveira Machado 
//11202130151
#include <stdio.h>
int tamanho_zeros(char string[]);
#define MAX 1000
int main(){
    char string[MAX];
    printf("Digite em sequência os números 1 e/ou 0: ");
    fgets(string, MAX, stdin);
    printf("%d", tamanho_zeros(string));

    return 0;
}

int tamanho_zeros(char string[]){
    int zeroAtual =0, countZeros=0; 
    for(int i = 0; i < strlen(string); i++){
        if(string[i] == '0'){
            zeroAtual++;
        }else{
            if(zeroAtual > countZeros){
                countZeros = zeroAtual;
            }
            zeroAtual = 0;
        }
    }
    if(zeroAtual > countZeros){
        countZeros = zeroAtual;
    }
    return countZeros;
}