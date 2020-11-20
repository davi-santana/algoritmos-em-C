#include <stdio.h>
#include <locale.h>


int main (){
    int i;
    char frase[120] = "Estruturas de repetição facilitam muito a minha vida, somente assim eu conseguiria imprimir esta frase" ;
    
    for(i=0; i<=104;  i++){
        printf("\n%c ", frase[i]);
         
    }
  
    return 0; 
}