#include<stdio.h>
#include<math.h>

void questao9(){
        int numero1;
        int numero2;
        int soma;
        float raizQ;

        printf("Escreva um numero: ");
        scanf("%d", &numero1);
        
        printf("Escreva outro numero: ");
        scanf("%d", &numero2);
        
        soma = pow(numero1, 2) + pow(numero2, 2);
        
        raizQ = sqrt(soma);
        printf("O teorema de pitagoras dos numeros apresentados é: %f ", raizQ);
    }

int main(){

    questao9();

    return 0;
}