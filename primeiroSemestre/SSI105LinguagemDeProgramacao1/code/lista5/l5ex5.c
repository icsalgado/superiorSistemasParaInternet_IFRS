/*Imprimir a letra da musica abaixo, utilizar laço para imprimir. Ler do usuário o número máximo de elefantes

1 elefante se balançava, numa teia de aranha
Mas como a teia não se arrebentou,
Foi chamar outro elefante.

N elefantes se balançavam, numa teia de aranha
Mas como a teia não se arrebentou,
Foram chamar outro elefante.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int i = 0;

    printf("Insira um numero\n");
    scanf("%d", &i);

    for(int j = 1; j <= i; j++){
        if(j == 1){
            printf("%d elefante se balançava, numa teia de aranha\nMas como a teia não se arrebentou,\nFoi chamar outro elefante.\n\n", j);
        }else{
            printf("%d elefantes se balançavam, numa teia de aranha\nMas como a teia não se arrebentou,\nForam chamar outro elefante.\n\n", j);
        }
    }
}