/*Escreva um programa que leia 3 notas, calcule a média simples e escreva na tela*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Informe a primeira nota\n");
    scanf("%f", &nota1);
    printf("Informe a segunda nota\n");
    scanf("%f", &nota2);
    printf("Informe a terceira nota\n");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("A media e: %f\n", media);
}