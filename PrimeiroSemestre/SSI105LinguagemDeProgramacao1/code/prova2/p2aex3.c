#include<stdio.h>

int main(){
    int voto;
    int vereador[5];
    int prefeito[3];
    int nulo[2];
    int branco[2];
    
    do
    {
        system("clear");
        printf("\nInforme o voto para vereador: \n");
        scanf("%d", &voto);
        switch (voto)
        {
        case 91111:
            vereador[0]++;
            break;
        case 91112:
            vereador[1]++;
            break;
        case 91113:
            vereador[2]++;
            break;
        case 91114:
            vereador[3]++;
            break;
        case 91115:
            vereador[4]++;
            break;
        case 77777:
            nulo[0]++;
            break;
        
        default:
            if (voto == 12345)
            {
                printf("\nVotação encerrada\n");
                for(int i = 0; i < 5; i++)
                {
                    printf("Vereador 9111%d: %d votos\n", i+1, vereador[i]);
                }
                printf("Votos nulos para vereador: %d\n", nulo[0]);
                printf("Votos em branco para vereador: %d\n", branco[0]);
                for(int i = 0; i < 3; i++)
                {
                    printf("Prefeito 9%d: %d votos\n", i+1, prefeito[i]);
                }
                printf("Votos nulos para prefeito: %d\n", nulo[1]);
                printf("Votos em branco para prefeito: %d\n", branco[1]);
            }else
            {
                branco[0]++;
            }
            break;
        }
        if(voto != 12345)
        {
            printf("\nInforme o voto para prefeito: \n");
            scanf("%d", &voto);
            switch (voto)
            {
            case 91:
                prefeito[0]++;
                break;
            case 92:
                prefeito[1]++;
                break;
            case 93:
                prefeito[2]++;
                break;
            case 77:
                nulo[1]++;
                break;
            
            default:
                branco[1]++;
                break;
            }
        }
    }while(voto != 12345);
}