Algoritmo "valor"
//Fazer um algoritmo que l? um valor. Se o valor for maior que
//zero apresenta o valor +5. Se o valor for menor que zero
//apresenta o valor -10. E, se o valor for zero, l? um segundo valor
//e apresenta este valor *3.
Var
   valor, valor2, resposta:real

Inicio
   escreva("Insira um valor: ")
   leia(valor)


   SE valor > 0 ENTAO
      resposta <- valor + 5)
      escreval (" O valor ? maior que zero")
   SENAO
      se valor < 0 ENTAO
         resposta <- valor - 10
         escreval (" O valor ? menor que zero")
      SENAO
         escreval("O valor ? zero. Informe outro valor: ")
         leia(valor2)
         resposta <- valor2 * 3
      FIMSE
   FIMSE
   escreval (" Resposta:", resposta)
Fimalgoritmo