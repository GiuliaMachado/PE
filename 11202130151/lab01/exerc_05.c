// Giulia de Oliveira Machado
// 11202130151
#include <stdio.h>
#include <math.h>
#define MAX 100
//funcoes
void le_vetor(int entrada[], int n) ;
int minimo(int v[], int n);
int maximo(int v[], int n);
double media(int v[], int n);

int main(){
    int n;
    int v[MAX];
    scanf("%d", &n);

    le_vetor(v, n);
    minimo(v, n);
    maximo(v,n);
    media(v, n);

    return 0;
}

void le_vetor(int v[], int n){
    for(int i = 0; i < n;i++){
        scanf("%d", &v[i]);
    } 
}

int minimo(int v[], int n){
    int min = 2147483647;
    for(int i = 0; i <n; i++){
        if(v[i] < min){
            min = v[i];
        }
    }
    printf("Minimo: %d\n", min);
}

int maximo(int v[], int n){
    int max = -2147483647;
    for(int i = 0; i <n; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    printf("Maximo: %d\n", max);
}

double media(int v[], int n){
    double media = 0;
    for(int i = 0; i<n; i++){
        media += v[i];
    }
    printf("Media: %.2lf", (media/n));
}