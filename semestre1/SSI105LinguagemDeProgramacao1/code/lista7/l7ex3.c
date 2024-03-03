/*3 - Escreva um programa que leia 10 números reais. Apresente o resultado da  multiplicação destes. */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int vetor[10];
    int produto;

    printf("Informe um vetor de 10 posicoes:\n");
    for(int i = 0; i <=9; i++){
        scanf("%d", &vetor[i]);
        if(i == 0){
            produto = vetor[0];
        }else{
            produto = produto * vetor[i];
        }
        
    }
    system("clear");
    printf("Produto = %d\n", produto);
    for(int j = 0; j <= 9; j++){
        printf("[%d]", vetor[j]);
    }
}