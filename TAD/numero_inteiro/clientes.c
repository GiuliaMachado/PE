#include <stdio.h>
#include "inteiros.h"

int main() {
    inteiros set1 = cria_inteiros();
    inteiros set2 = cria_inteiros();

    add_elemento(set1, 1);
    add_elemento(set1, 2);
    add_elemento(set1, 3);
    
    add_elemento(set2, 2);
    add_elemento(set2, 3);
    add_elemento(set2, 4);

    printf("Inteiro 1: ");
    imprime_inteiros(set1);
    printf("Inteiro 2: ");
    imprime_inteiros(set2);

    inteiros unionSet = uniao_inteiros(set1, set2);
    inteiros intersectionSet = interseccao_inteiros(set1, set2);

    printf("Union: ");
    imprime_inteiros(unionSet);
    printf("Intersection: ");
    imprime_inteiros(intersectionSet);

    return 0;
}
