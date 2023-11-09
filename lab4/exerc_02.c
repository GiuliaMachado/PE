//Giulia de Oliveira Machado
//11202130151
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    char *palavras;
    printf("Qual o tamanho de sua string? ");
    scanf("%d", &n);
    //limpa o buffer da string
    while(getchar() != '\n');

    palavras = (char *)malloc((n+1)* sizeof(char));
    if(palavras == NULL){
        printf("Limite de memória excedido!");
        exit(1);
    }
    printf("Digite uma palavra: ");
    fgets(palavras, n+1, stdin);

    printf("Palavra lida: %s\n", palavras);
    free(palavras);
    return 0;
}