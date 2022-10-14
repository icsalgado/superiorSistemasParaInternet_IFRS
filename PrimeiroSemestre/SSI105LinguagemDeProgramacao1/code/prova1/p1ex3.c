/*
Em uma eleição existem 4 candidatos à vereador e 3 candidatos à prefeitura. O programa deve realizar a leitura do voto para vereador e para prefeito.
Os votos são informados através de códigos.
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
Para vereador os códigos são: 
    66666 para candidato A; 
    77777 para candidato B;
    88888 para candidato C; 
    99999 para candidato D
Para prefeito os códigos são: 
    99 para Candidato X; 
    88 para Candidato Y; 
    77 para Candidato Z;
111 = voto em branco (para ambas as votações);
-Outro valor: Voto Nulo;
Elabore um algoritmo que realize a leitura de ambos os votos (vereador e depois para prefeito) leia os códigos do candidato que receberá o voto. O programa deverá ler 7 votos (7 para vereador e 7 para prefeito) alternadamente.
Calcule e escreva:
-total de votos para cada candidato e seu respectivo percentual de votos sobre os votos válidos*; (em cada uma das duas eleições)
-total de votos nulos; (em cada uma das duas eleições)
-total de votos em branco; (em cada uma das duas eleições)
Votos válidos são todos os votos - nulos.
Lembre-se: os votos em branco e nulos podem ser diferentes nas duas
eleições.
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int voto, a, b, c, d, x, y, z, brancosV, brancosP, nulosV, nulosP = 0;//melhor inicializar todas em zero

    for(int i=1; i<=7; i++){
        printf("\nVoto para vereador: ");
        scanf("%d", &voto);

        switch(voto){//para atribuir voto ao vereador
            case 66666:
            a++;
            break;
            case 77777:
                b++;
                break;
            case 88888:
                c++;
                break;
            case 99999:
                d++;
                break;
            case 111:
                brancosV++;
                break;
            
            default:
                nulosV++;
                break;
        }

        printf("\nVoto para prefeito: ");
        scanf("%d", &voto);

        switch(voto){//para atribuir votos aos prefeitos
            case 99:
                x++;
                break;
            case 88:
                y++;
                break;
            case 77:
                z++;
                break;
            case 111:
                brancosP++;
                break;
            
            default:
                nulosP++;
                break;
        }
    }

    printf("Vereador A: %d votos | %d %% dos votos\n", a, (a*100)/(7-nulosV));//regra de 3 usando os votos válidos
    printf("Vereador B: %d votos | %d %% dos votos\n", b, (b*100)/(7-nulosV));
    printf("Vereador C: %d votos | %d %% dos votos\n", c, (c*100)/(7-nulosV));
    printf("Vereador D: %d votos | %d %% dos votos\n", d, (d*100)/(7-nulosV));
    printf("Votos nulos %d\n", nulosV);
    printf("Votos em branco %d\n\n", brancosV);
    printf("Prefeito X: %d votos | %d %% dos votos\n", x, (x*100)/(7-nulosP));
    printf("Prefeito Y: %d votos | %d %% dos votos\n", y, (y*100)/(7-nulosP));
    printf("Prefeito Z: %d votos | %d %% dos votos\n", z, (z*100)/(7-nulosP));
    printf("Votos nulos %d\n", nulosP);
    printf("Votos em branco %d\n\n", brancosP);

    printf("\n\nProgramador: Iuri de Carvalho Salgado\n\n");
}