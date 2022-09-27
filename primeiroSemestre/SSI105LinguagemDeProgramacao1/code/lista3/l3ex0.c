/*Escreva um programa que:
 - leia duas strings;
 - compare as duas: informe se as duas são iguais ou diferentes entre si;
 - indique a capacidade de cada variável string
 - informe o espaço usado pelo conteúdo em cada string.
 - Concatenar as duas strings. Antes de concatenar verifique se a string de destino tem espaço suficiente para a concatenação, caso o espaço não seja suficiente, escreva uma mensagem de erro.*/

#include<stdlib.h> 
#include<stdio.h> 
#include<string.h>

int main(){
    char primeira[15];
    char segunda[15];

    printf("informe a primeira string\n");
    gets(primeira);
    printf("informe a segunda string\n");
    gets(segunda);

    if(strcmp(primeira, segunda) != 0){
        printf("As strings sao diferentes\n");
    }else{
        printf("As strings sao iguais\n");
    }

    printf("A primeira variavel tem %d unidades de espaco e a segunda tem %d\n", sizeof(primeira), sizeof(segunda));
    printf("A primeira variavel tem %d caracteres e a segunda tem %d\n\n", strlen(primeira), strlen(segunda));
    
    if(strlen(primeira)+strlen(segunda)>=sizeof(primeira)){
        printf("Variável sem espaco para armazenamento\n\n");
    }else{
        printf("%s\n\n", strcat(primeira, segunda));
    }
}