/*Escreva um programa que leia 4 notas: a primeira com peso 1, a segunda com peso 2, a terceira com peso 3, a quarta com peso 4. Leia as 4 notas e cacule a média e escreva na tela.
Media = (N1*1+N2*2+N3*3+N4*4)/(1+2+3+4)*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, media;

    printf("Informe a primeira nota\n");
    scanf("%f", &nota1);
    printf("Informe a segunda nota\n");
    scanf("%f", &nota2);
    printf("Informe a terceira nota\n");
    scanf("%f", &nota3);
    printf("Informe a quarta nota\n");
    scanf("%f", &nota4);

    media = ((nota1*1)+(nota2*2)+(nota3*3)+(nota4*4))/(1+2+3+4);

    printf("A media e: %f\n", media);
}