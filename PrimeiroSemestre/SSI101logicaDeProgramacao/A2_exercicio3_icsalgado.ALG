Algoritmo "semnome"
//  
//  
// Descri??o   : calcula pre?o do buffet a cada 100g
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 21/08/2022
Var
// Se??o de Declara??es das vari?veis 
valor100g: real
peso: real
valorFinal: real

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
valor100g <- 2.90

escreval("Qual o peso em gramas da refeicao?")
leia (peso)

valorFinal <- (peso/100)*valor100g

escreval("O valor da refeicao e: R$", valorFinal:2:2)

Fimalgoritmo