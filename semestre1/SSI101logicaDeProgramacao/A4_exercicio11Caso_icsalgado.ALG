Algoritmo "indicePoluicao"
//  
//  
// Descri��o   : verifica o indice de poluicao e indica grupos paralisados
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 23/08/2022
Var
// Se��o de Declara��es das vari�veis 
indice: real
alerta: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Informe o indice de poluicao")
leia(indice)


se indice>=0.26 entao
   alerta <- 1
fimse
se indice>=0.4 entao
   alerta <- 2
fimse
se indice>=0.5 entao
   alerta <-3
fimse

escolha alerta
        caso 1
             escreval("ind�strias do grupo 1 s�o intimadas a suspenderem suas atividades")
        caso 2
             escreval("ind�strias dos grupos 1 e 2 s�o intimadas a suspenderem suas atividades")
        caso 3
             escreval("todas ind�strias s�o intimadas a suspenderem suas atividades")
        outrocaso
                 escreval("todas industrias mantem as atividades")
fimescolha

Fimalgoritmo