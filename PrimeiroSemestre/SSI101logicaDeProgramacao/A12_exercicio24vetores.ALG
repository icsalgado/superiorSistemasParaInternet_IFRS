Algoritmo "somaVetores"
// Disciplina   : SSI101 Logica
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 30/10/2022
Var
// Se??o de Declara??es das vari?veis 
vetorA, vetorB, vetorC: vetor [1..10] de inteiro
i: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
para i de 1 ate 10 faca
     escreval("Informe um valor para o vetorA")
     leia(vetorA[i])
     escreval("Informe um valor para o vetorB")
     leia(vetorB[i])
     vetorC[i] <- vetorA[i]+vetorB[i]
fimpara
limpatela
para i de 1 ate 10 faca
     escreval(vetorC[i])
fimpara


Fimalgoritmo