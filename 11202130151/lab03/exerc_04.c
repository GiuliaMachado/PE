//Giulia de Oliveira Machado 
//11202130151
#include <stdio.h>
#include <string.h>
#define min 100
#define max 1000
int main() {
    char palavra[min];
    char frase[max];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();
    printf("Digite uma frase: ");
    
    fgets(frase, sizeof(frase), stdin);

    if (strstr(frase, palavra) != NULL) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}
