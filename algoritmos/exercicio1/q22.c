#include<stdio.h>

void questao22(){
    char nomeCompleto [30];
    printf("\nDigite seu nome completo: ");
    
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

    printf("\nParabéns %svocê aprendeu a utilizar corretamente o PRINTF!\n", nomeCompleto);
}

int main(){

    questao22();

    return 0;
}