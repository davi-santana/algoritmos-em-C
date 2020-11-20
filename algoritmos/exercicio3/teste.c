
#include <stdio.h>
int pot(int base, int expoente){
    if(expoente == 0)
        return 1;
    else
        return (base * pot(base, expoente-1));
}

int main(){
    int base, expoente, resultado; 
    
    printf("Digite o valor de a: ");
    scanf("%i", &base);

    printf("Digite o valor de b: ");
    scanf("%i", &expoente);

     resultado = pot(base,expoente);
     printf("%d elevado a %d = %d", base, expoente,resultado);
     return 0;
     }