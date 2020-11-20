#include <stdio.h>

void tabuada(){
    int i;
    float numero;
    
    
        printf("Digite um  numero para realizar a tabuada da divisão ");
        scanf("%f", &numero);

        for(i = 1; i <=10; i++) {
            
            printf("\n%0.2f ÷ %d = %0.2f\n", numero, i, numero/i);
            
        }
     
        
     
}

int main (){

    tabuada();
    return 0;
}