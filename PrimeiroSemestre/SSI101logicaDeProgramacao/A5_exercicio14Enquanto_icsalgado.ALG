Algoritmo "de50quantosNegativos"
//  
//  
// Descri??o   : Escrever um algoritmo que l? 50 valores para A e conta quantos destes valores s?o negativos,escrevendo esta informa??o.
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 30/08/2022
Var
// Se??o de Declara??es das vari?veis 
A, i, negativos: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
i <- 1
negativos <- 0
enquanto i <= 5 faca
         escreval("Digite um valor")
         leia(A)
         se A < 0 entao
            negativos <- negativos + 1
         fimse
         i <- i + 1
fimenquanto

escreval(negativos, " s?o negativos")


Fimalgoritmo