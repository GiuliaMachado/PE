#include <stdio.h>

int main(){
	int op;
	double n1, n2;
	scanf("%d", &op);
	while(op != 5){
		scanf("%lf", &n1);
		scanf("%lf", &n2);
		if(op == 1){
			printf("%.2lf", n1+n2);
			scanf("%d", &op);
		}
		else if(op == 2){
			printf("%.2lf", n1 -n2);
			scanf("%d", &op);
		}
		else if(op == 3){
			printf("%.2lf", n1 * n2);
			scanf("%d", &op);
		}
		else if(op == 4){
			printf("%.2lf", n1 / n2);
			scanf("%d", &op);
		}
		else{
			printf("Insira um numero");
			scanf("%d", &op);
		}
	}
	return 0;
}