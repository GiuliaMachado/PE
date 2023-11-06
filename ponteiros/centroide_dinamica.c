#include <stdio.h>
#include <stdlib.h>

struct ponto {
    double x;
    double y;
};

int main(){
    struct ponto *v, centro;
    int i, n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    v = malloc(n * sizeof(struct ponto));
    if(v == NULL){
        printf("Acabou a memoria\n");
        exit(1);
    }
    for(int i = 0; i<n; i++){
        scanf("%lf %lf", &v[i].x, &v[i].y);
    }
    centro.x = centro.y = 0;
    for(int i = 0; i<n; i++){
        centro.x += v[i].x/n;
        centro.y += v[i].y/n;
    }
    printf("%lf %lf\n", centro.x, centro.y);
    free(v);

    return 0;
}