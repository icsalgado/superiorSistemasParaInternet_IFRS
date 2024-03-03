#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void trocaValor(int, int);//recebe inteiros
void trocaRef(int*, int*);//recebe ponteiros para inteiro

int main(){
    int a = 7;
    int b = 9;
    int memA, memB;

    memA = &a;//pega o endereço de memoria da variavel
    memB = &b;

    printf("Valores iniciais: a=%d e b=%d\n", a, b);
    printf("Enderecos de memoria: a=%d e b=%d\n", memA, memB);

    trocaValor(a, b);

    printf("Depois da troca por valor: a=%d e b=%d\n", a, b);

    trocaRef(&a, &b);

    printf("Depois da troca por referencia: a=%d e b=%d\n", a, b);
}

void trocaValor(int a, int b){
    int temp = a;
    a = b;
    b = temp;//faz a troca somente dentro da função
    printf("Troca Valor: a=%d e b=%d\n", a, b);
}

void trocaRef(int *a, int *b){
    int temp = *a; 
    *a = *b; 
    *b = temp;//troca o conteúdo do endereço referencia pela variavel
    printf("Troca Referencia: a=%d e b=%d\n", *a, *b);
}