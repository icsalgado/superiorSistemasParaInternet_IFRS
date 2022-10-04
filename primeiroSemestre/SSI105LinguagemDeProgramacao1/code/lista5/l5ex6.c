/*Imprimir a letra da musica abaixo, utilizar laço para imprimir. Utilize laço para imprimir a palavra “incomodam”. Utilizar contador para contar quantas ocorrências da palavra incomoda e incomodam ocorrem na letra(somar a ocorrência das duas palavras). IMPRIMIR A QUANTIDADE DE OCORRÊNCIAS

Usar while e do-while. Não usar for.

1 elefante incomoda muita gente
2 elefantes incomodam, incomodam muito mais
3 elefantes incomodam muita gente
4 elefantes incomodam, incomodam, incomodam, incomodam muito mais
5 elefantes incomodam muita gente
6 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
7 elefantes incomodam muita gente
8 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
9 elefantes incomodam muita gente
10 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
10 elefantes incomodam muita gente
9 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito menos
8 elefantes incomodam muita gente
7 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito menos
6 elefantes incomodam muita gente
5 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, muito menos
4 elefantes incomodam muita gente
3 elefantes incomodam, incomodam, incomodam muito menos
2 elefantes incomodam muita gente
1 elefante incomoda muito menos*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int incomoda, incomodam, contador, controle;
    char frase1[] = "elefante incomoda muita gente";
    char frase2[] = "elefantes";
    char frase3[] = "incomodam";
    char frase4[] = "muito mais";

    incomoda = incomodam = 0;
    contador = 1;

    while(contador <= 10){
        controle = contador;
        if(contador == 1){
            printf("%d %s\n", contador, frase1);
            incomoda++;
            contador++;
        }else{
            printf("%d %s ", contador, frase2);
            while (controle >= 1){
                printf("%s ", frase3);
                incomodam++;
                controle--;
            }
            printf("%s\n", frase4);
            contador++;
        }
    }
    contador--;
    while(contador >= 1){
        controle = contador;
        if(contador == 1){
            printf("%d %s\n", contador, frase1);
            incomoda++;
            contador--;
        }else{
            printf("%d %s ", contador, frase2);
            while (controle >= 1){
                printf("%s ", frase3);
                incomodam++;
                controle--;
            }
            printf("%s\n", frase4);
            contador--;
        }
    }    
    printf("%d incomoda\n", incomoda);
    printf("%d incomodam\n", incomodam);
}