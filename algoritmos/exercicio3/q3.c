#include <stdio.h>

float leia(float n1, float n2, float n3, float n4, float n5) {

    float media, res;
    media = 5 / ((1/n1) + (1/n2) + (1/n3) + (1/n4) + (1/n5));
    
    return media;
}

int main (){
    int num1, num2, num3, num4, num5; 
    float resultado;

    printf("Digite o numero 1: ");
    scanf("%i", &num1);

    printf("Digite o numero 2: ");
    scanf("%i", &num2);

    printf("Digite o numero 3: ");
    scanf("%i", &num3);
    
    printf("Digite o numero 4: ");
    scanf("%i", &num4);
    
    printf("Digite o numero 5: ");
    scanf("%i", &num5);
    

    resultado = leia(num1, num2, num3, num4, num5);

    printf("A media harmonica é: %0.2f ", resultado);

    return 0;
    
}