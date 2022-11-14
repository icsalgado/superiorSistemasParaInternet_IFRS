

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    float estoque[5][4];
    int arm[4] = {0, 0, 0, 0};
    int armMaior, armMenor;
    int maior, menor;
    float custoProduto[4]={0, 0, 0, 0};
    float custoArmazem[4]={0, 0, 0, 0};
    float custoArmazemProd[4][4];
    maior = 0;
    menor = 1000000;
    
    // entradas
    for (int linha = 0; linha < 5; linha++)
    {
        system("clear");
        for (int produto = 0; produto < 4; produto++)
        {
            if (linha == 4)
            {
                printf("Informe o valor por unidade do produto %d: ", produto+1);
                scanf("%f", &estoque[linha][produto]);
                custoProduto[produto] = custoProduto[produto] * estoque[linha][produto];//quando na linha do valor o produto na posicao n é multiplicado pelo valor unitário
            }
            else
            {
                printf("Informe o estoque do produto %d no armazem %d: ", produto+1, linha+1);
                scanf("%f", &estoque[linha][produto]);
                arm[linha] = arm[linha] + estoque[linha][produto]; // armazem n vai reber o valor que tinha mais a quantidade de produtos x
                if (produto == 1)
                { // produto 2 no indice 1
                    if (estoque[linha][produto] > maior)
                    {                                    // testa se a ultima entrada é maior que a maior já registrada
                        maior = estoque[linha][produto]; // sendo maior, substitui o registro
                        armMaior = linha+1;                // atualiza o armazem com a maior quantidade do produto 2
                    }
                    custoProduto[1] = custoProduto[1]+estoque[linha][produto];//quando passa pelo produto 2 armazena a quantidade na variavel
                }
                if (produto == 3)
                { // produto 4 no indice 3
                    if (estoque[linha][produto] < menor)
                    {                                    // testa se a ultima entrada é menor que a menor já registrada
                        menor = estoque[linha][produto]; // sendo menor, substitui o registro
                        armMenor = linha+1;                // atualiza o armazem com a menor quantidade do produto 4
                    }
                    custoProduto[3] = custoProduto[3]+estoque[linha][produto];//quando passa pelo produto 4 armazena a quantidade na variavel
                }

                if(produto == 0){
                    custoProduto[0] = custoProduto[0]+estoque[linha][produto];//quando passa pelo produto 1 armazena a quantidade na variavel
                }
                if(produto == 2){
                    custoProduto[2] = custoProduto[2]+estoque[linha][produto];//quando passa pelo produto 3 armazena a quantidade na variavel
                }

                
            }
        }
    }
    system("clear");
    // matriz do estoque
    for (int linha = 0; linha < 5; linha++)
    {
        for (int produto = 0; produto < 4; produto++)
        {
            if (linha == 4)
            {
                printf(" R$%.2f ", estoque[linha][produto]);
            }
            else
            {
                printf("    %.0f    ", estoque[linha][produto]);
            }
        }
        printf("\n");
    }
    //quantidade de itens em cada armazem
    for(int i = 0; i < 4; i++){
        printf("\nArmazem %d = %d itens", i+1, arm[i]);
    }
    //maior estoque do produto 2
    printf("\nArmazem %d possui maior estoque do produto 2 com %d itens\n", armMaior, maior);
    //menor estoque do produto 4
    printf("Armazem %d possui menor estoque do produto 4 com %d itens\n\n", armMenor, menor);
    //custo por produto
    for(int i = 0; i < 4; i++){
        printf("Produto %d Custo total: R$%.2f\n", i+1, custoProduto[i]);
    }
    //Custo por armazem
    for (int linha = 0; linha < 4; linha++)
    {
        for (int produto = 0; produto < 4; produto++)
        {
            custoArmazemProd[linha][produto] = estoque[linha][produto]*estoque[4][produto];//matriz auxiliar para armazenar o valor total de cada produto em cada armazem
            custoArmazem[linha] = custoArmazem[linha]+custoArmazemProd[linha][produto];//coloca no valor do verto que representa os armazens a soma dos produtos
        }
    }
    printf("\n");
    for(int i = 0; i < 4; i++){
        printf("Custo do armazem %d = R$%.2f\n\n", i+1, custoArmazem[i]);
    }
    /* for (int linha = 0; linha < 4; linha++)//para ver a matriz auxiliar
    {
        for (int produto = 0; produto < 4; produto++)
        {
            printf("%.2f ", custoArmazemProd[linha][produto]);
        }
        printf("\n");
    } */
}