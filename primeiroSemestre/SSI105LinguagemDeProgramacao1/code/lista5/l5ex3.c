/*Escreva um programa que imprima na tela os números múltiplos de 3  entre 1 e 20 de forma crescente. use o comando WHILE.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int i = 1;
    while(i <= 20){
        if(i%3 == 0) printf("%d\n", i);
        i++;
    }
}