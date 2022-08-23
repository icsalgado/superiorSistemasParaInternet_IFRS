Algoritmo "diasDaSemana"
//  
//  
// Descrição   : escolha entre dias da semana de 1 a 7
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 23/08/2022
Var
// Seção de Declarações das variáveis 
numero: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Informe um numero de 1 a 7")
leia(numero)

escolha numero
        caso 1
             escreval("Domingo")
        caso 2
             escreval("Segunda")
        caso 3
             escreval("Terca")
        caso 4
             escreval("Quarta")
        caso 5
             escreval("Quinta")
        caso 6
             escreval("Sexta")
        caso 7
             escreval("Sabado")
        outrocaso
             escreval("Numero invalido")

fimescolha
Fimalgoritmo