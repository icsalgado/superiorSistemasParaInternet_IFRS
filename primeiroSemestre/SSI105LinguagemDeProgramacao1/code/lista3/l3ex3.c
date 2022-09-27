/*Faça um programa que leia as notas de 2 provas e um trabalho e o numero de faltas. Calcule a média aritmética. E indique o conceito: 

A para (8.0 a 10),
B para (7.0 a 7.9),
C para (6.0 a 6.9),
D para (0.0 a 5.9)
E para reprovado por faltas. Maior ou igual a 5.
Escreva "Reprovado" ou "Aprovado".*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    float nota1, nota2, media, trabalho;
    int faltas;

    printf("Informe a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Informe a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Informe a nota do trabalho:\n");
    scanf("%f", &trabalho);
    printf("Informe a quantidade de faltas:\n");
    scanf("%d", &faltas);

    media = (nota1+nota1+trabalho)/3;

    if(faltas >= 5){
        printf("Conceito E - reprovado por faltas\n\n");
    }else if(media <= 5.9){
        printf("Conceito D - reprovado\n\n");
    }else if(media >= 6 && media <= 6.9){
        printf("Conceito C - reprovado\n\n");
    }else if(media >= 7 && media <= 7.9){
        printf("Conceito B - aprovado\n\n");
    }else{
        printf("Conceito A - aprovado\n\n");
    }

}