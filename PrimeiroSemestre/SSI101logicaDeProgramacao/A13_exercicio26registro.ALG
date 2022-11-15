Algoritmo "XYZ"
// Disciplina   : [Lógica de Programação]
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 12/11/2022

tipo //registro declarado antes das variáveis
    info = registro
        nome : caractere
        idade : inteiro
fimregistro

Var
// Seção de Declarações das variáveis
funcionario : vetor [1..80] de info
velho, indiceV, novo, indiceN, i : inteiro


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
para i de 1 ate 80 faca
     escreval("Nome:")
     leia(funcionario[i].nome)//armazena a posição nome
     escreval("Idade:")
     leia(funcionario[i].idade)//armazena a posição idade
fimpara

velho <- funcionario[1].idade//para não iniciar como zero
novo <- funcionario[1].idade//para não iniciar como zero
indiceN <- 1
indiceV <-  1

para i de 1 ate 80 faca
     se funcionario[i].idade > velho entao
        velho <- funcionario[i].idade//substitui o mais velho
        indiceV <- i//para conseguir pegar o nome
     fimse
     se funcionario[i].idade < novo entao
        novo <- funcionario[i].idade//substitui o mais novo
        indiceN <- i//para conseguir pegar o nome
     fimse
fimpara

escreval(funcionario[indiceV].nome, " é o mais velho com ", funcionario[indiceV].idade, " anos")
escreval(funcionario[indiceN].nome, " é o mais novo com ", funcionario[indiceN].idade, " anos")
Fimalgoritmo