#include <stdio.h>
#include <stdlib.h>

struct notas{
    int n_alunos;
    double *nota; //vai ser um ponteiro para um vetor dinamico de notas
    double maior_nota;
};

int main(){
    struct notas v;

    printf("Digite o numero de alunos: ");
    scanf("%d", &v.n_alunos);
    v.nota = (double *)malloc(v.n_alunos * sizeof(double));
    if(v.nota ==NULL){
        printf("Limite de notas atingido");
        exit(1);
    }

    printf("Digite as notas dos alunos: ");
    for(int i = 0; i < v.n_alunos; i++){
        scanf("%lf", &v.nota[i]);
    }
    v.maior_nota = 0;

    for(int i = 0; i < v.n_alunos; i++){
        if(v.nota[i] > v.maior_nota){
            v.maior_nota = v.nota[i];
        }
    }
    printf("Maior nota: %.2lf", v.maior_nota);
    free(v.nota);
    return 0;
}