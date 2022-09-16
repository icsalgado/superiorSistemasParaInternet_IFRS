/*Faça um programa que leia a média do aluno e seu numero de faltas. se as faltas forem maior ou igual a 5, escreva 'reprovado por faltas'. Se a média for menor que 7, foi reprovado por média. Senão, escreva 'Parabéns! você foi aprovado'.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float media;
    int faltas;

    printf("Informe a media do aluno\n:");
    scanf("%f", &media);
    printf("Informe a qunatidade de faltas\n:");
    scanf("%d", &faltas);
    
    if(faltas < 5 && media >= 7){
        printf("Parabéns! você foi aprovado\n");
    }else if(media < 7){
        printf("Reprovado por media\n");
    }else{
        printf("Reprovado por falta\n");
    }
}