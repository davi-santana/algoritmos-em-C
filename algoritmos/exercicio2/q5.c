#include <stdio.h>

void q5(){
    int x, y, altura;

    printf("Digite a altura: ");
    scanf("%d", &altura);
    
    for(x=1; x<altura; x++) {
            
        for(y=0; y<x; y++){
            printf("*");
           
        }
        
         printf("\n");
    }
    
    
}
int main(){

    q5();

    return 0;
}