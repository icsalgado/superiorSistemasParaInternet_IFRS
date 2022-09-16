/*Faça um programa que faça a conversão de um valor lido em reais para um valor em dólares. O usuário deve informar a quantidade em reais e a cotação do dólar no dia.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float real, dolar, cambio;

    printf("Informe o valor em reais\n");
    scanf("%f", &real);
    printf("Informe a cotacao do dolar\n");
    scanf("%f", &cambio);

    dolar = real/cambio;

    printf("R$%.2f = US$%.2f\n", real, dolar);
}