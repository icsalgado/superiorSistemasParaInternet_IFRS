/*Escreva um programa que leia o nome e a idade do usuário e retorne uma mensagem indicando se o usuário é maior de idade ou não.  Vamos considerar 18 anos completos.
Ex: "FULANO é maior de idade" ou "FULANO é Menor de idade"*/

#include<stdlib.h> 
#include<stdio.h> 
#include<string.h>
 int main(){
    int idade;
    char nome[30];

    printf("Informe seu nome\n");
    gets(nome);
    printf("informe sua idade\n");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("%s e maior de idade\n", nome);
    }else{
        printf("%s e menor de idade\n", nome);
    }
    
}