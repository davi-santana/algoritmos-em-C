#include <stdio.h>

void q5(){
    int x, y, altura, cont;
    
    

    printf("Digite um número de 1 a 20: ");
    scanf("%d", &altura);
    
    do{
        if(altura <=20){
            for(x=0; x<=altura; x++) {
                    
                for(y=0; y<x; y++){
                    printf("*");
                    
                }
                printf("\n"); 
                
            } 
                
            
           
        }  if (altura<=0) {
            printf("\no número informado e menor ou igual a 0:\n ");
            printf("deseja tentar novamente? digite 1 para sim ou 2 para não.  ");
            scanf("%d %d", &x, &cont);
            
            
        } else if (altura>20) {
            printf("numero maior que 20. ");
        }
        
        continue;
    }  while (cont == 1);

    
    
}
int main(){

    q5();

    return 0;
}