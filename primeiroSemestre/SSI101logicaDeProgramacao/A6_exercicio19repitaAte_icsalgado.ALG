Algoritmo "valoresEntreAeB"
//  
//  
// Descrição   : Ler dois valores, verificar o menor e o intervalo entre eles
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 06/09/2022
Var
// Seção de Declarações das variáveis 
variavelA, variavelB: inteiro
menor, contador: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 



escreval("Informe o valor de A")
leia(variavelA)
escreval("Informe o valor de B")
leia(variavelB)

se variavelA > variavelB entao
   menor <- variavelB
   variavelB <- variavelA
   variavelA <- menor
fimse

repita
      escreval(variavelA)
      variavelA <- variavelA+1
ate variavelA = variavelB+1



Fimalgoritmo