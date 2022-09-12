/*Faça um programa que faça a conversão de um valor lido em dólares para um valor em reias. O usuário deve informar a quantidade em dólares e a cotação do dólar no dia.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float real, dolar, cambio;

    printf("Informe o valor em dolares\n");
    scanf("%f", &dolar);
    printf("Informe a cotacao do dolar\n");
    scanf("%f", &cambio);

    real = dolar*cambio;

    printf("US$%.2f = R$%.2f\n", dolar, real);
}