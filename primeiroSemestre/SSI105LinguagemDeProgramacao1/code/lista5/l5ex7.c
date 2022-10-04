/*A poupança rende 0,5% ao mês. Se eu depositar R$100 reais todos os meses, qual o valor que terei mês a mês em 2 ANOS?

Ex:
MES 1: 100,00
MES 2: 200,50 (R$0,50 de juros + 100 de Deposito)
MES 3: 301,5025 (1,0025 de juros + 100 de Deposito)
***Não é necessário decompor o resultado.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){

    float corrente, proximo;

    corrente = 100.00;

    for(int i=1; i <= 24; i++){
        
        
        printf("mes %d: R$ %.2f\n", i, corrente);
        corrente = corrente+(corrente*0.005);
        proximo = corrente + 100;
        corrente = proximo;
    }
}