#include <stdio.h>

void imprimeMatriz(int matriz[7][7])
{
    for(int linha=0;linha<7;linha++)
    {
        for(int coluna=0;coluna<7;coluna++)
        {
            printf(" %.3d ",matriz[linha][coluna]);
        }
        printf("\n");
    }
}

void imprimeMaior(int matriz[7][7])
{
    int maior = 0;
    for(int linha=0;linha<7;linha++)
    {
        for(int coluna=0;coluna<7;coluna++)
        {
            maior < matriz[linha][coluna] ? maior = matriz[linha][coluna] : 1 + 1;
        }
    }
    printf("\nMaior elemento da matriz: %d\n", maior);
}

void imprimeParDiagPrincipal(int matriz[7][7])
{
    int paresDiagPrincipal = 0;
    for(int linha = 0; linha < 7; linha++)
    {
        matriz[linha][linha] % 2 == 0 ? paresDiagPrincipal++ : 1+1;
    }
    printf("\nQuantidade de elementos pares da diagonal principal: %d\n", paresDiagPrincipal);
    
}

void imprimePrdutos(int matriz[7][7])
{
    long long int produtoLinha = 1LL;
    long long int produtoColuna = 1LL;
    for(int linha = 0; linha < 7;linha++ )
    {
        for(int coluna = 0;coluna < 7;coluna++)
        {
            produtoLinha *= matriz[linha][coluna];
            produtoColuna *= matriz[coluna][linha];
        }
        printf("\nProduto da linha %d: %lld", linha+1, produtoLinha);
        produtoLinha = 1LL;
        printf("\nProduto da coluna %d: %lld", linha+1, produtoColuna);
        produtoColuna = 1LL;
    }
}

int retornaImparesPorColuna(int matriz[7][7], int coluna)
{
    int quantidadeImparesColuna=0;
    for(int linha = 0; linha < 7; linha++)
    {
        if(matriz[linha][coluna] % 2 != 0)
        {
            quantidadeImparesColuna++;
        }
    }
    return quantidadeImparesColuna;
}

void imprimeTotalImparesMatriz(int matriz[7][7])
{
    int totalImparesMatriz = 0;
    for(int coluna = 0; coluna < 7; coluna++)
    {
        totalImparesMatriz += retornaImparesPorColuna(matriz, coluna);
    }
    printf("\n\nTotal de numros impares da matriz: %d", totalImparesMatriz);
}

void imprimeImparesPorColuna(int matriz[7][7], int coluna)
{
    coluna = retornaImparesPorColuna(matriz, 3);
    printf("\nQuantidade de numeros impares na coluna %d: %d", coluna+1, coluna);
}

int main()
{
    int matriz[7][7];
    int multiplo;
    for(int linha=0;linha<7;linha++)
    {
        for(int coluna=0;coluna<7;coluna++)
        {
            if(linha == 0 && coluna == 0)
            {
                multiplo = 7;
            }else
            {
                multiplo = multiplo+7;
            }
            matriz[linha][coluna] = multiplo;
        }
    }
    
    imprimeMatriz(matriz);
    //imprimeMaior(matriz);
    //imprimeParDiagPrincipal(matriz);
    //imprimePrdutos(matriz);
    //imprimeImparesPorColuna(matriz, 3);
    //imprimeTotalImparesMatriz(matriz);
    
}
