#include<stdio.h>

void questao13(){
    int contador;
    float produto;
    float dinheiro;
    float troco;

    do{
        printf("\nColoque o valor do seu produto! ");
        scanf("%f", &produto);
          

        printf("Coloque o valor do pagamento do produto escolhido:");
        scanf("%f", &dinheiro);
        troco = dinheiro - produto;

        if (dinheiro >= produto){

            printf("\nPagamento efetuado com sucesso\n");
            printf("\nO valor do produto é R$%0.2f, O dinheiro entregue é: R$%0.2f,  e o seu troco é R$%0.2f\n", produto, dinheiro, troco);
            printf("Digite 1 para realizar outra compra ou 2 para sair\n");
            scanf("%d", &contador);

        } else if (dinheiro < produto){
               printf("\n\nFaltam %0.2fR$ do seu pagamento, Deseja tentar novamente?\nDigite 1 para sim ou 2 para cancelar a compra.\n", troco *-1);
               scanf("%d", &contador);
               }
     } while (contador == 1);
}

int main(){

    questao13();

    return 0;
}