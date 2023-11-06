// Giulia de Oliveira Machado
// 11202130151
#include <stdio.h>

int main(){
    printf("Qual unidade de temperatura deseja informar? Digite C para Celsius e F para Farenheit (C/F)");
    char letra;
    float temp;
    scanf("%c", &letra);
    printf("Insira a temperatura:");
    scanf("%f", &temp);
    if(letra == 'c' || letra == 'C'){
        temp = (((9 * temp )/5) + 32);
        printf("%.2f F", temp);
    }
    else if(letra == 'f' || letra == 'F'){
        temp = ((5 * (temp - 32))/9);
        printf("%.2f C", temp);
    }
    else{
        printf("Digite uma letra válida: C ou F");
    }

    return 0;
}