Algoritmo "salarioEfilhos"
//  
//  
// Descrição   : questoes com salario e filhos
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 30/08/2022
Var
// Seção de Declarações das variáveis 
salario, mediaSalario, mediaFilhos, maiorSalario, percentual: real
nroFilhos, contador, salarioMenorCem: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
salario <- 0
contador <- 1
mediaSalario <- 0
mediaFilhos <- 0
maiorSalario <- 0
salarioMenorCem <- 0

enquanto salario >= 0 faca

         escreval("Informe o salario do habitante")
         leia(salario)
         
         se salario < 0 entao
            interrompa
         fimse
         
         escreval("Informe a quantidade de filhos do habitante")
         leia(nroFilhos)
         
         mediaSalario <- mediaSalario + salario

         mediaFilhos <- mediaFilhos + nroFilhos
         
         se salario > maiorSalario entao
            maiorSalario <- salario
         fimse
         
         se salario <= 100 entao
            salarioMenorCem <- salarioMenorCem + 1
         fimse

         
         contador <- contador + 1
fimenquanto

escreval("A media dos salarios e: ", mediaSalario/(contador-1))
escreval("A media da quantidade de filhos e: ", mediaFilhos/(contador-1))
escreval("O maior dos salarios e: ", maiorSalario)

percentual <- (salarioMenorCem * 100)/(contador-1)

escreval("O percentual de habitantes com salario até R$100,00 e; ", percentual, "%")

Fimalgoritmo