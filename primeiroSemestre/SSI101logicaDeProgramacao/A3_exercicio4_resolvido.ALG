Algoritmo "Maior_numero"
//Escreva um algoritmo que leia três números inteiros
//diferentes e mostre o maior deles.
Var
   num1, num2, num3:inteiro

Inicio
   escreval("Insira o primeiro número inteiro:")
   leia(num1)
   escreval("Insira o segundo número inteiro: ")
   leia(num2)
   escreval("Insira o terceiro número inteiro: ")
   leia(num3)
   SE (num1 > num2) E (num1 > num3) ENTAO
      escreval(num1, " é maior que ", num2, " e ", num3)
   SENAO
      SE (num2 > num1) E (num2 > num3) ENTAO
         escreval(num2, " é maior que ", num1, " e ", num3)
      SENAO
         escreval(num3, " é maior que ", num1, " e ", num2)
      FIMSE
   FIMSE

Fimalgoritmo