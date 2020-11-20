#include<stdio.h>
#include<math.h>

void questao10(){
    int numeroAoQuadrado;
    int elevar;

    printf("\n Calcular o quadrado de um número: ");
            
    printf("Informe um número para que ele seja elevado ao quadrado.");
    scanf("%d", &numeroAoQuadrado);

    elevar = pow(numeroAoQuadrado,2);

    printf("O número %d ao quadrado é: %d", numeroAoQuadrado, elevar);

}


int main(){

    questao10();

    return 0;
}