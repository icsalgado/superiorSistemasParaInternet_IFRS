/*Escreva um programa que lê três numeros e imprima o resultado da multiplicação. */

#include <stdlib.h>
#include <stdio.h>

int main(){
    float numero1, numero2, numero3, multiplicacao;

    printf("informe o primeiro numero\n");
    scanf("%f", &numero1);
    printf("informe o segundo numero\n");
    scanf("%f", &numero2);
    printf("informe o terceiro numero\n");
    scanf("%f", &numero3);

    multiplicacao = numero1 * numero2 * numero3;

    printf("A multiplicacao é %.2f\n", multiplicacao);
}