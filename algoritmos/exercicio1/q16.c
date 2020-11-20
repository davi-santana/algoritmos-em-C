#include<stdio.h>

void questao16(){
    char nome[30]; 
   float numero1;
    float numero2;
    
    printf("\nDigite um número: ");
    scanf("%f", &numero1);

    printf("\nDigite outro número ");
    scanf("%f", &numero2);

    if(numero1 > numero2){
        printf("\nO número %0.2f é o maior, e o número %0.2f é o menor ", numero1, numero2);
    } else if (numero1 < numero2){
        printf("\nO número %0.2f é o menor, e o número %0.2f é o maior ", numero1, numero2);
    } else {
        printf("\nOs números são iguais ");
    }
  
}

int main(){

    questao16();

    return 0;
}