Algoritmo "ex21"
// Disciplina  : SSI101
// Professor   :
// Descri??o   : encontra maior e menor em 50 valores informados
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 14/10/2022
Var
// Se??o de Declara??es das vari?veis 
valor, contador, maior, menor : inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
contador <- 1


   para contador de 1 ate 50 faca
          escreval("Informe um valor interiro")
          leia(valor)
          se contador = 1 entao//armazena o primeiro valor para n?o usar o zero
               menor <- valor
               maior <- valor
          fimse
          se valor > maior entao//testa o maior
             maior <- valor
          fimse
          se valor < menor entao//testa o menor
               menor <- valor
          fimse
   fimpara

   escreval("Maior: ", maior)
   escreval("Menor: ", menor)

Fimalgoritmo