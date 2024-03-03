/*Escreva um programa que leia 4 notas e o peso de cada avaliação. Calcule a média e escreva na tela.
Media = (N1*P1+N2*P2+N3*P3+N4*P4)/(P1+P2+P3+P4)*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, media;
    int peso1, peso2, peso3, peso4;

    printf("Informe a primeira nota\n");
    scanf("%f", &nota1);
    printf("Informe o peso da primeira nota\n");
    scanf("%d", &peso1);
    printf("Informe a segunda nota\n");
    scanf("%f", &nota2);
    printf("Informe o peso da segunda nota\n");
    scanf("%d", &peso2);
    printf("Informe a terceira nota\n");
    scanf("%f", &nota3);
    printf("Informe o peso da terceira nota\n");
    scanf("%d", &peso3);
    printf("Informe a quarta nota\n");
    scanf("%f", &nota4);
    printf("Informe o peso da quarta nota\n");
    scanf("%d", &peso4);

    media = ((nota1*peso1)+(nota2*peso2)+(nota3*peso3)+(nota4*peso4))/(peso1+peso2+peso3+peso4);

    printf("A media e: %f\n", media);
}