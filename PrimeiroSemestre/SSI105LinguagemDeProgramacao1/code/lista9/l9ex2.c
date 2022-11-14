/*b- Crie uma função que recebe dois ponteiros inteiros como parâmetros e devolva a media aritmética dos conteúdos apontados (float); (fazer a média dos numeros, não dos endereços)*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void media(int*, int*);

int main(){
    int a, b;
    a = 10;
    b = 5;

    media(&a, &b);
}

void media(int *pa, int *pb){
    float a = *pa;
    float b = *pb;
    float media = (a + b)/2;
    printf("%.1f\n", media);
}