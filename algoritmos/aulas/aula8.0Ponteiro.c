#include <stdio.h>
#include <stdlib.h>

// declarando ponteiro

int main(){

    //Declaracão das variáveis

    int numero;
    int pNumero; // ponteiro

    // inicializando as variáveis
    numero = 10;
    pNumero = &numero;

    printf("Variável \t| valor \t| endereço\n");
    printf("Numero \t\t| %d \t \t| %p\n", numero, &numero);
    printf("pNumero \t| %p \t| %p\n", pNumero, &pNumero);

    return 0;
}
//