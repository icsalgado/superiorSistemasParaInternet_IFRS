#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#include<unistd.h>

void start(char* status, char ilpomo, int min, int sec)
{
    system("clear");
    printf("%s %c\nTempo: %d:%.2d\n", status, ilpomo, min, sec-60);
    printf("pressione qualquer tecla para iniciar");
    getchar();
}

void timer(int session, char* status, char ilpomo)
{
    for(int min = session;min > 0;min--)
    {
        for(int sec = 60;sec >= 0;sec --)
        {
            system("clear");
            printf("%s %c\nTempo: %d:%.2d\n", status, ilpomo, min-1, sec);
            min == session && sec == 60 ? start(status, ilpomo, min, sec) : sleep(1);
        }
    }
}

void cicle()
{   
    for(int pomodori = 1;pomodori <= 4;pomodori++)
    {
        char status[30] = "";
        char ilpomo = pomodori+'0';
               
        strcpy(status, "Pomodoro");
        timer(1, status, ilpomo);
        if(pomodori != 4){
            strcpy(status, "Pausa");
            timer(1, status, ilpomo);
        }else{
            strcpy(status, "Pausa Longa");  
            timer(1, status, ilpomo);
        }
    }
}

int main()
{
    int new = 0;
    do
    {
        cicle();
        printf("Deseja iniciar um novo pomodoro?\n");
        scanf("%d", &new);
    } while (new == 1);       
}