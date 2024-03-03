/*1 - Escreva um programa que leia 10 números inteiros. Escrevas os 10 números na ordem correta e depois os 10 números na ordem inversa (da posição 10 para a primeira). */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int desordenado[10];
    int vetorOriginal[10];
    int maior;
    int z = 9;

    printf("Digite um vetor de 10 posicoes\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &desordenado[i]);
    }

    for (int x = 0; x <= 9; x++)
    {
        vetorOriginal[x] = desordenado[x];
    }

    for (int i = 0; i < 9; i++)
    {
        // Esse for vai percorrer todo o vetor jogando o maior para o final
        for (int j = 0; j < 9; j++)
        {
            /*
            Esse for joga o maior para o final do vetor
            a quantidade de vezes que ele é executa é tamanhoDoVetor-1 por causa do numero de saltos
            */
            if (desordenado[j] > desordenado[j + 1])
            {
                maior = desordenado[j];
                desordenado[j] = desordenado[j + 1];
                desordenado[j + 1] = maior;
            }
        }
    }

    
    for (int x = 0; x <= 9; x++)
    {
        printf("Vetor original desordenado: %d | Vetor ordenado: %d | Vetor invertido %d\n", vetorOriginal[x], desordenado[x], desordenado[z]);
        z--;//para inverter o vetor ordenado
    }
}