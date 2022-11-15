Algoritmo "estados"
// Disciplina   : [Lógica de Programação]
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 15/11/2022
tipo
    estado = registro
           sigla : caractere
           veiculos : inteiro
           acidentes : inteiro
    fimregistro

Var
// Seção de Declarações das variáveis 
   pesquisa : vetor[1..27] de estado
   media : real
   maior, menor, i , sc: inteiro
   ufMaior, ufMenor : caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 


   para i de 1 ate 27 faca
        escreval("Sigla do estado")
        leia(pesquisa[i].sigla)
        escreval("Quantidade de veiculos")
        leia(pesquisa[i].veiculos)
        media <- media + pesquisa[i].veiculos
        escreval("Acidentes por ano")
        leia(pesquisa[i].acidentes)
        
        se i = 1 entao
           menor <- pesquisa[i].acidentes
        fimse
        se pesquisa[i].sigla = "SC" entao
           sc <- pesquisa[i].acidentes
        fimse
        se pesquisa[i].acidentes > maior entao
           maior <- pesquisa[i].acidentes
           ufMaior <- pesquisa[i].sigla
        fimse
        se pesquisa[i].acidentes < menor entao
           menor <- pesquisa[i].acidentes
           ufMenor <- pesquisa[i].sigla
        fimse


   fimpara

   escreval("Media de veiculos por estado: ", media/27)
   escreval("Acidentes em Santa Catarina: ", sc)
   escreval(ufMaior, " tem o maior indice de acidentes com ", maior)
   escreval(ufMenor, " tem o menor indice de acidentes com ", menor)

Fimalgoritmo