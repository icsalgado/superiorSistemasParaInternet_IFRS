/*3 - Escreva um programa que leia dois números e apresente as seguintes opções:
A - Somar 2 números
B - Multiplicar 2 números
C - Dividir 2 Números
D -  Subtrair 2 Números
Cada um dos items deve ser uma função */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

float somar(float v1, float v2){
    return(v1+v2);
}
float multiplicar(float v1, float v2){
    return(v1*v2);
}
float dividir(float v1, float v2){
    return(v1/v2);
}
float subtrair(float v1, float v2){
    return(v1-v2);
}

int main(){
    float valor1, valor2;
    char op;
    printf("Informe um valor:\n");
    scanf("%f", &valor1);
    printf("Informe outro valor:\n");
    scanf("%f", &valor2);
    printf("Informe \nA para somar\nB para multiplicar\nC para dividir\nD para subtrair\n");
    scanf("%s", &op);
    
    switch (op){
    case 'a':
        printf("Soma: %.2f\n", somar(valor1, valor2));
        break;
    
    case 'b':
        printf("Produto: %.2f\n", multiplicar(valor1, valor2));
        break;
    
    case 'c':
        printf("Divisao: %.2f\n", dividir(valor1, valor2));
        break;
    
    case 'd':
        printf("Subtracao: %.2f\n", subtrair(valor1, valor2));
        break;
    
    default:
        printf("Invalido");
        break;
    }
}