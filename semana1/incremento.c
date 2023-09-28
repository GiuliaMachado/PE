#include <stdio.h>

int main() {
 int a = 5, b;

	b = ++a; //primeiro incrementa o valor de a, depois atribui à b. a=6, b=6
	printf("b: %d\n", b);
	printf("a: %d\n", a);

	b = a++; //aqui b recebe o valor de a e só depois a é incrementado. b=6
	printf("b: %d\n", b);
	printf("a: %d\n", a);
 return 0;

}