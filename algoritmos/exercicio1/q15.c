#include<stdio.h>

void questao15(){
    float a;
    float b;
    float c;
    float resultado;

    printf("Calcule a regra de 3 simples do que desejar\n");

    printf("Digite o valor de a ");
    scanf("%f", &a);

    printf("Digite o valor de b ");
    scanf("%f", &b);

    printf("Digite o valor do c ");
    scanf("%f", &c);

    resultado = (a * b) / c;

    printf("O resultado da regra de 3 é: %0.2f", resultado);   
}

int main(){

    questao15();

    return 0;
}