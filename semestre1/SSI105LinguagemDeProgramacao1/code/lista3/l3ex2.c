/*Uma empresa decide dar um aumento de 30% aos seus funcionários cujo salário é inferior a 500 reais. Escreva um programa que leia o salário atual do funcionário e seu nome. Escreva o novo salário ou uma mensagem caso o funcionário não tenha direito ao aumento.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    float salario;
    char nome[30];

    printf("Informe o nome do funcionario:\n");
    gets(nome);
    printf("Informe o salario do funcionario\n");
    scanf("%f", &salario);

    if(salario < 500.00){
        salario = salario + 0.30*salario;
        printf("O valor do novo salario com aumento e %f\n", salario);
    }else{
        printf("O salario nao teve alteracao\n");
    }

}