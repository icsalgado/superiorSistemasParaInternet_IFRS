/*CAIXA ELETRÔNICO. Escrever um programa que lê um valor inteiro em reais e calcula qual o menor número possível de notas de 100, 50, 20, 10, 5, 2 e 1 em que o valor lido pode ser entregue ao cliente. Escrever a relação de notas necessárias.
• Dica: use %*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int valor, restante;
    
    printf("Informe o valor: ");
    scanf("%d", &valor);

    do{
        if(valor >= 100){
            printf("Nota R$ 100.00: %d\n", valor/100);
            valor = valor%100;
        }else if(valor >= 50){
            printf("Nota R$ 50.00: %d\n", valor/50);
            valor = valor%50;
        }else if(valor >= 20){
            printf("Nota R$ 20.00: %d\n", valor/20);
            valor = valor%20;
        }else if(valor >= 10){
            printf("Nota R$ 10.00: %d\n", valor/10);
            valor = valor%10;
        }else if(valor >= 5){
            printf("Nota R$ 5.00: %d\n", valor/5);
            valor = valor%5;
        }else if(valor >= 2){
            printf("Nota R$ 2.00: %d\n", valor/2);
            valor = valor%2;
        }else{
            printf("Nota R$ 1.00: %d\n", valor);
        }
    }while(valor>1);
    
}