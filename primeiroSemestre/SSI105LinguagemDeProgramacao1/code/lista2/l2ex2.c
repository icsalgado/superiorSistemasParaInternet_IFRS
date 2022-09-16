/*Leia 04 (quatro) notas de um aluno, a primeira tem peso 1, a segunda peso 2, a terceira peso 3, a quarta peso 4. Calcule a média e informe se o aluno foi aprovado ou não. Usar 'else'.Caso a nota seja menor que 7 ele será reprovado.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, nota4, media;

    printf("Informe a nota1\n:");
    scanf("%f", &nota1);
    printf("Informe a nota2\n:");
    scanf("%f", &nota2);
    printf("Informe a nota3\n:");
    scanf("%f", &nota3);
    printf("Informe a nota4\n:");
    scanf("%f", &nota4);

    media = (nota1*1+nota2*2+nota3*3+nota4*4)/(1+2+3+4);

    if(media < 7.00){
        printf("Reprovado\n");
        printf("Media: %.2f\n", media);
    }else{
        printf("Aprovado\n");
        printf("Media: %.2f\n", media);
    }
}