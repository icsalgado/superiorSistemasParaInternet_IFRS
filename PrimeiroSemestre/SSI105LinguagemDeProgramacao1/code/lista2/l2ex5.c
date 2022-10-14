/*Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles*/

#include<stdlib.h> 
#include<stdio.h> 

 int main(){
    int numero1, numero2, numero3;

    printf("informe o numero1\n");
    scanf("%d", &numero1);
    printf("informe o numero2\n");
    scanf("%d", &numero2);
    printf("informe o numero3\n");
    scanf("%d", &numero3);

    if(numero1 > numero2){
        if(numero1 > numero3){
            printf("o primeiro é o maior : %d\n", numero1);
        }else{
            printf("o terceiro é o maior : %d\n", numero3);
        }
    }else{
        if(numero2 > numero3){
            printf("o segundo é o maior : %d\n", numero2);
        }else{
            printf("o terceiro é o maior : %d\n", numero3);
        }
    }
    
}