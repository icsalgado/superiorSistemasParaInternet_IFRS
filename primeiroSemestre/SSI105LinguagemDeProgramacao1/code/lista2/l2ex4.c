/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = 18 anos ou mais
(NÃO USAR SWITCH)
*/

#include<stdlib.h> 
#include<stdio.h> 

int main(){
    int idade;

    printf("Informe a idade do nadador\n");
    scanf("%d", &idade);

    if(idade >= 5 && idade <=7){
        printf("Categoria infantil A\n");
    }else if(idade >= 8 && idade <=10){
        printf("Categoria infantil B\n");
    }else if(idade >= 11 && idade <=13){
        printf("Categoria juvenil A\n");
    }else if(idade >= 14 && idade <=17){
        printf("Categoria juvenil B\n");
    }else{
        printf("Categoria adulto\n");
    }
    
}