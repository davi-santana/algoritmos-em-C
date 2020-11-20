#include<stdio.h>

void questao11(){
    float celsius;
    float fahrenheit;

    printf("\n\nTransformar graus Célsius(C) em Fahrenheit (F)\n\n");
    printf("Digite um número para que ele seja convertido: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160)/5;
    printf("\nO numero escolhido foi o %0.2f, e o número convertido em fahrenheit é: %0.2f ",celsius ,fahrenheit);
}
int main(){

    questao11();

    return 0;
}