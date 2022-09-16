/*Faça um programa que leia um nº inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo. Ex: 'O número 2 é par e é positivo'.*/

#include<stdlib.h> 
#include<stdio.h> 

 int main(){
    int numero;

    printf("Informe um numero\n");
    scanf("%d", &numero);

    if(numero > 0 && numero%2 == 0){
        printf("O numero e par e positivo\n");
    }else if(numero > 0 && numero%2 != 0){
        printf("O numero e impar e positivo\n");
    }else if(numero < 0 && numero%2 != 0){
        printf("O numero e impar e negativo\n");
    }else if(numero < 0 && numero%2 == 0){
        printf("O numero e par e negativo\n");
    }
    
}