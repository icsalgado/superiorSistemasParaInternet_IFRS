/*2 - Escreva um programa que leia 10 números inteiros. Apresente a soma dos 10 números. */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int vetor[10];
    int soma = 0;

    printf("Informe um vetor de 10 posicoes:\n");
    for(int i = 0; i <=9; i++){
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    system("clear");
    printf("Soma = %d\n", soma);
    for(int j = 0; j <= 9; j++){
        printf("[%d]", vetor[j]);
    }
}