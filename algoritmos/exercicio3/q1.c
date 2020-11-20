#include <stdio.h>

int compara(int numero1, int numero2){
    if (numero1 == numero2)
        return numero1;
    else 
        return 0;
}


int main(void){
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d",&num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    if (compara(num1, num2)){
        printf("1"); 
    }

   else 
        printf("0");

    return compara;
}