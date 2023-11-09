#include <stdio.h>

//struct armazenar diversos dados de coisas relacionadas

int main(){
    //definicao da struct
    struct data{ //tipo de dado
        int dia, mes, ano;
    };
    struct ficha_aluno{
        int ra, telefone;
        char nome[30], endereco[100];
        //struct data nascimento;
    };

    struct ficha_aluno aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, 30, stdin);
    printf("Digite o Endereco do aluno: ");
    fgets(aluno.endereco, 100, stdin);
    printf("Digite o Telefone do aluno: ");
    scanf("%d", &aluno.telefone);
    printf("Digite o RA do aluno: ");
    scanf("%d", &aluno.ra);

    printf("------- Lendo os dados da struct -------\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Endereco: %s", aluno.endereco);
    printf("Telefone: %d", aluno.telefone);
    printf("RA: %d", aluno.ra);

    return 0;
}