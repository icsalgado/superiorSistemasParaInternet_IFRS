#include<stdio.h>

void imprimeMaiorValor(int valores[6])
{
    int maior = 0;
    for(int i=0; i<6; i++)
    {
        maior < valores[i] ? maior = valores[i] : 1+1;
    }
    printf("\nMaior valor eh %d\n", maior);
}

void imprimeQuantidadePares(int valores[6])
{
    int pares = 0;
    for(int i=0; i<6; i++)
    {
        valores[i] % 2 == 0 ? pares++ : 1+1;
    }
    printf("\nA quantidade de valores pares eh %d\n", pares);
}

void imprimeSomaFloat(float valores[6])
{
    float soma = 0;
    for (int i = 0;i < 6;i++)
    {
        soma += valores[i];
    }
    printf("\nO valor da soma eh: %.2f\n", soma);
}

int main()
{
    int valores[6];
    
    for (int i = 0;i < 6;i++)
    {
        printf("informe um numero inteiro: ");
        scanf("%d", &valores[i]);
    }

    //imprimeMaiorValor(valores);
    //imprimeQuantidadePares(valores);

    float novosValores[6];
    for(int i = 0; i < 6; i++)
    {
        novosValores[i] = (float)valores[i];
    }
    
    imprimeSomaFloat(novosValores);
}