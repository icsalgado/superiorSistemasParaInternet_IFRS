#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int operacao;
    int redes;
    int octeto4, salto, mascara;
    char classe;

    do
    {
        system("clear"); // limpa a tela do terminal no Linux

        printf("        CALCULO DE SUBREDES DE CLASSE C\n");

        printf("     Escolha o código da operação desejada:\n");

        printf("+---------------------------------------------+\n");
        printf("| [1] Quero criar uma rede com subredes       |\n");
        printf("| [2] Quero mapear minha rede                 |\n");
        printf("| [0] Para Sair                               |\n");
        printf("+---------------------------------------------+\n");
        scanf("%d", &operacao);

        switch(operacao){
            case 1:
                system("clear");

                printf("Quantas redes vai precisar?\n");
                scanf("%d", &redes);

                classe = 'C';
                salto = 256 / redes;
                mascara = 256 - salto;

                system("clear");
                printf("IP de Classe: %c\n", classe);
                printf("Mascara de sub-rede: 255.255.255.%d\n", mascara);
                printf("Quantidade de sub-redes: %d\n", redes);
                octeto4 = 0;

                for (int i = 1; i <= redes; i++)
                {
                    printf("\n+\n");
                    printf("| Rede: 192.168.1.%d\n", octeto4);
                    printf("| Broadcast: 192.168.1.%d\n", salto * i - 1);
                    printf("| Hosts Possíveis: 192.168.1.%d\n|               até 192.168.1.%d", octeto4 + 1, salto * i - 2);
                    octeto4 = octeto4 + salto;
                }

                printf("\n\nENTER para continuar\n");
                getchar();//para a execução do programa até que aperte uma tecla
                getchar();//parece que o buffer acumula o \n como um enter então precisa de dois desses

                break;
            case 2:
                system("clear");
                printf("Qual o octeto misto da mascara?\n");
                scanf("%d", &mascara);

                classe = 'C';
                salto = 256 - mascara;
                redes = 256 / salto;

                system("clear");
                printf("IP de Classe: %c\n", classe);
                printf("Mascara de sub-rede: 255.255.255.%d\n", mascara);
                printf("Quantidade de sub-redes: %d\n", redes);
                octeto4 = 0;

                for (int i = 1; i <= redes; i++)
                {
                    printf("\nRede: 192.168.1.%d\n", octeto4);
                    printf("Broadcast: 192.168.1.%d\n", salto * i - 1);
                    printf("Hosts Possíveis: 192.168.1.%d\n             até 192.168.1.%d\n", octeto4 + 1, salto * i - 2);
                    octeto4 = octeto4 + salto;
                }
                printf("\nENTER para continuar\n");
                getchar();
                getchar();
                break;
            case 0:
                printf("Saindo\n");
                break;
            default:
                printf("inválido\n");
                break;
        }
    } while (operacao != 0);
}