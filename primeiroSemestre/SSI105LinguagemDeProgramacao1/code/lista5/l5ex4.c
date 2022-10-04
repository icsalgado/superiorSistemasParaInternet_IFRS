/*Escreva um programa que imprima na tela os números múltiplos de 3  entre 1 e 20 de forma decrescente. use o comando DO WHILE.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int i = 20;
    do{
        if(i%3 == 0) printf("%d\n", i);
        i--;
    }while(i >= 1);
}