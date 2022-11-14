/*4 - Faça um programa que carregue automaticamente 2 vetores. O primeiro com 10 elementos numéricos e o segundo com 10 caracteres. Imprima o conteúdo destes vetores intercalados. Ex:
1a2b3c4d5e...
Dica: char c[10]; for(i=0;i<10<i++) c[i]=65+i;*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int vetorNum[10];
    char vetorChar[10];

    for(int i = 0; i <= 9; i++){
        vetorNum[i] = i+1;
        vetorChar[i] = 'a'+i;
    }

    for(int i = 0; i <= 9; i++){
        printf("%d%c", vetorNum[i], vetorChar[i]);
    }
}