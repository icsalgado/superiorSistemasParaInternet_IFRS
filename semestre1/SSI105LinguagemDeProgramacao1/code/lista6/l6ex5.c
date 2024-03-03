/*5 - O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 11,00
101              | Bauru simples   | 13,00
102              | Bauru c/ovo     | 15,00
103              | Hamburger       | 11,00
104              | Cheeseburger    | 13,00
105              | Refrigerante    | 3,00

O programa deverá apresentar as seguintes opções:
A - Novo pedido (Zerar Valor total do pedido)
B - Incluir Item e quantidade
C - Fechar pedido e Imprimir total (Apenas valor, somar total ao total do dia)
D - Total do Dia (apenas valor)
E - SAIR do programa
O Programa deverá ter uma função que receba como parâmetros o código do item e a quantidade, esta função deverá retornar o valor daquela quantidade de items.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

float novoPedido(int codigo, int quantidade);

int main()
{
    system("clear");

    int funcao = 1000;//variavel controla a saída do programa
    int operacao;//opções do menu
    char controle;//interação do usuário para sair do programa

    float totalDia = 0;
    float totalPedido = 0;
    float pedido;

    int codigo, quantidade;

    do
    {
        printf("SAIR? s/n\n");
        scanf("%s", &controle);
        if (controle == 's')
        {
            funcao = 0;//variavel zerada entra na condição para sair
        }
        else
        {        
            menuPrincipal();//chama o layout do menu principal
            scanf("%d", &operacao);

            switch (operacao)
            {
            case 1:
                system("clear");

                printf("Pedido Zerado:\n");

                pedido = totalPedido = 0;

                break;
            case 2:
                system("clear");

                menuPedido();//chama o menu do pedido
                scanf("%d", &codigo);

                if (codigo >= 100 && codigo <= 105)//executa somente com código do pedido certo
                {
                    printf("Informe a quantidade do item\n");
                    scanf("%d", &quantidade);
                    pedido = novoPedido(codigo, quantidade);//pedido recebe o retorno da função chamada
                    totalPedido = totalPedido + pedido;
                }else{
                    system("clear");
                    printf("Codigo Invalido!\n");
                }

                break;
            case 3:
                system("clear");

                printf("Pedido Fechado:\n");
                if(totalPedido == 0){
                    printf("Total do pedido: R$ %.2f\n", totalPedido);
                }else{
                    totalDia = totalDia + totalPedido;
                    printf("Total do pedido: R$ %.2f\n", totalPedido);
                }
                pedido = totalPedido = 0;

                break;
            case 4:
                system("clear");

                printf("Total do dia: R$ %.2f\n", totalDia);
                break;

            default:
                break;
            }
        }
    } while (funcao != 0);
}

float novoPedido(int codigo, int quantidade){
    float pedido;
    //código reaproveitado de outro exercicio
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

    return(pedido);
}

void menuPrincipal(){
    system("clear");

    printf("+---------OPERACAO--------+\n");
    printf("| 1 Zerar Pedido          |\n");
    printf("| 2 Novo Item             |\n");
    printf("| 3 Fechar Pedido         |\n");
    printf("| 4 Total do dia          |\n");
    printf("+-------------------------+\n");
}

void menuPedido(){
    system("clear");

    printf("+---------------------NOVO PEDIDO---------------------+\n");
    printf("| Codigo do lanche | Especificacao   | Preço unitario |\n");
    printf("| 100              | Cachorro quente | 11,00          |\n");
    printf("| 101              | Bauru simples   | 13,00          |\n");
    printf("| 102              | Bauru c/ovo     | 15,00          |\n");
    printf("| 103              | Hamburger       | 11,00          |\n");
    printf("| 104              | Cheeseburger    | 13,00          |\n");
    printf("| 105              | Refrigerante    | 3,00           |\n");
    printf("+-----------------------------------------------------+\n");

}