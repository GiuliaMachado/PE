#include <stdio.h>
#include <stdlib.h>

int main(){
    double media, *notas; 
    int i, n;
    printf("Digite o numero de elementos do vetor");
    scanf("%d", &n);
    notas = malloc(n * sizeof(double));
    if(notas == NULL){
        printf("Nao ha memoria suficiente");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        scanf("%lf", &notas[i]);
    }
    media = 0;
    for(int i = 0; i< n; i++){
        media += notas[i] / n;
    }

    printf("Media: %lf", media);
    free(notas);

    return 0;
}