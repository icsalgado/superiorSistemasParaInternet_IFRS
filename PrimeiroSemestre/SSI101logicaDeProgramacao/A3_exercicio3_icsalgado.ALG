Algoritmo "semnome"
//  
//  
// Descri??o   : Calcula peso ideal
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 21/08/2022
Var
// Se??o de Declara??es das vari?veis 
altura: real
sexo: caractere

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
escreval("Digite sua altura")
leia(altura)
escreval("Seu sexo: M par masculino e F para feminino")
leia(sexo)

se sexo = "M" entao
   escreval("Seu peso ideal e: ", altura*72.7-58)
senao
     escreval("Seu peso ideal e: ", altura*62.1-44.7)
fimse

Fimalgoritmo