/*Sequência de Fibonacci
https://super.abril.com.br/mundo-estranho/o-que-e-a-sequencia-de-fibonacci/
A série de Fibonacci inicia com 0 e 1. Os números seguintes são iguais a soma dos dois números anteriores.

Ex. 0, 1, 1, 2, 3, 5, 8, 13, 21. Escreva os 25 primeiros elementos da série de Fibonacci*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int penultimo, ultimo, proximo;

    printf("0, 1, ");
    ultimo = 1;
    penultimo = 0;

    for(int i=2; i<25; i++){
        proximo = ultimo+penultimo;
        printf("%d, ", proximo);
        penultimo = ultimo;
        ultimo = proximo;
    }
}