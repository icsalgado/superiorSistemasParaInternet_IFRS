Algoritmo "funcionarios"
// Disciplina   : [L?gica de Programa??o]
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 15/11/2022
tipo
    funcionario = registro
               nome : caractere
               salario : real
    fimregistro

Var
// Se??o de Declara??es das vari?veis 
   pesquisa : vetor [1..200] de funcionario
   media : real
   mais : vetor [1..200] de caractere
   i : inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
   para i de 1 ate 200 faca
        escreval("Nome")
        leia(pesquisa[i].nome)
        escreval("Salario")
        leia(pesquisa[i].salario)
        media <- media + pesquisa[i].salario
        se pesquisa[i].salario > 2000 entao
           mais[i] <- pesquisa[i].nome
        fimse
   fimpara
   
   escreval("media salarial: R$", media/3 :2:2)
   escreval("Os seguintes funcionarios recebem mais de R$2000.00")
   para i de 1 ate 200 faca
        se mais[i] <> ""  entao
           escreval(mais[i])
        fimse
   fimpara

Fimalgoritmo