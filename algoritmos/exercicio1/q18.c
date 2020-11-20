#include<stdio.h>

void questao18(){
    int horas;
    int minutos;
    char ponto;
    int minutosPassados;
    int totalMinutos;
    

    printf("\nInforme o horário no formato HH:MM ");
    scanf("%d %c %d", &horas, &ponto, &minutos);

    minutosPassados = (horas * 60);
    totalMinutos = minutosPassados + minutos;
    printf("A hora informado é: %d%c%d, E se passaram %d minutos desde o começo do dia ", horas, ponto, minutos, totalMinutos);
    }

int main(){

    questao18();

    return 0;
}