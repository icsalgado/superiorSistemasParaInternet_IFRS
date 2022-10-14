/*O cardápio de uma lancheria é o seguinte:
Código do lanche - Especificação - Preço unitário
100 - Cachorro quente - 11,00
101 - Bauru simples - 13,00 
102 - Bauru c/ovo - 15,00
103 - Hamburger - 11,00
104 - Cheeseburger - 13,00
105 - Refrigerante - 3,00

Escrever um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Os itens serão lidos até que seja incluído um código inválido, encerrando o pedido. Ao final, escreva o valor total do pedido.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int codigo, quantidade;
    float pedido;
    pedido = 0;
    do
    {
        printf("Informe o codigo do pedido\n");
        scanf("%d", &codigo);
        
        if(codigo >= 100 && codigo <= 105){
            printf("Informe a quantidade do item\n");
            scanf("%d", &quantidade);
        }

        switch (codigo){
        case 100:
            pedido = pedido + (11.0 * quantidade);
            printf("%d x Cachorro quente: R$ 11.00, total: %.2f\n", quantidade, 11.0*quantidade);
            break;
        case 101:
            pedido = pedido + (13.0 * quantidade);
            printf("%d x Bauru simpes: R$ 13.00, total: %.2f\n", quantidade, 13.0*quantidade);
            break;
        case 102:
            pedido = pedido + (15.0 * quantidade);
            printf("%d x Bauru com ovo: R$ 15.00, total: %.2f\n", quantidade, 15.0*quantidade);
            break;
        case 103:
            pedido = pedido + (11.0 * quantidade);
            printf("%d x Hamburger: R$ 11.00, total: %.2f\n", quantidade, 11.0*quantidade);
            break;
        case 104:
            pedido = pedido + (13.0 * quantidade);
            printf("%d x Cheeseburger: R$ 13.00, total: %.2f\n", quantidade, 13.0*quantidade);
            break;
        case 105:
            pedido = pedido + (3.0 * quantidade);
            printf("%d x Refrigerante: R$ 3.00, total: %.2f\n", quantidade, 3.0*quantidade);
            break;
        
        default:
            printf("Total do pedido: R$ %.2f\n", pedido);
            break;
        }

    } while (codigo >= 100 && codigo <= 105);
    
}