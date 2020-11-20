#include <stdio.h>

void tabuada(){
    int i, numero, cont;
    
    do{
        printf("Digite um  numero inteiro para realizar a tabuada. ");
        scanf("%d", &numero);

        for(i = 1; i <=10; i++) {
            
            printf("\n%d x %d = %d\n", numero, i, numero*i);
            
        }
        printf("Deseja fazer outra operação? tecle 1 para ou 2 para não");
            scanf("%d", &cont);
    } while (cont == 1);
        
     
}

int main (){

    tabuada();
    return 0;
}