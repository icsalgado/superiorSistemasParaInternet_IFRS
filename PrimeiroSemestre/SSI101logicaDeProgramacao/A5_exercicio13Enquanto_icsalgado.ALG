Algoritmo "calculaMedia40eturma"
//
//
// Descri??o   : Algoritmo que leia o nome do Aluno, duas notas, calcule a m?dia de 40 alunos e a media da turma
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 30/08/2022
Var
// Se??o de Declara??es das vari?veis
nota1, nota2, mediaAluno, mediaTurma: real
nome: caractere
i: inteiro


Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc...
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
   escreval(i, " A media de ", nome, " ?: ", mediaAluno)

   i <- i+1
fimenquanto

escreval(i, " A media da turma ?: ", mediaTurma/(i-1))

Fimalgoritmo