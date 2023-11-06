#include <stdio.h>
#include "inteiros.h"

inteiros cria_inteiros(){
    inteiros a;
    a.tamanho =0;
    return a;
}

void add_elemento(inteiros inteiro, int elemento){
    if(inteiro.tamanho < MAX){
        inteiro.elementos[inteiro.tamanho] = elemento;
        inteiro.tamanho++;
    }
}

void remove_elemento(inteiros inteiro, int elemento){
    int i = 0;
    while(i < inteiro.tamanho && inteiro.elementos[i] != elemento){
        i++;
    }
    if(i < inteiro.tamanho){
        for(int j = 1; j < inteiro.tamanho; j++){
            inteiro.elementos[j] = inteiro.elementos[j+1];
        }
        inteiro.tamanho--;
    }
}

int contem_elemento(inteiros inteiro, int elemento){
    for(int i = 0; i < inteiro.tamanho; i++){
        if(inteiro.elementos[i] == elemento){
            return 1;
        }
    }
    return 0;
}

inteiros uniao_inteiros(inteiros inteiro1, inteiros inteiro2){
    inteiros resultado = cria_inteiros();

    for(int i =0; i < inteiro1.tamanho; i++){
        //adiciona o conteudo da struct inteiro1 no resultado
        add_elemento(resultado, inteiro1.elementos[i]);
    }

    for(int i =0; i<inteiro2.tamanho; i++){
        add_elemento(resultado, inteiro2.elementos[i]);
    }

    return resultado;
}

inteiros interseccao_inteiros(inteiros inteiro1, inteiros inteiro2){
    inteiros resultado =  cria_inteiros();

    for(int i =0; i < inteiro1.tamanho;i++){
        if(contem_elemento(inteiro2, inteiro1.elementos[i])){
            add_elemento(resultado, inteiro1.elementos[i]);
        }
    }
    return resultado;
}

void imprime_inteiros(inteiros inteiro){
    printf("{ ");
    for(int i =0; i< inteiro.tamanho; i++){
        printf("%d ", inteiro.elementos[i]);
    }
    printf("}\n");
}
