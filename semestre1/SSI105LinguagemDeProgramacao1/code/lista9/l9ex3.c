/*c - Crie uma função que receba como parâmetro 3 ponteiros variáveis inteiras e devolva o maior valor (maior conteúdo, não o maior endereço);*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void maior(int*, int*, int*);

int main(){
    int a, b, c;
    a = 1;
    b = 15;
    c = 7;

    maior(&a, &b, &c);
}

void maior(int *a, int *b, int *c){
    if(*a > *b){
        if(*a > *c){
            printf("Maior é %d", *a);
        }else{
            printf("Maior é %d", *c);
        }
    }else{
        if(*b > *c){
            printf("Maior é %d", *b);
        }else{
            printf("Maior é %d", *c);
        }
    }
}

