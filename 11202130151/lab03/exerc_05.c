//Giulia de Oliveira Machado 
//11202130151
#include <stdio.h>
#include <string.h>
#define max 100000
#define min 100

int main() {
    char texto[max];
    char linha[min];
    int linha_atual = 0;

    printf("Digite o texto:\n");

    while (1) {
        char c = getchar();

        if (c == '\n') {
            if (linha_atual == 0) {
                break;
            } else {
                linha[linha_atual] = '\0';
                printf("%s\n", linha);
                linha_atual = 0;
            }
        } else if (linha_atual < 80) {
            linha[linha_atual] = c;
            linha_atual++;
        } else {
            int i = linha_atual - 1;
            while (i >= 0 && linha[i] != ' ') {
                i--;
            }

            if (i < 0) {
                i = linha_atual - 1;
            }

            linha[i] = '\0';
            printf("%s\n", linha);

            int j = 0;
            for (int k = i + 1; k < linha_atual; k++) {
                linha[j] = linha[k];
                j++;
            }
            linha_atual = j;
            //solta a letra lida
            ungetc(c, stdin);
        }
    }

    return 0;
}
