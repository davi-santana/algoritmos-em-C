#include <stdio.h>

void tabuadaDiv(){
    int i, cont;
    
    float numero; 
    
    do{
        printf("Digite um  numero inteiro para realizar a tabuada. ");
        scanf("%f", &numero);

        for(i = 1; i <=10; i++) {
            
            printf("\n%0.2f / %d = %0.2f\n", numero, i, numero/i);
            
        }
        printf("Deseja fazer outra operacao? tecle 1 para repetir ou 2 para sair: ");
            scanf("%d", &cont);
    } while (cont == 1);
        
     
}

int main (){

    tabuadaDiv();
    return 0;
}