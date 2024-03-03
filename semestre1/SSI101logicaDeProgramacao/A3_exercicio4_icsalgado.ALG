Algoritmo "semnome"
//  
//  
// Descrição   : calculos
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 21/08/2022
Var
// Seção de Declarações das variáveis 
valor: inteiro
valor2: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite um valor")
leia(valor)

se valor > 0 entao
   escreval("Resultado: ", valor+5)
senao
     se valor < 0 entao
        escreval("Resultado: ", valor-10)
        senao
             escreval("digite um segundo valor")
             leia(valor2)
             escreval("resultado: ", valor2*3)
     fimse
fimse

Fimalgoritmo