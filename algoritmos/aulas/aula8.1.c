#include <stdio.h>
#include <stdlib.h>

// declarando constante

#define NOTAS 4

//Declaração das funções 
void exPonteiro();

// ******* main ******

int main (){
    int notas[NOTAS];
    int *pNotas;

    pNotas = notas ;

    printf("Por favor, informe as notas");
    for (int i = 0; i < NOTAS; i++){
        printf("\nNota % d: ", i+1);
        scanf("%d", &notas[i]);
        }

        printf("\n Notas inseridas");
        for (int i = 0; i < NOTAS; i++){
            printf("\n\tNota % d:  %d\n", i+1, notas[i]);
        }

        printf("-----------------------USANDO PONTEIROS-----------------");
        printf("\n Notas inseridas");
        for (int i = 0; i < NOTAS; i++){
            printf("\n\tNota %d: %d\n", i+1, *pNotas);
            pNotas++;
        }


    return 0;


}