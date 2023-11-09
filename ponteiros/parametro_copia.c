#include <stdio.h>
#include <stdlib.h>

void imprime_invertido(int v[10], int n){
    while(n > 0){
        printf("%d", v[n-1]);
        n--;
    }
}
int main(){
    int n =10, v[10] = {0, 1,2,3,4,5,6,7,8,9};
    imprime_invertido(v, n);
    printf("\nValor de n: %d\n", n); //n = 10
    //mesmo que decrementou na funçao, valor de n nao muda
    //pois é passado como CÓPIA 
    return 0;
}