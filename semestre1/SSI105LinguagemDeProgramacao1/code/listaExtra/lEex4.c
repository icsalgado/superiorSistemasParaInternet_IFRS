/*DESAFIO - Números Primos:
https://g1.globo.com/educacao/noticia/maior-numero-primo-do-mundo-e-descoberto-por-engenheiro-voluntario-nos-eua.ghtml
Um número primo é um número divisível apenas por 1 e por ele mesmo. Ex: 1,2,3,5,7,11,...
Escreva um algoritmo que escreva uma seqüência de 20 números primos.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


/*Usando regras de divisibilidade
Começar dividindo pelo menor primo
Sequencia de divisões por numeros primos crescentes até o quociente ficar menor que o divisor
Se o resto for zero em algum momento, o não é primo
Se o resto for diferente de zero e o quociente menor que o divisor, o número é primo
*/
int main(){
    int numero = 2;
    int contador = 1;

    while(contador < 20){
        if(numero%2 != 0){
            if(numero/2 < 2){
                printf("%d ", numero);
                contador++;//se mostrou o numero, incrementa até chegar a 20 
            }else{
                if(numero%3 != 0){
                    if(numero/3 < 3){
                        printf("%d ", numero);
                        contador++;
                    }else{
                        if(numero%5 != 0){
                            if(numero/5 < 5){
                                printf("%d ", numero);
                                contador++;
                            }else{
                                if(numero%7 != 0){
                                    if(numero/7 < 7){
                                        printf("%d ", numero);
                                        contador++;
                                    }else{
                                        if(numero%11 != 0){
                                            if(numero/11 < 11){
                                                printf("%d ", numero);
                                                contador++;
                                            }else{
                                                if(numero%13 != 0){
                                                    if(numero/13 < 13){
                                                        printf("%d ", numero);
                                                        contador++;
                                                    }else{
                                                        if(numero%17 != 0){
                                                            if(numero/17 < 17){
                                                                printf("%d ", numero);
                                                                contador++;
                                                            }else{
                                                                if(numero%19 != 0){
                                                                    if(numero/19 < 19){
                                                                        printf("%d ", numero);
                                                                        contador++;
                                                                    }else{
                                                                        if(numero%23 != 0){
                                                                            if(numero/23 < 23){
                                                                                printf("%d ", numero);
                                                                                contador++;
                                                                            }else{
                                                                                if(numero%29 != 0){
                                                                                    if(numero/29 < 29){
                                                                                        printf("%d ", numero);
                                                                                        contador++;
                                                                                    }else{
                                                                                        //não aguento mais
                                                                                    }
                                                                                }else{
                                                                                    //printf("%d nao e primo\n", numero);
                                                                                }
                                                                            }
                                                                        }else{
                                                                            //printf("%d nao e primo\n", numero);
                                                                        }
                                                                    }
                                                                }else{
                                                                    //printf("%d nao e primo\n", numero);
                                                                }
                                                            }
                                                        }else{
                                                            //printf("%d nao e primo\n", numero);
                                                        }
                                                    }
                                                }else{
                                                    //printf("%d nao e primo\n", numero);
                                                }
                                            }
                                        }else{
                                            //printf("%d nao e primo\n", numero);
                                        }
                                    }
                                }else{
                                    //printf("%d nao e primo\n", numero);
                                }
                            }
                        }else{
                            //printf("%d nao e primo\n", numero);
                        }
                    }
                }else{
                    //printf("%d nao e primo\n", numero);
                }
            }
        }else{
            if(numero == 2){
                printf("%d ", numero);
            }else{
                //printf("%d nao e primo\n", numero);
            }
        }
        numero++;//depois de todo o teste do numero, vai incrementando ele até o contador chegar a 20
    }
}