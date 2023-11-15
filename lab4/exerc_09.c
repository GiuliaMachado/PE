//Giulia de Oliveira Machado
//11202130151
#include <stdio.h>
#include <stdlib.h>

char* revert(char* s){
    int tamanho = strlen(s);
    char *new = (char *) malloc( (tamanho + 1) * sizeof(char));
    if(new == NULL){
        printf("Nao foi possivel alocar memoria");
        exit(1);
    }

    new[tamanho] = '\0';
    for(int i = 0; i < tamanho; i++){
        new[i] = s[tamanho - i - 1];
    }

    return new;
}

int main(){
    char *c, *reverso;
    int n;
    printf("Digite o tamanho da string: ");
    scanf("%d", &n);
    getchar();

    printf("Digite sua string: ");
    fgets(c, n+1, stdin);

    reverso = revert(c);
    if(reverso != NULL){
        printf("string normal: %s\n", c);
        printf("string reversa: %s\n", reverso);
    }



    return 0;
}