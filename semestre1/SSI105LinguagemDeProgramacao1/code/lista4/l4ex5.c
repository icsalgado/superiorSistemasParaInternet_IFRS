/*Leia o salário atual do funcionário e código da função. De acordo com a tabela abaixo, indique o novo salário.
Código  Cargo          Aumento
1       Escriturário    30%
2       Secretário      25%
3       Caixa           20%
4       Gerente         10%
5       Direto          0
Indique uma mensagem de erro se o código não existir.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int codigoFuncao;
    float salario;

    printf("informe o codigo da funcao do funcionario\n");
    scanf("%d", &codigoFuncao);
    printf("informe o salario do funcionario\n");
    scanf("%f", &salario);

    switch(codigoFuncao){
    case 1:
        printf("Novo salario: R$ %.2f\n", salario+(salario*0.30));
        break;
    case 2:
        printf("Novo salario: R$ %.2f\n", salario+(salario*0.25));
        break;
    case 3:
        printf("Novo salario: R$ %.2f\n", salario+(salario*0.20));
        break;
    case 4:
        printf("Novo salario: R$ %.2f\n", salario+(salario*0.10));
        break;
    case 5:
        printf("Novo salario: R$ %.2f\n", salario+(salario*0));
        break;
    
    default:
        printf("Codigo não existe\n");
        break;
    }

}