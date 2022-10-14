/*Considerando que o aumento dos funcionários é de 75% do INPC e mais um percentual de produtividade discutido com a empresa. Construir um programa que lê o número do funcionário, seu salário atual, o valor do INPC e o índice de produtividade e escreve o número do funcionário, seu aumento e o valor de seu novo salário.
Aumento=Salario*0,75*INPC/100  +Salario*IndiceProdutividade/100
Salario Novo = Salario + Aumento */

#include <stdlib.h>
#include <stdio.h>

int main(){
    int idFuncionario;
    float percentProdutividade, salarioAtual, aumento, inpc, novoSalario;

    printf("Informe o numero do funcionario\n");
    scanf("%d", &idFuncionario);

    printf("Informe o salario do funcionario\n");
    scanf("%f", &salarioAtual);

    printf("Informe o indice INPC\n");
    scanf("%f", &inpc);

    printf("Informe o indice de produtividade\n");
    scanf("%f", &percentProdutividade);

    aumento = ((salarioAtual*0,75*inpc)/100)+((salarioAtual*percentProdutividade)/100);
    novoSalario = salarioAtual + aumento;

    printf("Funcionario nr %d teve aumento de %f e seu salario novo é R$%f", idFuncionario, aumento, novoSalario);
    
}