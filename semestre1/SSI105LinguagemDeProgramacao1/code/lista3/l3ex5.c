/*O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 5.00
101              | Bauru simples   | 6.00
102              | Bauru c/ovo     | 8.00
103              | Hamburger       | 5.00
104              | Cheeseburger    | 7.50
105              | Refrigerante    | 2.00
Escrever um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche.

Considere que a cada execução somente será calculado um item.

Ao final escreva um resumo do pedido:
Ex
"Pedido: 5 unidade(s) de Cachorro Quente"
"Total R$25,00"*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int codigo, quantidade;
    float valor;

    printf("Informe o codigo do pedido\n");
    scanf("%d", &codigo);
    printf("Informe a quantidade\n");
    scanf("%d", &quantidade);

    if(codigo == 100){
        valor = quantidade*5;
        printf("Pedido: %d unidade(s) de Cachorro Quente\nTotal R$%.2f\n", quantidade, valor);
    }else if(codigo == 101){
        valor = quantidade*6;
        printf("Pedido: %d unidade(s) de Bauru simples\nTotal R$%.2f\n", quantidade, valor);
    }else if(codigo == 102){
        valor = quantidade*8;
        printf("Pedido: %d unidade(s) de Bauru c/ovo\nTotal R$%.2f\n", quantidade, valor);
    }else if(codigo == 103){
        valor = quantidade*5;
        printf("Pedido: %d unidade(s) de Hamburger\nTotal R$%.2f\n", quantidade, valor);
    }else if(codigo == 104){
        valor = quantidade*7.50;
        printf("Pedido: %d unidade(s) de Cheeseburger\nTotal R$%.2f\n", quantidade, valor);
    }else if(codigo == 105){
        valor = quantidade*2;
        printf("Pedido: %d unidade(s) de Refrigerante\nTotal R$%.2f\n", quantidade, valor);
    }else{
        printf("Codigo invalido\n");
    }
    
}