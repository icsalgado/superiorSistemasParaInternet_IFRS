/*5 - Faça um programa que recebe a nota de 10 alunos e armazene as notas em um vetor. Calcule:

a - a média da classe

b - a quantidade de alunos aprovados, com média =7

c - a quantidade de alunos reprovados.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    float notas[10];
    float media = 0;
    int aprovados = 0;
    int reprovados = 0;

    printf("Digite as 10 notas em sequencia\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%f", &notas[i]);
        media = media + notas[i];
        if(notas[i] == 7){
            aprovados++;
        }
        if(notas[i] < 6){
            reprovados++;
        }
    }

    media = media/10;
    printf("Media da turma: %.2f\n%d alunos aprovados com 7\n%d alunos reprovados\n", media, aprovados, reprovados);

}