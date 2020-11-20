#include<stdio.h>

void questao21(){
    float gasolina, alcool, conta;

    printf("Informe o valor da gasolina: ");
    scanf("%f", &gasolina);

    printf("Informe o valor do álcool: ");
    scanf("%f", &alcool);

    conta = gasolina * 0.7;

    if (conta > alcool){
        printf("Abastecer com Ácool\n");
    } else if(conta <= alcool) {
        printf("Abastecer com Gasolina\n");
    }
}

int main(){

    questao21();

    return 0;
}