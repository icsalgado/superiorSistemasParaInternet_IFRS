Algoritmo "nota40alunosEnquanto"
//  
//  
// Descri??o   : Algoritmo que leia o nome do Aluno, duas notas, calcule a m?dia de 40 alunos
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 30/08/2022
Var
// Se??o de Declara??es das vari?veis 
nota1, nota2, media: real
nome: caractere
i: inteiro


Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
i <- 1
enquanto i <= 40 faca

   escreval("Digite a nota 1")
   leia(nota1)
   escreval("Digite a nota 2")
   leia(nota2)
   escreval("Digite o nome do aluno")
   leia(nome)
   media <- (nota1+nota2)/2
   escreval(i, " A media de ", nome, " ?: ", media)
   i <- i+1
fimenquanto


Fimalgoritmo