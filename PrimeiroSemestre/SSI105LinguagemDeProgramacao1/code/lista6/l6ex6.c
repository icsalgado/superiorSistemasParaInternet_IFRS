/*6 - Escreva programa que Leia turno e língua.
Esse programa deve ter uma função receba como parâmetros: Língua e Turno e imprima na tela a saudação correta.
os parâmetros para língua são: 1 português, 2 inglês, 3 espanhol, 4 italiano, 5 alemão. (pesquisar as saudações no google :)
Para o turno o parâmetro é dado pelos caracteres 'm', 't' e 'n'.
O programa deve repetir o processo até que a língua informada seja '0' (zero); */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void menu();

int main(){
    int idioma;
    char turno;

    do{
        menu();
        printf("Turno: ");
        scanf("%s", &turno);
        printf("Idioma: ");
        scanf("%d", &idioma);
        if(idioma != 0){
            saudacao(idioma, turno);
        }
    }while(idioma != 0);
}
void menu(){
    system("clear");

    printf("+----------Idioma---------+----------Turno---------+\n");
    printf("| 1 Portugues             | m Manhã                |\n");
    printf("| 2 Ingles                |                        |\n");
    printf("| 3 Espanhol              | t Tarde                |\n");
    printf("| 4 Italiano              |                        |\n");
    printf("| 5 Alemao                | n Noite                |\n");
    printf("+-------------------------+------------------------+\n");
}
void saudacao(int idioma, char turno){
    switch(idioma){
    case 1:
        //printf("portugues\n");
        portugues(turno);
        break;
    case 2:
        //printf("Ingles\n");
        ingles(turno);
        break;
    case 3:
        //printf("Espanhol\n");
        espanhol(turno);
        break;
    case 4:
        //printf("Italiano\n");
        italiano(turno);
        break;
    case 5:
        //printf("Alemao\n");
        alemao(turno);
        break;
    
    default:
        system("clear");
        printf("Idioma invalido\n");
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    }
}
void portugues(char turno){
    switch(turno){
    case 'm':
        system("clear");
        
        printf("Bom dia\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();//para a execução do programa até que aperte uma tecla
        getchar();//parece que o buffer acumula o \n como um enter então precisa de dois desses
        break;
    case 't':
        system("clear");

        printf("Boa tarde\n");

        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    case 'n':
        system("clear");

        printf("Boa noite\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    
    default:
        system("clear");
        printf("turno invalido\n");
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    }
}
void ingles(char turno){
    switch(turno){
    case 'm':
        system("clear");

        printf("Good Morning\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    case 't':
        system("clear");
        
        printf("Good Evening\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    case 'n':
        system("clear");
        
        printf("Good Night\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    
    default:
        system("clear");
        printf("turno invalido\n");
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    }
}
void espanhol(char turno){
    switch(turno){
    case 'm':
        system("clear");
        
        printf("Buenos Dias\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    case 't':
        system("clear");
        
        printf("Buenas Tardes\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    case 'n':
        system("clear");
        
        printf("Buenas Noches\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    
    default:
        system("clear");
        printf("turno invalido\n");
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    }
}
void italiano(char turno){
    switch(turno){
    case 'm':
        system("clear");
        
        printf("Buongiorno\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    case 't':
        system("clear");
        
        printf("Buonasera\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    case 'n':
        system("clear");
        
        printf("Buonanotte\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    
    default:
        system("clear");
        printf("turno invalido\n");
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    }
}
void alemao(char turno){
    switch(turno){
    case 'm':
        system("clear");
        
        printf("Guten Morgen\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    case 't':
        system("clear");
        
        printf("Guten Tag\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    case 'n':
        system("clear");
        
        printf("Guten Nacht\n");
        
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    
    default:
        system("clear");
        printf("turno invalido\n");
        printf("\n\nENTER para continuar\n");
        getchar();
        getchar();
        break;
    }
}