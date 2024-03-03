Algoritmo "tipoMedia"
//  
//  
// Descrição   : Escolhe entre media aritmetica e media ponderada
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 23/08/2022
Var
// Seção de Declarações das variáveis 
nota1, nota2, nota3, mediaAritmetica, mediaPonderada: real
tipoMedia: caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Qual a nota1?")
leia(nota1)
escreval("Qual a nota2?")
leia(nota2)
escreval("Qual a nota3?")
leia(nota3)
escreval("Qual o tipo de media a ser calculado?")
leia(tipoMedia)

escolha tipoMedia
        caso "aritmetica"
             mediaAritmetica <- (nota1+nota2+nota3)/3
             escreval("A media ", tipoMedia," e ", mediaAritmetica)
        caso "ponderada"
             mediaPonderada <- ((nota1*3)+(nota2*3)+(nota3*4))/10
             escreval("A media ", tipoMedia," e ", mediaPonderada)
        outrocaso
                escreval("Opcao invalida")
fimescolha

Fimalgoritmo