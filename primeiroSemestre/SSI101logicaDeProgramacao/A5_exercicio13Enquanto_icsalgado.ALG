Algoritmo "calculaMedia40eturma"
//
//
// Descrição   : Algoritmo que leia o nome do Aluno, duas notas, calcule a média de 40 alunos e a media da turma
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 30/08/2022
Var
// Seção de Declarações das variáveis
nota1, nota2, mediaAluno, mediaTurma: real
nome: caractere
i: inteiro


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
i <- 1  //contador
mediaAluno <- 0
mediaTurma <- 0   //acumulador

enquanto i <= 4 faca

   escreval("Digite a nota 1")
   leia(nota1)
   escreval("Digite a nota 2")
   leia(nota2)
   escreval("Digite o nome do aluno")
   leia(nome)
   mediaAluno <- (nota1+nota2)/2
   mediaTurma <- mediaTurma + mediaAluno
   escreval(i, " A media de ", nome, " é: ", mediaAluno)

   i <- i+1
fimenquanto

escreval(i, " A media da turma é: ", mediaTurma/(i-1))

Fimalgoritmo