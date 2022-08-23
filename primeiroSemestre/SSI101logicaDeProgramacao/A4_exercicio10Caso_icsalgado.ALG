Algoritmo "xCalabresa"
//  
//  
// Descrição   : Escolhe o x e calcula o valor
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 23/08/2022
Var
// Seção de Declarações das variáveis 
quantidade, opcao: inteiro
valor: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Informe o codigo do produto")
leia(opcao)
escreval("Informe a quantidade")
leia(quantidade)

escolha opcao
        caso 1
             valor <- quantidade*13.80
        caso 2
             valor <- quantidade*15.80
        caso 3
             valor <- quantidade*18.90
        caso 4
             valor <- quantidade*13.50
        caso 5
             valor <- quantidade*17.90
        outrocaso
                 escreval("opcao invalida")
fimescolha

escreval("Valor final: ", valor:2:2)

Fimalgoritmo