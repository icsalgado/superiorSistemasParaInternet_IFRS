/*Calcule o IMC. De acordo com (b), o IMC=peso em kilos dividido pela altura (em metros) ao quadrado.
(a) http://como-emagrecer.com/calculo-de-imc.html
(b) http://como-emagrecer.com/calculo-imc.html
Leia a altura (em metros) e o peso em kilos de uma pessoa, calcule o IMC e indique a situação de acordo com a tabela em (a). (Abaixo do peso, peso ideal, sobrepeso, obesidade I, II, III)*/

#include<stdlib.h> 
#include<stdio.h> 

 int main(){
    float altura, peso, imc;

    printf("Informe a altura:\n");
    scanf("%f", &altura);
    printf("Informe o peso:\n");
    scanf("%f", &peso);

    imc = peso/(altura*altura);
    
    if(imc < 18.5){
        printf("Abaixo do peso\n");
    }else if(imc >= 18.5 && imc <= 24.9){
        printf("Peso ideal\n");
    }else if(imc >= 25 && imc <= 29.9){
        printf("Sobrepeso\n");
    }else if(imc >= 30 && imc <=34.9){
        printf("Obesidade 1\n");
    }else if(imc >= 35 && imc <=39.9){
        printf("Obesidade 2\n");
    }else if(imc >= 40){
        printf("Obesidade 3\n");
    }
}