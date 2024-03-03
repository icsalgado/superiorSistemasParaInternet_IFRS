Algoritmo "Vetores"
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 22/10/2022
Var
// Seção de Declarações das variáveis 
altura:vetor[1..50] de real
nome:vetor[1..50] de caractere
maior, menor, media: real
contador: inteiro
jmaior, jmenor: caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

para contador de 1 ate 50 faca
     escreval("Informe o nome do jogador")
     leia(nome[contador])
     escreval("Informe a altura do jogador")
     leia(altura[contador])
     
     media <- media + altura[contador]
     
     se maior < altura[contador] entao
        maior <- altura[contador]
        jmaior <- nome[contador]
     fimse
     
     se menor = 0 entao
          menor <- altura[contador]
     fimse
     
     se menor > altura[contador] entao
        menor <- altura[contador]
        jmenor <- nome[contador]
     fimse
fimpara

media <- media/contador

escreval("O maior jogador eh: ", jmaior, " com ", maior, "m de altura")
escreval("O menor jogador eh: ", jmenor, " com ", menor, "m de altura")
escreval("A media de altura dos jogadores eh: ", media, "m de altura")


Fimalgoritmo