Algoritmo "semnome"
// Disciplina   : [Lógica de Programação]
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 15/11/2022
tipo
    aluno = registro
          matricula : inteiro
          nome : caractere
          media : real
    fimregistro

Var
// Seção de Declarações das variáveis 
turma : vetor [1..45] de aluno
aprovados, recuperacao, reprovados, mediaTurma : real
i : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   para i de 1 ate 45 faca
        escreval("Nome")
        leia(turma[i].nome)
        escreval("matricula")
        leia(turma[i].matricula)
        escreval("Media final")
        leia(turma[i].media)
        mediaTurma <- mediaTurma + turma[i].media
        se turma[i].media >= 7 entao
           aprovados <- aprovados+1
        senao
           se turma[i].media >= 4 entao
              recuperacao <- recuperacao+1
           senao
                se turma[i].media < 4 entao
                   reprovados <- reprovados+1
                fimse
           fimse
        fimse
   fimpara

   escreval("A media geral da turma e: ", mediaTurma/45)
   escreval("A porcentagem de aprovados e: ", (aprovados*100)/45 :2:2)
   escreval("A porcentagem em recuperacao e: ", (recuperacao*100)/45 :2:2)
   escreval("A porcentagem de reprovados e: ", (reprovados*100)/45 :2:2)
Fimalgoritmo