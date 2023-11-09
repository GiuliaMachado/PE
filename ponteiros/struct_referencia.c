#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
    int dia, mes, ano;
};

struct aluno{
    int ra, curso;
    double cr;
    char nome[50], endereco[200], email[50];
    struct data nascimento, ingresso;
}

void atualiza_email(struct aluno *a, char *novo_email){
    for(int i = 0; i<strlen((*a).email); i++){
        *a.email[i] = *a.nome_email[i];
    }
}
int main(){
    struct aluno *a;
    return 0;
}