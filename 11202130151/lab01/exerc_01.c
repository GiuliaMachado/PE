// Giulia de Oliveira Machado
// 11202130151
#include <stdio.h>

//funcao  para checar se é primo
int primo(int numero);

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		if((primo(i)) == 1){
			printf("%d ", i);
		}
	}
	return 0;
}

int primo(int numero){
	int cont = 0;
	for(int i = 1; i <= numero; i++){
		if((numero%i) ==0){
			cont++;
		}
	}
	
	if(cont == 2){
		return 1;
	}
	else{
		return 0;
	}
}