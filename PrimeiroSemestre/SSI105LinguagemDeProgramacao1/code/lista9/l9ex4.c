/*d - Crie uma função que receba como parâmetro 3 ponteiros para inteiro e devolva o endereço que aponta para a variável de maior valor; (importante: quero o endereço do maior valor, não o maior endereço...)*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void maior(int*, int*, int*);

int main(){
    int a, b, c;
    a = 1;
    b = 15;
    c = 7;

    printf("a=%u | b=%u | c=%u\n", &a, &b, &c);

    maior(&a, &b, &c);
}

void maior(int *a, int *b, int *c){
    if(*a > *b){
        if(*a > *c){
            printf("Maior é %u", &*a);
        }else{
            printf("Maior é %u", &*c);
        }
    }else{
        if(*b > *c){
            printf("Maior é %u", &*b);
        }else{
            printf("Maior é %u", &*c);
        }
    }
}