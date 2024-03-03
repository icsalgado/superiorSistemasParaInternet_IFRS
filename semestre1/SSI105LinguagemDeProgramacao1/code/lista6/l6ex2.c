/*2 - Escreva um programa que leia 3 números. 
O programa deve apresentar a soma e o produto dos 3 números. 
O programa deve ter uma função que recebe os três números e retorna a soma, e outra função que recebe os três números e retorna o produto*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

float soma(float a, float b, float c){
    return(a+b+c);
}
float produto(float a, float b, float c){
    return(a*b*c);
}

int main(){
    float a, b, c;
    printf("Informe o primeiro valor:\n");
    scanf("%f", &a);
    printf("Informe o segundo valor:\n");
    scanf("%f", &b);
    printf("Informe o terceiro valor:\n");
    scanf("%f", &c);

    printf("soma: %.2f\n", soma(a, b, c));
    printf("produto: %.2f\n", produto(a, b, c));
}