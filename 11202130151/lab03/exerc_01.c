//Giulia de Oliveira Machado 
//11202130151
#include <stdio.h>


#define MAX 1000
void imprime_trecho(char texto[], char padrao);

int main(){
    char padrao;
    char palavra[MAX];
    printf("Digite um caractere: ");
    scanf("%c ", &padrao);
    //limpa o caractere do enter \n pendente do scanf anterior
    //getchar(); 
    printf("Digite uma frase: ");
    //fgets lê uma frase contendo espaços
    fgets(palavra, MAX, stdin);
    printf("procurando por %c no texto: %s", padrao, palavra);
    
    imprime_trecho(palavra, padrao);
    return 0;
}

void imprime_trecho(char texto[], char padrao){
    for(int j =0; j < strlen(texto); j++){
        if(texto[j] != padrao){
            printf("%c", texto[j]);       
        }
        else
            break;     
    }    
 }
