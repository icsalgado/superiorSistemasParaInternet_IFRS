Algoritmo "ChicoEZe"
//  
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 06/09/2022
Var
// Seção de Declarações das variáveis 
chico, ze: inteiro
taxaChico, taxaZe: inteiro
anos: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
chico <- 150
ze <- 110
taxaChico <- 2
taxaZe <- 3
anos <- 0

repita
      chico <- chico+taxaChico
      ze <- ze+taxaZe
      anos <- anos+1
ate ze > chico

escreval("Ze sera maior que chico em ", anos, " anos")

Fimalgoritmo