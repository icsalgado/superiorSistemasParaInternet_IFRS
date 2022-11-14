/*6- CAIXA ELETRÔNICO. Escrever um programa que lê um valor inteiro em reais e calcula qual o menor número possível de notas de 100, 50, 20, 10, 5, 2 e 1 em que o valor lido pode ser entregue ao cliente. Escrever a relação de notas necessárias. Utilize um vetor para armazenar o valor de cada tipo de nota. Notas = {100, 50, 20, 10, 5, 2, 1}

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int valor;
    int notas[2][7];

    printf("Informe o valor: ");
    scanf("%d", &valor);

    notas[0][0] = 100;
    notas[0][1] = 50;
    notas[0][2] = 25;
    notas[0][3] = 10;
    notas[0][4] = 5;
    notas[0][5] = 2;
    notas[0][6] = 1;

    while (valor > 0){
        if (valor >= 100){
            
            notas[1][0]++;
            valor = valor - 100;
        }
        else{
            if (valor >= 50){
                
                notas[1][1]++;
                valor = valor - 50;
            }else{
                if(valor >= 25){
                    
                    notas[1][2]++;
                    valor = valor - 25;
                }else{
                    if(valor >= 10){
                        
                        notas[1][3]++;
                        valor = valor - 10;
                    }else{
                        if(valor >= 5){
                            
                            notas[1][4]++;
                            valor = valor - 5;
                        }else{
                            if(valor >= 2){
                                
                                notas[1][5]++;
                                valor = valor - 2;
                            }else{
                                if(valor >= 1){
                                    
                                    notas[1][6]++;
                                    valor = valor - 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(int nota = 0; nota <= 6; nota++){
        for(int qnt = 0; qnt < 2; qnt++){
            printf("%d - ", notas[qnt][nota]);
        }
        printf("\n");
    }
}