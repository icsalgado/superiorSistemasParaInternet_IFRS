Algoritmo "ProvaPosto"
// Disciplina  : SSI101
// Professor   :
// Descrição   :
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 14/10/2022
Var
// Seção de Declarações das variáveis 
opcao, alcool, gasolina, diesel, gnv : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

repita
      limpatela
      escreval("Escolha a opcao do combustivel")
      escreval("1 Alcool")
      escreval("2 Gasolina")
      escreval("3 Diesel")
      escreval("4 GNV")
      escreval("5 para sair")
      leia(opcao)
      
      escolha opcao
              caso 1
                   alcool <- alcool+1
                   limpatela
                   escreval("######    Alcool    ######")
              caso 2
                   gasolina <- gasolina+1
                   limpatela
                   escreval("######    Gasolina    ######")
              caso 3
                   diesel <- diesel+1
                   limpatela
                   escreval("######    Diesel    ######")
              caso 4
                   gnv <- gnv+1
                   limpatela
                   escreval("######    GNV    ######")
              caso 5
                   limpatela
                   escreval("MUITO OBRIGADO PELA PARTICIPACAO")
                   escreval("Alcool: ", alcool," clientes")
                   escreval("Gasolina: ", gasolina," clientes")
                   escreval("Diesel: ", diesel," clientes")
                   escreval("GNV: ", gnv," clientes")

              outrocaso
                   limpatela
                   escreval(">>>>>   Opcao invalida    <<<<<<")
      fimescolha
      timer 2000
      timer 0
      
ate opcao = 5

Fimalgoritmo