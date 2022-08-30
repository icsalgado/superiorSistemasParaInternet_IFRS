Algoritmo "de50quantosNegativos"
//  
//  
// Descrição   : Escrever um algoritmo que lê 50 valores para A e conta quantos destes valores são negativos,escrevendo esta informação.
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 30/08/2022
Var
// Seção de Declarações das variáveis 
A, i, negativos: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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

escreval(negativos, " são negativos")


Fimalgoritmo