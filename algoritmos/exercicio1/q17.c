#include<stdio.h>

void questao17(){
    int valorDeA;
    int valorDeB;
    int valorDeC;
    int formula;

    printf("Informe o valor de A: ");
    scanf("%i", &valorDeA);

    printf("Informe o valor de B: ");
    scanf("%d", &valorDeB);

    printf("Informe o valor de c: ");
    scanf("%d", &valorDeC);

    formula = pow(valorDeB, 2) - 4 * valorDeA * valorDeC;

    printf("O delta dos valores informados é: %d", formula);
}

int main(){

    questao17();

    return 0;
}