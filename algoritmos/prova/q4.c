#include<stdio.h>

#define QTD_NOTAS 4


void q4 (){
 
    int i=7;
    float notas, media, total;

    for (i=0; i < 4; i++){
        printf("\nInserir a nota %i (cada questão vale 2.5): ", i+1);
		scanf("%f", &notas);
    }

    total = 10;

    if (notas > 6.9){
        printf("ALuno aprovado");
       
	} else if (notas < 4 ){
        printf("Aluno reprovado");
    } 

}

int main (){

    q4();
    return 0;
}