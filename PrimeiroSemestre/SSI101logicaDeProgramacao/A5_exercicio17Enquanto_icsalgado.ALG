Algoritmo "inteirosDeMaN"
//  
//  
// Descrição   : Escreverumprogramaquelêumpardevaloresm,n,todosinteirosepositivose,calculaeescreveasomadosninteirosconsecutivosapartirdem,inclusive.
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 30/08/2022
Var
// Seção de Declarações das variáveis 
m, n, soma, controle: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreval("informe o valor de m: ")
leia(m)
escreval("informe o valor de n: ")
leia(n)

soma <- 0
controle <- n
enquanto m <= controle faca
         soma <- soma + m
         m <- m + 1
fimenquanto

escreval("A soma e: ", soma)

Fimalgoritmo