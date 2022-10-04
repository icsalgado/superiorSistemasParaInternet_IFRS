/*O cardápio de uma lancheria é o seguinte:
Código  Especificação   Preço Unitário
100     Cachorro Quente R$10,00
101     Bauru Simples   R$13,00
102     Bauru c/ ovo    R$16,00
103     Hambuguer       R$14,00
104     Cheeseburguer   R$16,00
105     Refrigerante    R$4,00
Escrever um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele pedido. Considere que a cada execução somente será calculado um item.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int codigo, quantidade;

    printf("informe o codigo do pedido\n");
    scanf("%d", &codigo);
    printf("informe a quantidade\n");
    scanf("%d", &quantidade);

    switch(codigo){
    case 100:
        printf("O valor do do pedido e: %.2f\n", quantidade*10.00);
        break;
    case 101:
        printf("O valor do do pedido e: %.2f\n", quantidade*13.00);
        break;
    case 102:
        printf("O valor do do pedido e: %.2f\n", quantidade*16.00);
        break;
    case 103:
        printf("O valor do do pedido e: %.2f\n", quantidade*14.00);
        break;
    case 104:
        printf("O valor do do pedido e: %.2f\n", quantidade*16.00);
        break;
    case 105:
        printf("O valor do do pedido e: %.2f\n", quantidade*4.00);
        break;
    
    default:
        break;
    }

}