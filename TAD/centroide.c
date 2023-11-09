#include <stdio.h>
#define MAX 100

struct ponto{
   double x, y;
};


int main(){
    struct ponto v[MAX], centroide;
    int n;
    scanf("%d", &n);
    for(int i = 0; i <n; i++){
        scanf("%lf %lf", &v[i].x, &v[i].y);
    }
    centroide.x =0;
    centroide.y = 0;
    for(int i = 0; i<n; i++){
        centroide.x += v[i].x/n;
        centroide.y += v[i].y/n;
    }

    printf("%lf %lf\n", centroide.x, centroide.y);
    return 0;
}