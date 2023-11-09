#include <stdio.h>
#include <stdlib.h>

void imprime_invertido(int v[10], int *n){
    while(*n > 0){//acessa o valor no endereco de n
        printf("%d", v[*n-1]);
        (*n)--; //decrementa diretamento o valor no endereço de n
    }
}
int main(){
    int n =10, v[10] = {0, 1,2,3,4,5,6,7,8,9};
    imprime_invertido(v,&n);
    //quando a função é executada, n tem seu valor decrementado.
    printf("\nValor de n: %d", n); //n = 0
    
    return 0;
}