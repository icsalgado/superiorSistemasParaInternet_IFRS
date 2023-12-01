/*
Questão 1: Faça um programa em linguagem C que execute as seguintes tarefas:
a) Peça ao usuário números inteiros positivos, deve parar de pedir números
quando o usuário digitar ‘0’ (zero) Nesta tarefa é obrigatório o uso correto de
uma estrutura de repetição (for, while ou do.. while);
b) Para cada número inteiro positivo digitado pelo usuário, o programa deve mostrar 
os divisores dos valores ímpares e a tabuada dos valores pares;
c) Quando o laço de repetição terminar (isso ocorrerá quando o usuário digitar ‘0’),
o programa deverá mostrar ao usuário a Média de todos dos valores ímpares
e o Maior valor par digitado pelo usuário: Desconsiderar o valor ‘0’ (zero) para
todos os itens
*/

#include<stdlib.h>
#include<stdio.h>

int main(){
    int valor = 0;
    float media, maior = 0;

    do{
        printf("Informe um numero inteiro positivo:\n");
        scanf("%d", &valor);
        if(valor % 2 == 0 && valor != 0){
            for(int i = 1; i <= 10; i++){
                printf("%d x %d = %d\n", valor, i, valor*i);
            }
            if(valor > maior){
                maior = valor;
            }
        }else{
            for(int j = 1; j <= valor; j++){
                if(valor % j == 0){
                    printf("%d eh divisor de %d\n", j, valor);
                }
            }
        }
    }while(valor != 0);

    printf("O maior valor par digitado foi %d\n", maior);
}