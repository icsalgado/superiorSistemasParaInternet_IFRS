Algoritmo "cobaiascomcontrole"
// Disciplina  : SSI101
// Professor   :
// Descri??o   :
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 14/10/2022
Var
// Se??o de Declara??es das vari?veis
ratos, coelhos, contador, total, cobaia, quantidade: inteiro
percentual : real

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc...


para contador de 1 ate 2 faca

       repita
          escreval("+--EXP", contador, "-----------------+")
          escreval("|         Escolha         |")
          escreval("|       1 para RATOS      |")
          escreval("|      2 para COELHOS     |")
          escreval("+-------------------------+")
          leia(cobaia)
          se (cobaia <> 1) ou (cobaia <> 2) entao
               escreval("Opcao invalida")
          fimse
       ate (cobaia = 1) ou (cobaia = 2)


       se cobaia = 1 entao
            escreval("Informe a quantidade de ratos")
            leia(quantidade)
            ratos <- ratos+quantidade
            total <- total+quantidade
       fimse
       se cobaia = 2 entao
            escreval("Informe a quantidade de coelhos")
            leia(quantidade)
            coelhos <- coelhos+quantidade
            total <- total+quantidade
       fimse

fimpara

escreval("Total de cobaias utilizadas: ",total)
escreval("Total de ratos: ", ratos)
escreval("Total de coelhos: ", coelhos)
escreval((ratos*100)/total,"% de ratos e ", (coelhos*100)/total,"% de coelhos")

Fimalgoritmo