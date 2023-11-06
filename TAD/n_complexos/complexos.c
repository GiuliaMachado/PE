//implementacao
// LEMBRAR: depois de importar as bibliotecas, deve importar o arquivo onde esta a interface
#include <stdio.h>
#include <math.h>
#include "complexos.h"

//as assinaturas das funcoes foram declaradas no complexos.h
//devemos criar a estrutura das funçoes
// A funcao complexo_novo recebe dois valores double e armazena nos campos da struct,
// retorna a variavel c do tipo complexo
complexo complexo_novo(double real, double imag){
    complexo c;
    //acesso a struct do tipo complexo no campo real, para guardar o valor do real
    c.real = real;
    c.imag = imag;
    return c;
}
// vai receber duas variaveis do tipo complexo como entrada, vai somar parte real com real,
// e imag com imag e retorna um numero complexo novo
complexo complexo_soma(complexo a, complexo b){
    return complexo_novo(a.real + b.real, a.imag + b.imag);
}

complexo complexo_le(){
    complexo a;
    scanf("%lf %lf", &a.real, &a.imag);
    return a;
}

double complexo_absoluto(complexo a){
    return sqrt(a.real * a.real + a.imag * a.imag); //raiz(real^2 + imag^2)
}

void complexo_imprime(complexo a){
    printf("%lf %lfi\n", a.real, a.imag);
}

int complexos_iguais(complexo a, complexo b){
    return (a.real == b.real) && (a.imag == b.imag);
}

complexo complexo_multiplicacao(complexo a, complexo b){
    return complexo_novo(a.real * b.real - a.imag * b.imag,
                         a.real * b.real + a.imag * b.imag);
}

complexo complexo_conjugado(complexo a){
    return complexo_novo(a.real, -a.imag); //1-i
}
