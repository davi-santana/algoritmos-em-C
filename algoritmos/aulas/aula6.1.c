 #include <stdio.h>

int ehPar(int numero){
    if (numero %2 == 0)
        return 1;

    else 
        return 0;
    
}

int main(void){
    int par = 0;

    printf("Por Favor, Informe um número para  saber se ele é par ou ímpar: ");
    scanf("%d",&par);

    if (ehPar(par))
        printf("O número %d é par\n",par);
    else 
        printf("o numero %d é impar\n",par);
  }
