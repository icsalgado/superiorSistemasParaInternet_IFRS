/*Leia 03 (três) notas de um aluno, calcule sua média. Caso a média seja menor que 7 ele será reprovado. Apresente a média calculada e a situação (aprovado ou reprovado).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Informe a nota1\n:");
    scanf("%f", &nota1);
    printf("Informe a nota2\n:");
    scanf("%f", &nota2);
    printf("Informe a nota3\n:");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    if(media < 7.00){
        printf("Reprovado\n");
        printf("Media: %.2f\n", media);
    }else{
        printf("Aprovado\n");
        printf("Media: %.2f\n", media);
    }
}