#include<stdio.h>

void questao8(){
        int numero; 

        //informação para o usuario digitar um numero
        printf("\nInsira um numero e descubra se ele é um número positivo ou negativo\n\n"); 

        printf("Digite um número: ");
        scanf("%d", &numero);

        if(numero > 0){ 
            printf("\nO número %d é  positivo.\n\n", numero);

        } else if(numero < 0) {  
            printf("\nO número %d é  negativo.\n\n", numero);

        } else {
            printf("\nO número %d é um nulo\n55", numero);
        }
    }

int main(){

    questao8();

    return 0;
}