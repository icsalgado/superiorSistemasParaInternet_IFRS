/*Escreva um programa que lê dois numeros e imprima o resultado da soma dos dois numeros.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float numero1, numero2, soma;

    printf("informe o primeiro numero\n");
    scanf("%f", &numero1);
    printf("informe o segundo numero\n");
    scanf("%f", &numero2);

    soma = numero1 + numero2;

    printf("A soma é %.2f\n", soma);
}