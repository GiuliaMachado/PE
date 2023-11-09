//Giulia de Oliveira Machado 
//11202130151
#include <stdio.h>
#include <string.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Aluno {
    char nome[100];
    struct Data dataNascimento;
    int ra;
};

void cadastrarAluno(struct Aluno alunos[], int *numAlunos) {
    if (*numAlunos < 100) {
        struct Aluno novoAluno;
        printf("Nome do aluno: ");
        fgets(novoAluno.nome, sizeof(novoAluno.nome), stdin);
        printf("Dia de nascimento: ");
        scanf("%d", &novoAluno.dataNascimento.dia);
        printf("Mês de nascimento: ");
        scanf("%d", &novoAluno.dataNascimento.mes);
        printf("Ano de nascimento: ");
        scanf("%d", &novoAluno.dataNascimento.ano);
        printf("RA do aluno: ");
        scanf("%d", &novoAluno.ra);
        alunos[*numAlunos] = novoAluno;
        (*numAlunos)++;
        printf("Aluno cadastrado com sucesso.\n");
    } else {
        printf("Limite de alunos atingido.\n");
    }
}

void buscarAlunoPorNome(struct Aluno alunos[], int numAlunos, char nomeBusca[]) {
    printf("Alunos encontrados com o nome ou sobrenome: %s\n", nomeBusca);
    for (int i = 0; i < numAlunos; i++) {
        if (strstr(alunos[i].nome, nomeBusca) != NULL) {
            printf("Nome: %s, RA: %d", alunos[i].nome, alunos[i].ra);
        }
    }
}

void listarAlunosPorIntervalo(struct Aluno alunos[], int numAlunos, struct Data dataInicio, struct Data dataFim) {
    printf("Alunos com data de nascimento no intervalo de %02d/%02d/%04d a %02d/%02d/%04d:\n",
           dataInicio.dia, dataInicio.mes, dataInicio.ano, dataFim.dia, dataFim.mes, dataFim.ano);
    for (int i = 0; i < numAlunos; i++) {
        if ((compararDatas(alunos[i].dataNascimento, dataInicio) >= 0) &&
            (compararDatas(alunos[i].dataNascimento, dataFim) <= 0)) {
            printf("Nome: %s, RA: %d, Data de Nascimento: %02d/%02d/%04d\n",
                   alunos[i].nome, alunos[i].ra, alunos[i].dataNascimento.dia,
                   alunos[i].dataNascimento.mes, alunos[i].dataNascimento.ano);
        }
    }
}

int compararDatas(struct Data data1, struct Data data2) {
    if (data1.ano < data2.ano) return -1;
    if (data1.ano > data2.ano) return 1;
    if (data1.mes < data2.mes) return -1;
    if (data1.mes > data2.mes) return 1;
    if (data1.dia < data2.dia) return -1;
    if (data1.dia > data2.dia) return 1;
    return 0;
}

int main() {
    struct Aluno alunos[100];
    int numAlunos = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Cadastro de aluno\n");
        printf("2. Busca de aluno por nome\n");
        printf("3. Listagem de alunos pela data de nascimento\n");
        printf("4. Sair\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);
        getchar();
        switch (opcao) {
            case 1:
                cadastrarAluno(alunos, &numAlunos);
                break;
            case 2:
                char nomeBusca[100];
                printf("Digite o nome ou sobrenome do aluno: ");
                fgets(nomeBusca, sizeof(nomeBusca), stdin);
                nomeBusca[strcspn(nomeBusca, "\n")] = '\0';
                buscarAlunoPorNome(alunos, numAlunos, nomeBusca);
                break;
            case 3:
                struct Data dataInicio, dataFim;
                printf("Data de início (dia mês ano): ");
                scanf("%d %d %d", &dataInicio.dia, &dataInicio.mes, &dataInicio.ano);
                printf("Data de fim (dia mês ano): ");
                scanf("%d %d %d", &dataFim.dia, &dataFim.mes, &dataFim.ano);
                listarAlunosPorIntervalo(alunos, numAlunos, dataInicio, dataFim);
                break;
            case 4:
                printf("FIM.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
