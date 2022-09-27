/*Leia o Nome do Funcionário, salário atual e código da função. De acordo com a tabela abaixo, indique o novo salário.
Código | Cargo        | Aumento
1      | Escriturário | 30%
2      | Secretário   | 25%
3      | Caixa        | 20%
4      | Gerente      | 10%
5      | Diretor      | 1%
Indique uma mensagem de erro se o código não existir. não usar o comando switch neste exercício.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int codigo;
    float salario;
    char nome[30];

    printf("Informe o nome do funcionario\n");
    gets(nome);
    printf("Informe o salario do funcionário\n");
    scanf("%f", &salario);
    printf("Informe o codigo da funcao do funcionario\n");
    scanf("%d", &codigo);

    if(codigo == 1){
        salario = salario+salario*0.30;
        printf("Novo salario R$ %.2f\n", salario);
    }else if(codigo == 2){
        salario = salario+salario*0.25;
        printf("Novo salario R$ %.2f\n", salario);
    }else if(codigo == 3){
        salario = salario+salario*0.20;
        printf("Novo salario R$ %.2f\n", salario);
    }else if(codigo == 4){
        salario = salario+salario*0.10;
        printf("Novo salario R$ %.2f\n", salario);
    }else if(codigo == 5){
        salario = salario+salario*0.01;
        printf("Novo salario R$ %.2f\n", salario);
    }else{
        printf("Codigo invalido\n");
    }
    
}