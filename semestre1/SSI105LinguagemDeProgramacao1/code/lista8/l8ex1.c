#include<stdio.h>
int main (){
  int x, *px;//declara a variavel x e um ponteiro px de inteiro
  x = 1;//atribui 1 a variavel x
  px = &x;//atribui o endereço de memoria da variavel x ao ponteiro px
  printf ("01. x= %d\n", x);//imprime o valor inteiro %d da variavel x
  printf ("02. px= %u\n", px);//imprime o endereço de memoria que esta armazenado na variavel px sem sinal %u
  printf ("03. *px+1= %d\n", *px + 1);//imprime o conteúdo do endereço de memoria +1
  printf ("04. px= %u\n", px);//igual o 2
  printf ("05. *px= %d\n", *px);//imprime o conteudo do endereço de memoria
  printf ("06. *px+=1= %d\n", *px += 1);//incremento do conteudo do endereço de memoria
  printf ("6a. x= %d\n", x);//mostra que o conteudo da variavel mudou
  printf ("07. px= %u\n", px);//igual ao 4
  printf ("08. (*px)++= %d\n", (*px)++);//igual ao 6
  printf ("8a. x= %d\n", x);//mostra que o conteudo da variavel mudou
  printf ("09. px= %u\n", px);//igual ao 7
  printf ("10. *(px++)= %d\n", *(px++));//incremento de px
  printf ("11. px= %u\n", px);//mostra o novo endereço incrementado
  printf ("12. *px++= %d\n", *px++);//igual 10
  printf ("13. px= %u\n", px);//igual 11
  printf ("14. px= %x\n", px);//igual 13 mas em hexadecimal %x
}