Algoritmo "calculoSubredeC"
// Descri��o   : mapeia os hosts e redes de classe C
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 10/10/2022
Var
// Se��o de Declara��es das vari�veis 


operacao, redes, octeto, salto, mascara, i :inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...


repita
   escreval("        CALCULO DE SUBREDES DE CLASSE C")

   escreval("     Escolha o c�digo da opera��o desejada:")

   escreval("+---------------------------------------------+")
   escreval("| [1] Quero criar uma rede com subredes       |")
   escreval("| [2] Quero mapear minha rede                 |")
   escreval("| [0] Para Sair                               |")
   escreval("+---------------------------------------------+")
   leia(operacao)
   
   escolha(operacao)
      caso 1
            escreval("Quantas redes vai precisar?")
            leia(redes)

            salto <- 256\redes
            mascara <- 256-salto

            escreval("Mascara de sub-rede: 255.255.255.",mascara)
            escreval("Quantidade de sub-redes: ",redes)
            octeto <- 0
            i <- 1

                enquanto i <= redes faca
                    escreval(">> Rede: 192.168.1.",octeto)
                    escreval("Broadcast: 192.168.1.",salto * i - 1)
                    escreval("Hosts Poss�veis: 192.168.1.",octeto+1)
                    escreval("             at� 192.168.1.",salto * i - 2)
                    octeto <- octeto + salto
                    i <- i+1
                fimenquanto
      caso 2
            escreval("Qual o octeto misto?")
            leia(mascara)

            salto <- 256-mascara
            redes <- 256\salto

            escreval("Mascara de sub-rede: 255.255.255.",mascara)
            escreval("Quantidade de sub-redes: ",redes)
            octeto <- 0
            i <- 1

                enquanto i <= redes faca
                    escreval(">> Rede: 192.168.1.",octeto)
                    escreval("Broadcast: 192.168.1.",salto * i - 1)
                    escreval("Hosts Poss�veis: 192.168.1.",octeto+1)
                    escreval("             at� 192.168.1.",salto * i - 2)
                    octeto <- octeto + salto
                    i <- i+1
                fimenquanto
      caso 0
           escreval("Saindo")
      outrocaso
           escreval("invalido")
   fimescolha
   
ate(operacao = 0)




Fimalgoritmo