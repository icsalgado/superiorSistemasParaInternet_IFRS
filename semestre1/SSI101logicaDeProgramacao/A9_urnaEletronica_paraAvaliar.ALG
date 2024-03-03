Algoritmo "URNAELETRONICA"
// Disciplina   : Lógica de Programação
// Professor   : Fabrícia Noronha
// Descrição   : Computa votos para uma eleição.
// Autor(a)    : Elias Granata
// Data atual  : 27/09/2022
Var
   // Seção de Declarações das variáveis

   voto, votoschapa1, votoschapa2, votoschapa3, votoschapa4: INTEIRO
   votoschapa5, codmes, brancos, nulos, total, totalvalidos: INTEIRO
   primeiro, segundo, terceiro, quarto, quinto: INTEIRO
   percentval1, percentval2, percentval3, percentval4, percentval5 : REAL
   chapa1, chapa2, chapa3, chapa4, chapa5: CARACTERE
   nome1, nome2, nome3, nome4, nome5: CARACTERE

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...


   chapa1 <- "Chapa 1"
   chapa2 <- "Chapa 2"
   chapa3 <- "Chapa 3"
   chapa4 <- "Chapa 4"
   chapa5 <- "Chapa 5"
   codmes <- 0

   // Laço para rodar a eleição até que o código 10101 seja inserido pelo mesário.
   ENQUANTO (codmes <> 10101) FACA
      //Condicional para ativar a inserção de voto do eleitor.
      //A inserção é ativada quando o mesário insere o código 2008.
      SE (codmes = 2008) ENTAO
         escreval("ELEIÇÕES DCE IFRS - CAMPUS PORTO ALEGRE")
         escreval(" ")
         escreval("DIGITE SEU VOTO CONFORME RELAÇÃO ABAIXO:")
         escreval("VOTO - CHAPA")
         escreval("  1  - ", chapa1)
         escreval("  2  - ", chapa2)
         escreval("  3  - ", chapa3)
         escreval("  4  - ", chapa4)
         escreval("  5  - ", chapa5)
         escreval("  0  - Branco")
         escreval(" ")
         escreval("Digite seu voto:")
         leia(voto)
         escreval("Voto Computado com Sucesso!")
         //Condicional para a contagem dos votos:
         ESCOLHA (voto)
            CASO 1
               votoschapa1 <- votoschapa1 + 1
               totalvalidos <- totalvalidos + 1
            CASO 2
               votoschapa2 <- votoschapa2 + 1
               totalvalidos <- totalvalidos + 1
            CASO 3
               votoschapa3 <- votoschapa3 + 1
               totalvalidos <- totalvalidos + 1
            CASO 4
               votoschapa4 <- votoschapa4 + 1
               totalvalidos <- totalvalidos + 1
            CASO 5
               votoschapa5 <- votoschapa5 + 1
               totalvalidos <- totalvalidos + 1
            CASO 0
               brancos <- brancos + 1
            OUTROCASO
               nulos <- nulos + 1
         FIMESCOLHA

         TIMER (1500) ON
         LIMPATELA
         TIMER (0) OFF
      FIMSE
      escreval("ELEIÇÕES DCE IFRS - CAMPUS PORTO ALEGRE")
      escreval(" ")
      escreval("Mesário, digite o código de ativação do voto ou de encerramento:")
      leia(codmes)
      LIMPATELA
   FIMENQUANTO
   // Condicionais para verificar o primeiro lugar:
   primeiro <- votoschapa1
   nome1 <- chapa1
   SE (votoschapa2 > primeiro) ENTAO
      primeiro <- votoschapa2
      nome1 <- chapa2
   FIMSE
   SE (votoschapa3 > primeiro) ENTAO
      primeiro <- votoschapa3
      nome1 <- chapa3
   FIMSE
   SE (votoschapa4 > primeiro) ENTAO
      primeiro <- votoschapa4
      nome1 <- chapa4
   FIMSE
   SE (votoschapa5 > primeiro) ENTAO
      primeiro <- votoschapa5
      nome1 <- chapa5
   FIMSE
   // Condicionais para verificar o segundo lugar:
   segundo <- 0
   SE (chapa1 <> nome1) ENTAO
      segundo <- votoschapa1
      nome2 <- chapa1
   SENAO
      segundo <- votoschapa2
      nome2 <- chapa2
   FIMSE
   SE (chapa1 <> nome1) E (votoschapa1 > segundo) ENTAO
      segundo <- votoschapa1
      nome2 <- chapa1
   FIMSE
   SE (chapa2 <> nome1) E (votoschapa2 > segundo) ENTAO
      segundo <- votoschapa2
      nome2 <- chapa2
   FIMSE
   SE (chapa3 <> nome1) E (votoschapa3 > segundo) ENTAO
      segundo <- votoschapa3
      nome2 <- chapa3
   FIMSE
   SE (chapa4 <> nome1) E (votoschapa4 > segundo) ENTAO
      segundo <- votoschapa4
      nome2 <- chapa4
   FIMSE
   SE (chapa5 <> nome1) E (votoschapa5 > segundo) ENTAO
      segundo <- votoschapa5
      nome2 <- chapa5
   FIMSE
   // Condicionais para verificar o terceiro lugar:
   terceiro <- 0
   SE (chapa1 <> nome1) E (chapa1 <> nome2) ENTAO
      terceiro <- votoschapa1
      nome3 <- chapa1
   SENAO
      SE (chapa2 <> nome1) E (chapa2 <> nome2) ENTAO
         terceiro <- votoschapa2
         nome3 <- chapa2
      SENAO
         terceiro <- votoschapa3
         nome3 <- chapa3
      FIMSE
   FIMSE
   SE (chapa1 <> nome1) E (chapa1 <> nome2) E (votoschapa1 > terceiro) ENTAO
      terceiro <- votoschapa1
      nome3 <- chapa1
   FIMSE
   SE (chapa2 <> nome1) E (chapa2 <> nome2) E (votoschapa2 > terceiro) ENTAO
      terceiro <- votoschapa2
      nome3 <- chapa2
   FIMSE
   SE (chapa3 <> nome1) E (chapa3 <> nome2) E (votoschapa3 > terceiro) ENTAO
      terceiro <- votoschapa3
      nome3 <- chapa3
   FIMSE
   SE (chapa4 <> nome1) E (chapa4 <> nome2) E (votoschapa4 > terceiro) ENTAO
      terceiro <- votoschapa4
      nome3 <- chapa4
   FIMSE
   SE (chapa5 <> nome1) E (chapa5 <> nome2) E (votoschapa5 > terceiro) ENTAO
      terceiro <- votoschapa5
      nome3 <- chapa5
   FIMSE
   // Condicionais para verificar o quinto lugar:
   quinto <- votoschapa1
   nome5 <- chapa1
   SE (votoschapa2 < quinto) ENTAO
      quinto <- votoschapa2
      nome5 <- chapa2
   FIMSE
   SE (votoschapa3 < quinto) ENTAO
      quinto <- votoschapa3
      nome5 <- chapa3
   FIMSE
   SE (votoschapa4 < quinto) ENTAO
      quinto <- votoschapa4
      nome5 <- chapa4
   FIMSE
   SE (votoschapa5 < quinto) ENTAO
      quinto <- votoschapa5
      nome5 <- chapa5
   FIMSE
   // Condicionais para verificar o quarto lugar:
   SE (chapa1 <> nome1) E (chapa1 <> nome2) E (chapa1 <> nome3) E (chapa1 <> nome5) ENTAO
      quarto <- votoschapa1
      nome4 <- chapa1
   FIMSE
   SE (chapa2 <> nome1) E (chapa2 <> nome2) E (chapa2 <> nome3) E (chapa2 <> nome5) ENTAO
      quarto <- votoschapa2
      nome4 <- chapa2
   FIMSE
   SE (chapa3 <> nome1) E (chapa3 <> nome2) E (chapa3 <> nome3) E (chapa3 <> nome5) ENTAO
      quarto <- votoschapa3
      nome4 <- chapa3
   FIMSE
   SE (chapa4 <> nome1) E (chapa4 <> nome2) E (chapa4 <> nome3) E (chapa4 <> nome5) ENTAO
      quarto <- votoschapa4
      nome4 <- chapa4
   FIMSE
   SE (chapa5 <> nome1) E (chapa5 <> nome2) E (chapa5 <> nome3) E (chapa5 <> nome5) ENTAO
      quarto <- votoschapa5
      nome4 <- chapa5
   FIMSE
   // Cálculo dos percentuais de votos e totais:
   total <- totalvalidos + brancos + nulos
   percentval1 <- 100*votoschapa1/totalvalidos
   percentval2 <- 100*votoschapa2/totalvalidos
   percentval3 <- 100*votoschapa3/totalvalidos
   percentval4 <- 100*votoschapa4/totalvalidos
   percentval5 <- 100*votoschapa5/totalvalidos

   // Apresentação dos resultados:
   escreval("RESULTADO DAS ELEIÇÕES DO DCE - IFRS - POA:")
   escreval(" ")
   escreval("Primeiro Lugar: ", nome1, ", com", primeiro, " votos.")
   escreval("Segundo Lugar: ", nome2, ", com", segundo, " votos.")
   escreval("Terceiro Lugar: ", nome3, ", com", terceiro, " votos.")
   escreval("Quarto Lugar: ", nome4, ", com", quarto, " votos.")
   escreval("Quinto Lugar: ", nome5, ", com", quinto, " votos.")
   escreval(" ")
   escreval(" ")
   escreval("TOTAL DE VOTOS: ", total)
   escreval("TOTAL DE VOTOS VÁLIDOS: ", totalvalidos)
   escreval("Total de votos em Branco: ", brancos)
   escreval("Total de votos Nulos: ", nulos)
   escreval("Percentual de Votos Válidos da Chapa 1: ", percentval1, " %")
   escreval("Percentual de Votos Válidos da Chapa 2: ", percentval2, " %")
   escreval("Percentual de Votos Válidos da Chapa 3: ", percentval3, " %")
   escreval("Percentual de Votos Válidos da Chapa 4: ", percentval4, " %")
   escreval("Percentual de Votos Válidos da Chapa 5: ", percentval5, " %")

Fimalgoritmo