/*Em uma central de entregas, os pacotes são separados de acordo com o CEP de destino. Escreva um programa que leia do usuário o primeiro dígito do CEP de destino e informe para qual região ele deve ser enviado, de acordo com a tabela abaixo:
Primeiro Dígito do CEP
Enviar para: 
0, 1, 2, 3
Sudeste (SP, RJ, ES, MG)
4
Região 4 (BA, SE)
5
Região 5 (PE, AL, PB, RN)
6
Região 6 (CE, PI, MA, PA, AP, AM, RR, AC )
7
Região 7 (DF, GO, TO, MT, RO, MS)
8 ou 9 
Sul (PR, SC, RS)
Ex: se o código digitado for 5, o programa deve imprimir em tela: "Enviar para: Região 5 (PE, AL, PB, RN)"*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int codCep;

    printf("Informe o primeiro digito do CEP:\n");
    scanf("%d", &codCep);

    switch(codCep)
    {
        case 0:
            printf("Enviar para: Sudeste (SP, RJ, ES, MG)\n");
            break;
        case 1:
            printf("Enviar para: Sudeste (SP, RJ, ES, MG)\n");
            break;
        case 2:
            printf("Enviar para: Sudeste (SP, RJ, ES, MG)\n");
            break;
        case 3:
            printf("Enviar para: Sudeste (SP, RJ, ES, MG)\n");
            break;
        case 4:
            printf("Enviar para: Região 4 (BA, SE)\n");
            break;
        case 5:
            printf("Enviar para: Região 5 (PE, AL, PB, RN)\n");
            break;
        case 6:
            printf("Enviar para: Região 6 (CE, PI, MA, PA, AP, AM, RR, AC )\n");
            break;
        case 7:
            printf("Enviar para: Região 7 (DF, GO, TO, MT, RO, MS)\n");
            break;
        case 8:
            printf("Enviar para: Sul (PR, SC, RS)\n");
            break;
        case 9:
            printf("Enviar para: Sul (PR, SC, RS)\n");
            break;
        
        default:
            break;
    }
}