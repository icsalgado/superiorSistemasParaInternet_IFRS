Algoritmo "RU"
// Disciplina   : [Linguagem de Programação]
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 15/11/2022

tipo
    aluno = registro
          nome : caractere
          refeicoes : inteiro
          avaliacao : caractere
    fimregistro

Var
// Seção de Declarações das variáveis 
   pesquisa : vetor[1..200] de aluno
   maisVinte : vetor[1..200] de caractere
   i, refeicoesD, refeicoesDV, refeicoesV : inteiro
   otimo, bom, regular, pessimo, pessimoD: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   otimo <- 0
   bom <- 0
   regular <- 0
   pessimo <- 0
   pessimoD <- 0
   
   para i de 1 ate 200 faca
        escreval("Nome:")
        leia(pesquisa[i].nome)
        escreval("Refeicoes:")
        leia(pesquisa[i].refeicoes)

        se pesquisa[i].refeicoes < 10 entao
           refeicoesD <- refeicoesD + 1
        senao
             se pesquisa[i].refeicoes <= 20 entao
                refeicoesDV <- refeicoesDV + 1
             senao
                  se pesquisa[i].refeicoes > 20 entao
                     refeicoesV <- refeicoesV + 1
                     maisVinte[refeicoesV] <- pesquisa[i].nome
                  fimse
             fimse
        fimse
        
        escreval("Avaliacao:")
        leia(pesquisa[i].avaliacao)
        
        se pesquisa[i].avaliacao = "o" entao
           otimo <- otimo+1
        senao
             se pesquisa[i].avaliacao = "b" entao
                bom <- bom+1
             senao
                  se pesquisa[i].avaliacao = "r" entao
                     regular <- regular+1
                  senao
                       se pesquisa[i].avaliacao = "p" entao
                          pessimo <- pessimo+1
                          se pesquisa[i].refeicoes < 10 entao
                             pessimoD <- pessimoD+1
                          fimse
                       fimse
                  fimse
             fimse
        fimse
   fimpara
   
   escreval(refeicoesD, " alunos fizeram menos de 10 refeicoes")
   escreval(refeicoesDV, " alunos fizeram entre 10 e 20 refeicoes")
   escreval(refeicoesV, " alunos fizeram mais de 20 refeicoes e sao eles:")
   para i de 1 ate 200 faca
        se maisVinte[i] <> "" entao //para não mostrar os campos vazios já que não é possivel ler o tamanho do array no visualg
           escreval(maisVinte[i])
        fimse
   fimpara
   escreval((otimo*100)/200 :2:2, "% avaliaram como otimas as refeicoes")
   escreval((bom*100)/200 :2:2, "% avaliaram como boas as refeicoes")
   escreval((regular*100)/200 :2:2, "% avaliaram como regulares as refeicoes")
   escreval((pessimo*100)/200 :2:2, "% avaliaram como pessimas as refeicoes")
   escreval(pessimoD, " alunos fizeram menos de 10 refeicoes e avaliaram como pessimas")

Fimalgoritmo