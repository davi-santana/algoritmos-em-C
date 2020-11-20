#include<stdio.h>

void questao14(){
    float salario;
       float aumento;
       float novoSalario;
       

       printf("\nInforme o saldo da sua conta poupança: ");
       scanf("%f", &salario);

        if (novoSalario <= 1000){

            aumento = (salario) * 20 / 100;
            novoSalario = salario + aumento;

        printf("\nSeu novo saldo é: %.2f\n", novoSalario);

        } else if (novoSalario >= 1000){

            aumento =  (salario) * 10 / 100;
            novoSalario = salario + aumento;

        printf("Novo sálario: %.2f\n", novoSalario);
        }
}

int main(){

    questao14();

    return 0;
}