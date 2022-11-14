/*a - Crie um programa que leia 4 variáveis int, informe o endereço e o conteúdo de cada uma delas*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int var1, var2, var3, var4;

    printf("var 1 = ");
    scanf("%d", &var1);
    printf("var 2 = ");
    scanf("%d", &var2);
    printf("var 3 = ");
    scanf("%d", &var3);
    printf("var 4 = ");
    scanf("%d", &var4);

    printf("\nvar1:\nEndereco = %u\nValor = %d\n", &var1, var1);
    printf("\nvar2:\nEndereco = %u\nValor = %d\n", &var2, var2);
    printf("\nvar3:\nEndereco = %u\nValor = %d\n", &var3, var3);
    printf("\nvar4:\nEndereco = %u\nValor = %d\n", &var4, var4);
}