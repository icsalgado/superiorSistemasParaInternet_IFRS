Algoritmo "semnome"
//  
//  
// Descrição   : Calcula peso ideal
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 21/08/2022
Var
// Seção de Declarações das variáveis 
altura: real
sexo: caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite sua altura")
leia(altura)
escreval("Seu sexo: M par masculino e F para feminino")
leia(sexo)

se sexo = "M" entao
   escreval("Seu peso ideal e: ", altura*72.7-58)
senao
     escreval("Seu peso ideal e: ", altura*62.1-44.7)
fimse

Fimalgoritmo