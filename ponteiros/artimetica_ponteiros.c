#include <stdio.h>

int main(){
    int vetor[5] = {1,2,3,4,5};
    int *ponteiro;
    ponteiro = vetor + 2; //ponteiro = endereco da posicao 0 no vetor, mais duas posições a frente (conteudo = 3)
    ponteiro++; //ponteiro recebe o valor da posicao a frente (conteudo do vetor = 4)
    printf("%d %d %d", *vetor, *(ponteiro -1), *ponteiro); //imprime o conteudo na posicao 0, que é valor 1. 
    //Imprime o conteudo na posicao 3-1, que é o numero 3. E imprime o conteudo na posicao 3, que é 4.
    return 0;
}