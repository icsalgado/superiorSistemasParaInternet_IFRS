/**
 * @Author Iuri Salgado
 * @Date 2023-10
 * @Locale Porto Alegre, RS, Brazil
 * @Language Pt-Br
*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<unistd.h>//apenas em linux para uso da função sleep

#define TITLE "#####     POMODORO TIMER     #####"

void setTitle()
{
    system("clear");
    printf("%s\n", TITLE);
}

/**
 * letterByLetter recebe uma mensagem e coloca letra por letra na tela para gerar
 * um efeito mais interativo
*/
letterByLetter(char* message)
{
    setTitle();
    for(int i = 0;i < strlen(message); i++){
        putchar(message[i]);
        fflush(stdout);
        usleep(100*1000);
    }
}

/**
 * errorHandler é chamada para tratar qualquer erro de entrada nos controles de erros em
 * outras funções
*/
void errorHandler()
{
    setTitle();
    char error[] = "OOPS !!!";
    letterByLetter(error);    
    printf("\nEntrada inválida! Tente novamente\n");
    sleep(1);
}

/**
 * A função start aguarda uma entrada da tecla enter para que seja iniciada a contagem regressiva
 * presente na funçao timer. Ela também ajusta a exibição do tempo para contar os minutos cheios,
 * por exemplo 25:00 e não 24:59, o ajuste é feito direto no printf;
 * 
 * É chamada na função timer;
 * 
 * Recebe como parâmetro:
 *      status e ilpomo - função cicle
 *      min e sec - função timer
*/
void start(char* status, char ilpomo, int min, int sec)
{
    setTitle();
    printf("%s %c\nTempo: %d:%.2d\n", status, ilpomo, min, sec-60);//minuto cheio e zera segundos
    printf("pressione [ENTER] para iniciar");
    getchar();
    getchar();//TO-DO : buscar alternativa melhor que também limpe o buffer do teclado
}

/**
 * A função timer usa um loop for para contagem de segundos dentro de um outro loop for para 
 * contagem dos minutos (1 loop de minuto aguarda 60 loops de segundos);
 * 
 * É chamada na função cicle;
 * 
 * Recebe como parâmetro:
 *      session, status e ilpomo - função cicle
 *      session vai ser um work ou um tipo de pausa
*/
void timer(int session, char* status, char ilpomo)
{
    for(int min = session;min > 0;min--)
    {
        for(int sec = 60;sec >= 0;sec --)
        {
            setTitle();
            printf("%s %c\nTempo: %d:%.2d\n", status, ilpomo, min-1, sec);/*min -1 para não ficar
            negativo, por isso no primeiro for o min precisa ser maior que zero*/
            min == session && sec == 60 ? start(status, ilpomo, min, sec) : sleep(1);/*na primera
            entrada no contador, vai aguardar a entrada do usuário na função start*/
        }
    }
}

/**
 * A função cicle vai contar os 'pomodori', que são os ciclos de tempo de trabalho 
 * e tempo de pausa. Cada loop vai chamar a função timer passando como parâmetro o status
 * que pode ser um pomodoro ou uma pausa, o contador ilpomo e o tempo que o timer deve usar;
 * 
 * É chamada na função setPomodoro;
 * 
 * Recebe como parâmetro:
 *      work, rest e long_rest - função setPomodoro
*/
void cicle(int work, int rest, int long_rest)
{   
    for(int pomodori = 1;pomodori <= 4;pomodori++)
    {
        char status[30] = "";
        char ilpomo = pomodori+'0';//funciona como casting do inteiro pomodori para char ilpomo
               
        strcpy(status, "Pomodoro");//para substituir o conteúdo da string status 
        timer(work, status, ilpomo);

        //testa se é o ultimo ciclo para usar a pausa longa
        if(pomodori != 4){
            strcpy(status, "Pausa");
            timer(rest, status, ilpomo);
        }else{
            strcpy(status, "Pausa Longa");  
            timer(long_rest, status, ilpomo);
        }
    }
}

/**
 * lettering cria o efeito de vai e vem no título
*/
void lettering(){
    system("clear");
    char title[35] = TITLE;
    for (int i = 0; i < strlen(title); i++) {
        title[i] = tolower(title[i]);
    }
    printf("%s\n", title);

    for(int i = 10;i < 25; i++){
            system("clear");
            title[i] = toupper(title[i]);
            title[i-1] = tolower(title[i-1]);
            printf("%s\n", title);
            usleep(50*1000);
    }
    for(int i = 25;i > 9; i--){
            system("clear");
            title[i] = toupper(title[i]);
            printf("%s\n", title);
            usleep(50*1000);
    }
}

/**
 * generateReport gera um relatório com dados de produtividade
*/
void generateReport()
{
    char rel = 'x';
    do{
        setTitle();
        printf("\nGerar um relarório? s/n\n");
        __fpurge(stdin);
        scanf("%c", &rel);
        if(rel == 's'){

            //TO-DO buscar forma de escrever um relatório
            time_t mytime;
            mytime = time(NULL);
            char texto[80]; 
            sprintf(texto, "%s", ctime(&mytime));
            char texto2[160] = "teste - ";
            strcat(texto2, texto);

            FILE *file;
            file = fopen("relatorio.txt", "a");
            fprintf(file, "%s\n", texto2);
            fclose(file);

            char reporting[] = "Gerando relatório . . . . . ";
            letterByLetter(reporting);
            printf("\nRelatório gerado com sucesso\n");
            sleep(1);
        }
        if(rel != 's' && rel != 'n')
        {
            errorHandler();
        }
    }while(rel != 's' && rel != 'n');
}

/**
 * checktou entra quando vai sair do programa e chama a função que gera ou não um relatório
*/
void checkout()
{
    generateReport();
    lettering();
    char bye[] = "Até a próxima...";
    letterByLetter(bye);
    printf("\n\n");
}

/**
 * setPomodoro recebe do usuário os tempos do pomodoro dele depos chama o fluxo na função cicle
*/
void setPomodoro()
{
    int work, rest, long_rest = 0;
    setTitle();

    printf("\nAjustes do timer:\n");
    printf("Informe o tempo de trabalho no pomodoro em minutos: ");
    scanf("%d", &work);
    printf("Informe o tempo de pausa em minutos: ");
    scanf("%d", &rest);
    printf("Informe o tempo da pausa longa em minutos: ");
    scanf("%d", &long_rest);

    cicle(work, rest, long_rest);
}

void menu()
{
    lettering();
    char option = 'x';
    do{
        setTitle();
        printf("\nIniciar um novo ciclo pomodoro? s/n\n");
        scanf("%c", &option);
        switch(option)
        {
            case 's':
                setPomodoro();
                break;
            case 'n':
                checkout();
                break;
            default:
                errorHandler();
                break;   
        }       
    }while(option != 'n');
}

int main()
{  
    menu();    
}