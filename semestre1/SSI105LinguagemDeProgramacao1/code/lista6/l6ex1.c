/*1 - Escreva um programa que leia um número e escreva este número elevado ao quadrado.
O programa deve ter uma função que recebe um número como parâmetro e retorne este número elevado ao quadrado*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

float quadrado(float fator){
    return(fator*fator);
}

int main(){
    float valor, quad;
    printf("informe um valor:\n");
    scanf("%f", &valor);

    printf("%.2f\n", quadrado(valor));

}