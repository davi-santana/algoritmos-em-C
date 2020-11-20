#include<stdio.h>

void questao19(){
    float  base, altura;
    float areaCalculo, perimetroCalculo, diagonalCalculo;

    printf("\n\nCalcular a area de um retângulo.\n\n ");

    printf("Digite o valor da base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);
     

    printf("\n\nCalcular o perímetro do retângulo.\n\n ");

    printf("Digite a base do retângulo: ");
    scanf("%f", &altura);

    printf("Digite a altura do retângulo ");
    scanf("%f", &altura);

    printf("\n\nCalcular a diagonal do retângulo.\n\n ");

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo ");
    scanf("%f", &altura);


    areaCalculo = base * altura;
    perimetroCalculo = 2 * (base + altura);
    diagonalCalculo = sqrt(pow (base,2) + (pow(altura,2)));

    printf("a area do retângulo é: %0.2f, o perimetro do retângulo é: %0.2f, e a diagonal do retângulo é: %0.2f",areaCalculo, perimetroCalculo, diagonalCalculo);
    }

int main(){

    questao19();

    return 0;
}