Algoritmo "fa?a enquanto"
//  
//  
// Descri??o   : calcula a media e pergunta se quer continuar
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 06/09/2022
Var
// Se??o de Declara??es das vari?veis

nota1, nota2, media, mediaGeral: real
contador: inteiro
controle: caractere

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
contador <- 0
mediaGeral <- 0
repita
      escreval("informe a nota 1")
      leia(nota1)
      escreval("informe a nota 2")
      leia(nota2)
      media <- (nota1+nota2)/2
      escreval("A media deste aluno ? ", media)
      contador <- contador + 1
      
      escreval("Deseja informar mais notas? ")
      leia(controle)
      mediaGeral <- mediaGeral + media

ate controle = "n"

mediaGeral <- mediaGeral/contador
escreval("A media geral da turma ? ", mediaGeral)
escreval("A quantidade de alunos ? ", contador)

Fimalgoritmo