Algoritmo "faça enquanto"
//  
//  
// Descrição   : calcula a media e pergunta se quer continuar
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 06/09/2022
Var
// Seção de Declarações das variáveis

nota1, nota2, media, mediaGeral: real
contador: inteiro
controle: caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
contador <- 0
mediaGeral <- 0
repita
      escreval("informe a nota 1")
      leia(nota1)
      escreval("informe a nota 2")
      leia(nota2)
      media <- (nota1+nota2)/2
      escreval("A media deste aluno é ", media)
      contador <- contador + 1
      
      escreval("Deseja informar mais notas? ")
      leia(controle)
      mediaGeral <- mediaGeral + media

ate controle = "n"

mediaGeral <- mediaGeral/contador
escreval("A media geral da turma é ", mediaGeral)
escreval("A quantidade de alunos é ", contador)

Fimalgoritmo