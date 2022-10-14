/*
Cálculo de Investimento: O usuário deve informar:
i) o percentual de rendimento mensal de uma aplicação;
ii) o valor mensal de depósito;
iii) Meta a ser atingida (Valor objetivo).
Calcular em quantos meses a meta será atingida
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    float rendimento, deposito, saldo, meta;
    int contador = 1;//só inicializa o contador por que os outros recebem do teclado

    printf("Informe o percentual do rendimento\n");
    scanf("%f", &rendimento);
    printf("Informe o valor a ser depositado mensalmente\n");
    scanf("%f", &deposito);
    printf("Informe a meta de valor a ser alcancado\n");
    scanf("%f", &meta);

    rendimento = rendimento/100;
    saldo = 0;
    do{
        saldo = (saldo*rendimento) + saldo + deposito;//vai atualizando o saldo com o valor do deposito e o rendimento
        printf("Mes%d | R$ %f\n", contador, saldo);
        contador++;
    }while(saldo < meta);

    printf("\n\nProgramador: Iuri de Carvalho Salgado\n\n");
}