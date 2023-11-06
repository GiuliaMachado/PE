#include <stdio.h>

int main(){
    int *endereco;
    int variavel = 90;
    endereco = &variavel;
    printf("Variavel: %d\n", variavel);
    printf("Variavel: %d\n", *endereco);
    printf("Endereco: %p\n", endereco);
    printf("Endereco: %p", &variavel);
    return 0;
}