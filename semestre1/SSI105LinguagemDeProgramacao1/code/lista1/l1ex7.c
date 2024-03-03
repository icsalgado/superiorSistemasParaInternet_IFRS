/*A Joalheria Silva está fazendo aniversário e resolveu premiar o primeiro cliente do dia devolvendo a ele o valor da compra em dobro. Faça um programa que leia o preço unitário do produto adquirido pelo cliente, a quantidade e calcule o total gasto pelo cliente. Mostre o total e calcule o prêmio. Mostre o valor do prêmio (total da compra multiplicado por 2)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float precoProduto, compra, premio;
    int quantidade;

    printf("Valor do produto\n");
    scanf("%f", &precoProduto);

    printf("quantidade\n");
    scanf("%d", &quantidade);

    compra = precoProduto * quantidade;
    premio = compra * 2;

    printf("Total da compra: R$%.2f\nPremio: R$%.2f\n", compra, premio);

}