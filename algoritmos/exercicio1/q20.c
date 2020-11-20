#include<stdio.h>

void questao20(){
    float salario, aumento ,novoSalario;
   
    printf("\nDigite seu sálario: ");
    scanf("%f", &salario);

    aumento = (salario) * 10 / 100;
    novoSalario = aumento + salario;

    printf("o valor do seu salário anterior era: %0.2fR$, O valor do seu novo salário é: R$%0.2fR$\n\n", salario, novoSalario);
}

int main(){

   questao20();
   return 0;
}