Algoritmo "vetores"
// Disciplina   : SSI101 L?gica
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 30/10/2022
Var
// Se??o de Declara??es das vari?veis 
vetorA: vetor [1..5] de inteiro
i, par, impar, maior, menor: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
para i de 1 ate 5 faca
     escreval("informe um valor")
     leia(vetorA[i])
     
     se vetorA[i] mod 2 = 0 entao
        par <- par+1
     senao
          impar <- impar+1
     fimse
     
     se vetorA[i] > 50 entao
        maior <- maior+1
     fimse
     se vetorA[i] < 7 entao
        menor <- menor+1
     fimse
fimpara

escreval(par, " numeros pares no vetor")
escreval(impar, " numeros impares no vetor")
escreval(maior, " numeros maiores que 50 no vetor")
escreval(menor, " numeros menores que 7 no vetor")

Fimalgoritmo