#include <stdio.h>

//modo 1
int soma(int parcela1, int parcela2){
    return (parcela1 + parcela2);
}


int main(void) {
    int a = 10, b = 20;
  
    printf("O resultado da soma de %d e %d = %d\n", a, b, soma(a, b));

    subtracao(a, b);


    return 0;
}

void subtracao(int parcela1, int parcela2){
    printf("O resultado da subtracao de %d e %d = %d\n",parcela1, parcela2, parcela1-parcela2);
}

// ******* numero par ou impar *****

