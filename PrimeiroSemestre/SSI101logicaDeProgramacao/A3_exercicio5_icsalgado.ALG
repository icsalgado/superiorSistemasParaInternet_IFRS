Algoritmo "semnome"
//  
//  
// Descri??o   : Maior entre 3 numeros
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 21/08/2022
Var
// Se??o de Declara??es das vari?veis 
numero1, numero2, numero3: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
escreval("Digite um numero")
leia(numero1)
escreval("Digite outro numero")
leia(numero2)
escreval("Digite mais um numero")
leia(numero3)

se numero1 > numero2 entao
      se numero1 > numero3 entao
      escreval("O primeiro e o maior: ", numero1)
   senao
        escreval("O terceiro e o maior: ", numero3)
   fimse
senao
     se numero2>numero3 entao
        escreval("O segundo e o maior: ", numero2)
     senao
          escreval("O terceiro e o maior: ", numero3)
     fimse
fimse

Fimalgoritmo