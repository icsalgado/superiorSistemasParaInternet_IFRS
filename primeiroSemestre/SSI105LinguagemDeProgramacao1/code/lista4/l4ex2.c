/*Calculadora: Ler a operação de acordo com o código abaixo, depois Ler dois números e imprimir o resultado.
código
(símbolo)
Operação
+
soma
-
subtração
/
divisão
*
multiplicação
Dica: use '+', '-', '/', '*'
Exemplo:
Digite a operação: +
Digite o primeiro Numero: 2
Digite o segundo Número: 3
Resultado: 5*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    char operacao;
    float num1, num2;

    printf("Informe a operacao:\n");
    scanf("%c", &operacao);
    printf("Informe o primeiro numero:\n");
    scanf("%f", &num1);
    printf("Informe o segundo numero:\n");
    scanf("%f", &num2);

    switch (operacao){
    case '+':
        printf("%.2f %c %.2f = %.2f\n", num1, operacao, num2, num1+num2);
        break;
    case '-':
        printf("%.2f %c %.2f = %.2f\n", num1, operacao, num2, num1-num2);
        break;
    case '*':
        printf("%.2f %c %.2f = %.2f\n", num1, operacao, num2, num1*num2);
        break;
    case '/':
        printf("%.2f %c %.2f = %.2f\n", num1, operacao, num2, num1/num2);
        break;
    
    default:
        break;
    }
}