Algoritmo "Aluguel de Ferramentas"

Var
f,c,r,veri: caracter
v,con,rep: real
f1,f2,f3,f4,f5,c1,c2,c3,c4,c5: caracter
v1,v2,v3,v4,v5: real

Inicio

repita
   escreval ("Adicione a sua ferramenta:(Maximo = 5)")
   leia (f)
   escreval ("Escolha qual categoria ela faz parte:")
   escreval ("Manual -- Eletrica")
   leia (c)
   escreval ("Escolha um valor diario para a sua ferramenta:")
   leia (v)
   se (con < 4) entao
      escreval ("Voce gostaria de adicionar mais uma ferramenta? (Sim/Nao)")
      leia (r)
   fimse
   con <- con + 1
   se (con = 1) entao
      f1 <- f
      c1 <- c
      v1 <- v
   fimse
   se (con = 2) entao
      f2 <- f
      c2 <- c
      v2 <- v
   fimse
   se (con = 3) entao
      f3 <- f
      c3 <- c
      v3 <- v
   fimse
   se (con = 4) entao
      f4 <- f
      c4 <- c
      v4 <- v
   fimse
   se (con = 5) entao
      f5 <- f
      c5 <- c
      v5 <- v
   fimse
   se (r = "nao") ou (r = "Nao") ou (r = "n?o") ou (r = "N?o") entao
      con <- con + 5
   fimse
   limpatela
at? con >= 5
escreval ("Verifique se suas ferramentas estao presentes na lista.")
repita
   escreval ("Escolha o a categoria da sua ferramenta: (Eletrica/Manual)")
   leia (veri)
   se (veri = "eletrica") ou (veri = "Eletrica") ou (veri = "el?trica") ou (veri = "El?trica") entao
        repita
           se (c1 = "eletrica") ou (c1 = "Eletrica") ou ( c1 = "el?trica") ou ( c1 = "El?trica") entao
              escreval (f1)
           fimse
           se (c2 = "eletrica") ou (c2 = "Eletrica") ou ( c2 = "el?trica") ou ( c2 = "El?trica") entao
              escreval (f2)
           fimse
           se (c3 = "eletrica") ou (c3 = "Eletrica") ou ( c3 = "el?trica") ou ( c3 = "El?trica") entao
              escreval (f3)
           fimse
           se (c4 = "eletrica") ou (c4 = "Eletrica") ou ( c4 = "el?trica") ou ( c4 = "El?trica") entao
              escreval (f4)
           fimse
           se (c5 = "eletrica") ou (c5 = "Eletrica") ou ( c5 = "el?trica") ou ( c5 = "El?trica") entao
              escreval (f5)
           fimse
           escreval ("Escolha uma para verificar:")
           leia (r)
           se (r = f1) entao
              escreval (f1," uma ferramenta ",c1," custando: R$",v1," por dia.")
           fimse
           se (r = f2) entao
              escreval (f2," uma ferramenta ",c2," custando: R$",v2," por dia.")
           fimse
           se (r = f3) entao
              escreval (f3," uma ferramenta ",c3," custando: R$",v3," por dia.")
           fimse
           se (r = f4) entao
              escreval (f4," uma ferramenta ",c4," custando: R$",v4," por dia.")
           fimse
           se (r = f5) entao
              escreval (f5," uma ferramenta ",c5," custando: R$",v5," por dia.")
           fimse
           se (r <> f1) e (r <> f2) e (r <> f3) e (r <> f4) e (r <> f5) entao
              limpatela
              escreval ("Escolha invalida tente de novo")
           senao
                escreval ("Gostaria de olhar mais uma ferramenta desta categoria? (Sim/Nao)")
                leia (r)
                limpatela
                se (r = "nao") ou (r = "Nao") ou (r = "n?o") ou (r = "N?o") entao
                   interrompa
                fimse
           fimse
        ate falso
   fimse
   se (veri = "manual") ou (veri = "Manual") entao
        repita
           se (c1 = "manual") ou (c1 = "Manual") entao
              escreval (f1)
           fimse
           se (c2 = "manual") ou (c2 = "Manual") entao
              escreval (f2)
           fimse
           se (c3 = "manual") ou (c3 = "Manual") entao
              escreval (f3)
           fimse
           se (c4 = "manual") ou (c4 = "Manual") entao
              escreval (f4)
           fimse
           se (c5 = "manual") ou (c5 = "Manual") entao
              escreval (f5)
           fimse
           escreval ("Escolha uma para verificar:")
           leia (r)
           se (r = f1) entao
              escreval (f1," uma ferramenta ",c1," custando: R$",v1," por dia.")
           fimse
           se (r = f2) entao
              escreval (f2," uma ferramenta ",c2," custando: R$",v2," por dia.")
           fimse
           se (r = f3) entao
              escreval (f3," uma ferramenta ",c3," custando: R$",v3," por dia.")
           fimse
           se (r = f4) entao
              escreval (f4," uma ferramenta ",c4," custando: R$",v4," por dia.")
           fimse
           se (r = f5) entao
              escreval (f5," uma ferramenta ",c5," custando: R$",v5," por dia.")
           fimse
           se (r <> f1) e (r <> f2) e (r <> f3) e (r <> f4) e (r <> f5) entao
              limpatela
              escreval ("Escolha invalida tente de novo")
           senao
                escreval ("Gostaria de olhar mais uma ferramenta desta categoria? (Sim/Nao)")
                leia (r)
                limpatela
                se (r = "nao") ou (r = "Nao") ou (r = "n?o") ou (r = "N?o") entao
                   interrompa
                fimse
           fimse
        ate falso
   fimse
   se (veri <> "manual") e (veri <> "Manual") e (veri <> "eletrica") e (veri <> "Eletrica") e (veri <> "el?trica") e (veri <> "El?trica") entao
            limpatela
            escreval ("Escolha invalida, tente novamente.")
   fimse
   escreval ("Gostaria de parar terminar os teste? (Sim/Nao)")
   leia (r)
   se (r = "Sim") ou (r = "sim") entao
      limpatela
      interrompa
   fimse
ate falso
escreval ("Obrigado por Testar!")



     

Fimalgoritmo