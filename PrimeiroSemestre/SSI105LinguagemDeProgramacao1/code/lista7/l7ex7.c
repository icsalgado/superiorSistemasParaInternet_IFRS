/*7 - Faça um programa que carregue uma matriz 3x3 de números inteiros. Calcule:

a - o maior número
b - o menor número
c - a média dos números
d - a soma da primeira linha
e - o produto (multiplicação) da diagonal principal*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int matriz[3][3];
    int maior, menor, soma, produto;

    soma = 0;

    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("Informe o valor da posicao [%d][%d]\n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
            soma = soma + matriz[linha][coluna];
            produto = produto * matriz[linha][coluna];
        }
    }

    printf("\nMatriz 3 x 3\n\n");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");

    maior = menor = matriz[0][0];

    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            if(matriz[linha][coluna] > maior){
                maior = matriz[linha][coluna];
            }
            if(matriz[linha][coluna] < menor){
                menor = matriz[linha][coluna];
            }

        }
    }

    printf("O maior é: %d\n", maior);
    printf("O menor é: %d\n", menor);
    printf("O soma é: %d\n", soma);
    printf("O media é: %d\n", soma/9);
    printf("O produto é: %d\n", produto);
}