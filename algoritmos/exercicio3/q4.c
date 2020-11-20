#include <stdio.h>


int pot(int a, int b){

    if (b == 0)
        return 1;
    else 
        return (a * pot(a, b-1));
}

int main (){
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("A potencia de %d e igual a: %d\n", a, (pot(a,b)));


}