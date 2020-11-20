#include<stdio.h>

void questao7(){
    char nome[30]; 

    printf("Olá, Digite o seu nome: "); //informação para o usuario escrever na tela
    fgets(nome, sizeof(nome), stdin);   //recebe o nome do usuario
    printf("Seu nome é: %s.", nome);    //mostra para o usuario seu nome
    }

int main(){

    questao7();

    return 0;
}