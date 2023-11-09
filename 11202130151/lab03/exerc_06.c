//Giulia de Oliveira Machado 
//11202130151
#include <stdio.h>
#define MAX 100

typedef struct {
    int elementos[MAX];
    int n;
} Conjunto;

Conjunto conjunto(int vet[], int n) {
    
    Conjunto novoConjunto;
    novoConjunto.n = 0;

    for (int i = 0; i < n; i++) {
        int elemento = vet[i];
        int pertence = 0;

        for (int j = 0; j < novoConjunto.n; j++) {
            if (novoConjunto.elementos[j] == elemento) {
                pertence = 1;
                break;
            }
        }

        if (!pertence) {
            novoConjunto.elementos[novoConjunto.n] = elemento;
            novoConjunto.n++;
        }
    }

    return novoConjunto;
}

Conjunto conjunto_uniao(Conjunto A, Conjunto B) {
    Conjunto uniao;
    uniao.n = 0;

    for (int i = 0; i < A.n; i++) {
        uniao.elementos[uniao.n] = A.elementos[i];
        uniao.n++;
    }

    for (int i = 0; i < B.n; i++) {
        int elemento = B.elementos[i];
        int pertence = 0;

        for (int j = 0; j < uniao.n; j++) {
            if (uniao.elementos[j] == elemento) {
                pertence = 1;
                break;
            }
        }

        if (!pertence) {
            uniao.elementos[uniao.n] = elemento;
            uniao.n++;
        }
    }

    return uniao;
}

char conjunto_pertence(int a, Conjunto A) {
    for (int i = 0; i < A.n; i++) {
        if (A.elementos[i] == a) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    int vetorA[MAX];
    int vetorB[MAX];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &vetorA[i]);
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &vetorB[i]);
    }

    Conjunto A = conjunto(vetorA, n);
    Conjunto B = conjunto(vetorB, n);

    Conjunto uniao = conjunto_uniao(A, B);

    printf("Conjunto A: ");
    for (int i = 0; i < A.n; i++) {
        printf("%d ", A.elementos[i]);
    }
    printf("\n");

    printf("Conjunto B: ");
    for (int i = 0; i < B.n; i++) {
        printf("%d ", B.elementos[i]);
    }
    printf("\n");

    printf("União de A e B: ");
    for (int i = 0; i < uniao.n; i++) {
        printf("%d ", uniao.elementos[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++){
       if (conjunto_pertence(vetorB[i], A)) {
        printf("%d pertence ao conjunto A.\n", vetorB[i]);
        }
        else {
        printf("%d não pertence ao conjunto A.\n", vetorB[i]);
        } 
    }
    

    return 0;
}
