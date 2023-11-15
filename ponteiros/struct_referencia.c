#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
    int dia, mes, ano;
};

struct aluno{
    double ra;
    double cr;
    char nome[50], endereco[200], email[50];
    struct data nascimento, ingresso;
};

void atualiza_email(struct aluno *a, char *novo_email){
    
}

void cadastrar_aluno(struct aluno *a){
    printf("Digite o nome: ");
    fgets(a->nome, sizeof(a->nome), stdin);

    printf("Digite o endereco: ");
    fgets(a->endereco, sizeof(a->endereco), stdin);

    printf("Digite o email: ");
    fgets(a->email, sizeof(a->email), stdin);

    printf("Digite o RA do aluno: ");
    scanf("%lf", &(a->ra));

    printf("Digite o CR do aluno: ");
    scanf("%lf", &a->cr);

    printf("Digite a data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &a->nascimento.dia, &a->nascimento.mes, &a->nascimento.ano);

    printf("Digite a data de ingresso na faculdade: ");
    scanf("%d %d %d", &a->ingresso.dia, &a->ingresso.mes, &a->ingresso.ano);
}

int main(){
    struct aluno a;
    cadastrar_aluno(&a);

    printf("Informacoes do aluno:\n");
    printf("Nome: %s\n", a.nome);
    printf("Data de nascimento: (%d\\%d\\%d)\n", a.nascimento.dia, a.nascimento.mes, a.nascimento.ano);
    printf("RA: %.0lf\n", a.ra);
    printf("Email: %s\n", a.email);
    printf("CR: %.2lf\n", a.cr);
    printf("Data de ingresso: (%d\\%d\\%d)", a.ingresso.dia, a.ingresso.mes, a.ingresso.ano);
    
    return 0;
}