Algoritmo "XYZ"
// Disciplina   : [L?gica de Programa??o]
// Autor(a)    : Iuri de Carvalho Salgado
// Data atual  : 12/11/2022

tipo //registro declarado antes das vari?veis
    info = registro
        nome : caractere
        idade : inteiro
fimregistro

Var
// Se??o de Declara??es das vari?veis
funcionario : vetor [1..80] de info
velho, indiceV, novo, indiceN, i : inteiro


Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
para i de 1 ate 80 faca
     escreval("Nome:")
     leia(funcionario[i].nome)//armazena a posi??o nome
     escreval("Idade:")
     leia(funcionario[i].idade)//armazena a posi??o idade
fimpara

velho <- funcionario[1].idade//para n?o iniciar como zero
novo <- funcionario[1].idade//para n?o iniciar como zero
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

escreval(funcionario[indiceV].nome, " ? o mais velho com ", funcionario[indiceV].idade, " anos")
escreval(funcionario[indiceN].nome, " ? o mais novo com ", funcionario[indiceN].idade, " anos")
Fimalgoritmo