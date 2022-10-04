/*Escreva um programa que imprima na tela os números impares  entre 1 e 20 de forma decrescente. use o comando FOR.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    for(int i = 20; i >= 1; i--) if(i%2 != 0) printf("%d\n", i);
}