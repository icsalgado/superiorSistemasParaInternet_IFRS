Algoritmo "ChicoEZe"
//  
//  
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 06/09/2022
Var
// Se??o de Declara??es das vari?veis 
chico, ze: inteiro
taxaChico, taxaZe: inteiro
anos: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
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