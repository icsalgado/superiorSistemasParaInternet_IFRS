Algoritmo "calculadora"
//  
//  
// Descrição   : simula calculadora simples
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 23/08/2022
Var
// Seção de Declarações das variáveis 
numero1, numero2, resultado: real
operador: caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Informe o primeiro numero")
leia(numero1)
escreval("Informe o segundo numero")
leia(numero2)
escreval("Informe a operação")
leia(operador)



escolha operador
       caso "+"
            resultado <- numero1 + numero2
            escreval("O resultado e: ", resultado)
       caso "-"
            resultado <- numero1 - numero2
            escreval("O resultado e: ", resultado)
       caso "/"
            resultado <- numero1 / numero2
            escreval("O resultado e: ", resultado)
       caso "*"
            resultado <- numero1 * numero2
            escreval("O resultado e: ", resultado)
       outrocaso
                escreval("Operador inválido")
fimescolha


Fimalgoritmo