/*Em uma eleição presidencial existem três candidatos. Os votos são informados  através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:

Código - Nome/Rótulo
1 - Zezinho
2 - Huguinho
3 - Luizinho
4 - Voto em Branco
5 - Voto Nulo

Escreva um programa com as seguintes características:

- ler uma sequencia de votos até que o código de candidato seja igual a 0 (zero)
- o programa finaliza quando o candidato digitado é igual a 0 (zero)
- apresente o resultado de apuração dos votos:
   -- total de votos para cada candidato;
   -- total de votos nulos;
   -- total de votos em branco;
   -- candidato vencedor;*/


#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int voto, zezinho, huguinho, luizinho, branco, nulo;

    zezinho = huguinho = luizinho = branco = nulo = 0;

    do{
        printf("Informe o codigo do seu candidato:\n");
        scanf("%d", &voto);
        
        switch (voto)
        {
        case 1:
            zezinho++;
            break;
        case 2:
            huguinho++;
            break;
        case 3:
            luizinho++;
            break;
        case 4:
            branco++;
            break;
        case 5:
            nulo++;
            break;
        
        default:
            printf("Zezinho: %d\nHuguinho: %d\nLuizinho: %d\nVotos em branco: %d\nVotos nulos: %d\n", zezinho, huguinho, luizinho, branco, nulo);
            break;
        }

    }while(voto != 0);
}