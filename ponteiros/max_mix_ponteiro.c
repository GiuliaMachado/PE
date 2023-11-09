#include <stdio.h>
#include <stdlib.h>

void max_min(int *v, int n, int *p_min, int *p_max){
    *p_max = *p_min = v[0];
    for(int i = 1; i < n; i++){
        if(*p_max < v[i]){
            *p_max = v[i];
        }
        if(*p_min > v[i]){
            *p_min = v[i];
        }
    }
}
int main(){ 
    int *v, min, max;
    int n;
    scanf("%d", &n);

    v = malloc( n * sizeof(int));
    if(v == NULL){
        printf("Não ha espaço disponivel.");
        exit(1);
    }
    printf("Digite os numeros do vetor: ");

    for(int i = 0; i<n; i++){
        scanf("%d", &v[i]);
    }
    max_min(v, n, &min, &max);
    printf("Valor minimo %d: ", min);
    printf("Valor maximo: %d", max);
    free(v);
    return 0;
}