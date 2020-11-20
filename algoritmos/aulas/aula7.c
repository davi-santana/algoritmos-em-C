#include <stdio.h>
#include <stdlib.h>

int somaPassagemValor(int a, int b){
    a += b;
    return (a);
}

int somaPassagemReferencia(int*a, int*b){
    *a += *b; //valor da variavel apontada pelo ponteiro
    return (*a);
}

int main (void){
    int x, y, r;

    x = 10;
    y = 35;

    r = somaPassagemValor(&x, &y);
    printf("x = %i, y  = %i \n", x, y, r);

    r = somaPassagemReferencia(&x, &y);
    printf("x = %i, y = %i, r + %i \n"), x, y,r);
    return EXIT_SUCCESS;
}

