Algoritmo "diasDaSemana"
//  
//  
// Descri??o   : escolha entre dias da semana de 1 a 7
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 23/08/2022
Var
// Se??o de Declara??es das vari?veis 
numero: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
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