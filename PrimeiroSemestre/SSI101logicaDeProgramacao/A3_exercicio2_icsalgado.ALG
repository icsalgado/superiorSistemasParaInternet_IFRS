Algoritmo "semnome"
//  
//  
// Descri??o   : cacula aprovado ou reprovado
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 21/08/2022
Var
// Se??o de Declara??es das vari?veis 
nota1, nota2, media: real
faltas: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
escreval("Digite a nota 1")
leia(nota1)
escreval("Digite a nota 2")
leia(nota2)
escreval("Digite a quantidade de faltas")
leia(faltas)

media <- (nota1+nota2)/2

se (media >= 7) e (faltas < 8) entao
     escreval("Aprovado")
     escreval("boas ferias")
senao
     escreval("Reprovado")
     escreval("Recuperacao dia 07")
fimse
Fimalgoritmo