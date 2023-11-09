#include <stdio.h>
#include <stdlib.h> //alocacao dinamica

int main(){
    double media, *notas; 
    int i, n;
    printf("Digite o numero de elementos do vetor");
    scanf("%d", &n);
    notas = malloc(n * sizeof(double));
    //sempre verificar se malloc retorna NULL
    //segurança para nao estourar a memoria
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
    //variavel alocada dinamicamente continua existindo
    //tem que desalocar com a função free(vetor)
    free(notas);

    return 0;
}