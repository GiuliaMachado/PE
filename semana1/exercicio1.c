#include <stdio.h>

int main(){
	int numero; //3025 %100
	scanf("%d", &numero);
	
	int soma;
	soma = numero/100 + numero % 100;
	
	if(soma * soma == numero){
		printf("OK");
	}
	else{
		printf("Deu ruim.");
	}
	return 0;
}