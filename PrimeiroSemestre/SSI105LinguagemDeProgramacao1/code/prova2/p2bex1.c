#include<stdio.h>

void imprimeMatriz(int matriz[4][4])
{
    for(int linha=0;linha<4;linha++)
    {
        for(int coluna=0;coluna<4;coluna++)
        {
            printf(" %.3d ",matriz[linha][coluna]);
        }
        printf("\n");
    }
}

void imprimeMediaDiagSecundaria(int matriz[4][4])
{
    float media = 0;
    for(int linha=0; linha < 4; linha++)
    {
        media += matriz[linha][3-linha];
    }
    media /= 4;
    printf("\nMedia da diagonal secundaria eh: %.2f\n", media);
}

void imprimeSomaDigonalPrincipal(int matriz[4][4])
{
    int soma = 0;
    for(int linha = 0; linha < 4; linha++)
    {
        soma += matriz[linha][linha];
    }
    printf("\nA soma diagonal principal eh: %d\n", soma);
}

void imprimeMediaDaMatriz(int matriz[4][4])
{
    float media = 0;
    for(int linha = 0; linha < 4; linha++)
    {
        for(int coluna = 0; coluna < 4; coluna++)
        {
            media += matriz[linha][coluna];
        }
    }
    media /= 16;
    printf("\nA media dos elementos da matriz eh: %.2f\n", media);
}

void imprimeSomaDivisiveisPorCinco(int matriz[4][4])
{
    int soma = 0;
    for(int linha = 0; linha < 4; linha++)
    {
        for(int coluna = 0; coluna < 4; coluna++)
        {
            matriz[linha][coluna] % 5 == 0 ? soma += matriz[linha][coluna] : 1+1;
        }
    }
    printf("\nA soma dos numeros divisiveis por 5 eh: %d\n", soma);
}

int main(){
    int matriz[4][4];
    int multiplo;
    for(int linha=0;linha<4;linha++)
    {
        for(int coluna=0;coluna<4;coluna++)
        {
            if(linha == 0 && coluna == 0)
            {
                multiplo = 4;
            }else
            {
                multiplo = multiplo+4;
            }
            matriz[linha][coluna] = multiplo;
        }
    }
    
    imprimeMatriz(matriz);
    imprimeMediaDiagSecundaria(matriz);
    imprimeSomaDigonalPrincipal(matriz);
    imprimeMediaDaMatriz(matriz);
    imprimeSomaDivisiveisPorCinco(matriz);
}