#include<stdio.h>

void questao12(){
    float numero1;
    float numero2;
    float numero3;
    float resultado;

    printf("\n Digite um número inteiro: ");
    scanf("%f", &numero1);
    
    printf("\n Digite um segundo numero inteiro: ");
    scanf("%f", &numero2);

    printf("\nDigite o terceiro numero inteiro ");
    scanf("%f", &numero3);

    resultado = numero1 + numero2 + numero3;

    if(resultado > 25){
        printf("A soma dos números é: %0.2f, e ele e maior que 25\n", resultado);

    } else if(resultado < 25){
        printf("\nA soma dos números é: %0.2f, e ela e menor do que 25\n", resultado);
    } else {
        printf("\nA soma dos números é %0.2f\n", resultado);
    }  
    }

int main(){

    questao12();

    return 0;
}