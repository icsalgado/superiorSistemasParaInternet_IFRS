Algoritmo "classificaIdade"
//  
//  
// Descrição   : classifica uma pessoa conforme a idade
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 23/08/2022
Var
// Seção de Declarações das variáveis 
idade, classe: inteiro


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite a idade do aluno")
leia(idade)

se idade<=3 entao
            classe <- 1
fimse
se idade>3 entao
         classe <- 2
fimse
se idade>10 entao
         classe <- 3
fimse
se idade>=18 entao
         classe <- 4
fimse
escolha classe
        caso 1
             escreval("bebe")
        caso 2
             escreval("crianca")
        caso 3
             escreval("adolescente")
        caso 4
             escreval("adulto")
fimescolha
Fimalgoritmo