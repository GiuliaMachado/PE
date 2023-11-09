//Giulia de Oliveira Machado 
//11202130151
#include <stdio.h>
#define MAX 1000

void converte(char palavra[]);
void imprime(char palavra[]);
int main(){
    char palavra[MAX];
    printf("Escreva uma palavra: ");
    fgets(palavra, MAX, stdin);
    converte(palavra);
    imprime(palavra);
    return 0;
}

void converte(char palavra[]){
    for(int i = 0; i < strlen(palavra); i++){
        if(palavra[i] >= 97 && palavra[i] <= 122){
            palavra[i] = palavra[i] - 32;
        }
        else if(palavra[i] >= 65 && palavra[i] <= 90){
            palavra[i] = palavra[i] +32;
        }
    }
}
void imprime(char palavra[]){
    for(int i = 0; i < strlen(palavra); i++){
        printf("%c", palavra[i]);
    }
}
