Algoritmo "calculadora"
//  
//  
// Descri??o   : simula calculadora simples
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 23/08/2022
Var
// Se??o de Declara??es das vari?veis 
numero1, numero2, resultado: real
operador: caractere

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
escreval("Informe o primeiro numero")
leia(numero1)
escreval("Informe o segundo numero")
leia(numero2)
escreval("Informe a opera??o")
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
                escreval("Operador inv?lido")
fimescolha


Fimalgoritmo