Algoritmo "nota40alunosEnquanto"
//  
//  
// Descrição   : Algoritmo que leia o nome do Aluno, duas notas, calcule a média de 40 alunos
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 30/08/2022
Var
// Seção de Declarações das variáveis 
nota1, nota2, media: real
nome: caractere
i: inteiro


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
i <- 1
enquanto i <= 40 faca

   escreval("Digite a nota 1")
   leia(nota1)
   escreval("Digite a nota 2")
   leia(nota2)
   escreval("Digite o nome do aluno")
   leia(nome)
   media <- (nota1+nota2)/2
   escreval(i, " A media de ", nome, " é: ", media)
   i <- i+1
fimenquanto


Fimalgoritmo