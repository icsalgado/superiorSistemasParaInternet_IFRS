/*
a) Peça ao usuário números inteiros positivos, deve parar de pedir números quando o usuário digitar ‘0’ (zero) Nesta tarefa é obrigatório o uso correto de uma estrutura de repetição (for, while ou do.. while);
b) Para cada número inteiro positivo digitado pelo usuário, o programa deve mostrar os divisores dos valores ímpares e a tabuada dos valores pares;
c) Quando o laço de repetição terminar (isso ocorrerá quando o usuário digitar ‘0’), o programa deverá mostrar ao usuário a Média de todos dos valores ímpares e o Maior valor par digitado pelo usuário: Desconsiderar o valor ‘0’ (zero) para todos os itens.
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int numero, impar, maior;
    float media;

    impar = media = maior = 0;//zerar as variaveis para evitar lixo de memória

    do{
        printf("Informe um numero\n");
        scanf("%d", &numero);
        if(numero%2 == 0 && numero != 0){//elimina o zero quando testa se é positivo
            for(int i = 1; i <= 10; i++){
                printf("%d x %d = %d\n", numero, i, numero*i);
            }
            if(numero > maior){
                maior = numero;//atualiza o maior
            }
        }else{
            for(int j = 1; j <= numero; j++){//vai testando os numeros até o valor informado
                if(numero%j == 0){//só entra se for um divisor
                    printf("Divisor: %d\n", j);
                }
            }
            media = media+numero;//acumilador
            impar++;//contador
        }
    }while(numero != 0);

    printf("A media dos valores impares e: %.2f\nE o maior par é: %d\n", media/(impar-1), maior);//impar-1 por que ao menos uma vez o zero vai ser digitado, assim já elemina ele


    

}
