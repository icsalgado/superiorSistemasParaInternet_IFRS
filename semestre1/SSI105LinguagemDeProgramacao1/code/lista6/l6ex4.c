/*4 - Calculadora2: Escreva um programa onde o usuário poderá escolher uma das opções:
a - Soma (ler operador 1 e operador 2)
b - Subtração (ler operador 1 e operador 2)
c - Divisão (ler base e divisor)
d - Multiplicação (ler base e multiplicador)
e - Fatorial
f - Potencia (ler base e potencia)
g - SAIR*/

/*https://askubuntu.com/questions/332884/how-to-compile-a-c-program-that-uses-math-h
https://www.includehelp.com/c-programming-questions/compiling-program-with-math-library-linux.aspx

Esses dois links ajudaram a compilar o programa com a biblioteca math.h no linux
basicamente tem que compilar com a flag -lm no gcc

gcc l6ex4.c -o l6ex4 -lm
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

void somar(void){
    system("clear");
    float a, b;
    printf("Informe o operador 1\n");
    scanf("%f", &a);
    printf("Informe o operador 2\n");
    scanf("%f", &b);

    printf("A soma e: %.2f\n", a + b);
    main();
}
void multiplicar(void){
    system("clear");
    float a, b;
    printf("Informe o operador 1\n");
    scanf("%f", &a);
    printf("Informe o operador 2\n");
    scanf("%f", &b);

    printf("O produto e: %.2f\n", a * b);
    main();
}
void subtrair(void){
    system("clear");
    float a, b;
    printf("Informe o operador 1\n");
    scanf("%f", &a);
    printf("Informe o operador 2\n");
    scanf("%f", &b);

    printf("A subtracao e: %.2f\n", a - b);
    main();
}
void dividir(void){
    system("clear");
    float a, b;
    printf("Informe o operador 1\n");
    scanf("%f", &a);
    printf("Informe o operador 2\n");
    scanf("%f", &b);

    printf("A divisao e: %.2f\n", a / b);
    main();
}
void potencia(void){
    system("clear");
    double a, b;
    printf("Informe o operador 1\n");
    scanf("%lf", &a);
    printf("Informe o operador 2\n");
    scanf("%lf", &b);

    printf("A potenciacao e: %.2lf\n", pow(a, b));
    main();
}
void fatorial(void){
    system("clear");
    float a;
    float fatorial;
    printf("Informe o operador 1\n");
    scanf("%f", &a);
    fatorial = 1;
    for(int i = a; i > 0; i--){
        fatorial = fatorial * i;
    }
    printf("Fatorial: %.2f\n\n", fatorial);
    main();
}

int main(){
    char op;

    do{
        printf("Informe a operacao desejada\na para somar\nb para subtrair\nc para dividir\nd para multiplicar\ne para fatorial\nf para potenciacao\ng para sair\n");
        scanf("%s", &op);

        switch (op){
        case 'a':
            somar();
            break;
        case 'b':
            subtrair();
            break;
        case 'c':
            dividir();
            break;
        case 'd':
            multiplicar();
            break;
        case 'e':
            fatorial();
            break;
        case 'f':
            potencia();
            break;
        
        default:
            break;
        }

    }while(op ==! 'g');
}