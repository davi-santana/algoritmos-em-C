#include<stdio.h>

void questao2(){
    float salario,  credito, saldoCredito;
   
    printf("\nDigite seu saldo médio: ");
    scanf("%f", &salario);

    if (salario <= 500 ) {

        credito = (salario) *  0.5  ;
        saldoCredito = salario + credito;

        printf("\nO cŕedito  pode ser CONCEDIDO!\n");
        printf("\nSaldo médio: R$ %0.2f\n", salario);
        printf("\nValor do cŕedito: R$ %0.2f\n", saldoCredito);

    } else if (salario <= 1000) {

        credito = (salario) *  0.25  ;
        saldoCredito = salario + credito;

        printf("\nO cŕedito  pode ser CONCEDIDO!\n");
        printf("\nSaldo médio: R$ %0.2f\n", salario);
        printf("\nValor do cŕedito: R$ %0.2f\n", saldoCredito);

    } else if (salario <=3000 ) {
        credito = (salario) *  0.20 ;
        saldoCredito = salario + credito;

        
        printf("\nO cŕedito  pode ser CONCEDIDO!\n");
        printf("\nSaldo médio: R$ %0.2f\n", salario);
        printf("\nValor do cŕedito: R$ %0.2f\n", saldoCredito);
    } else {
        printf("\nO cŕedito não pode ser concedido!\n");
        printf("\nSaldo médio: R$ %0.2f\n", salario);
    }

    
}

int main(){

   questao2();
   return 0;
}