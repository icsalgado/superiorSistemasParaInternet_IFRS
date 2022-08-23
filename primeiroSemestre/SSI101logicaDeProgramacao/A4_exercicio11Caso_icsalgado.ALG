Algoritmo "indicePoluicao"
//  
//  
// Descrição   : verifica o indice de poluicao e indica grupos paralisados
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 23/08/2022
Var
// Seção de Declarações das variáveis 
indice: real
alerta: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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
             escreval("indústrias do grupo 1 são intimadas a suspenderem suas atividades")
        caso 2
             escreval("indústrias dos grupos 1 e 2 são intimadas a suspenderem suas atividades")
        caso 3
             escreval("todas indústrias são intimadas a suspenderem suas atividades")
        outrocaso
                 escreval("todas industrias mantem as atividades")
fimescolha

Fimalgoritmo