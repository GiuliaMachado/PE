// Giulia de Oliveira Machado
// 11202130151
#include <stdio.h>

int main(){
	int num, par = 0;
	scanf("%d", &num);
	while(num > 1){
		num = num-2;
		par += 2;
        printf("%d ", par);
	}
	return 0;
}