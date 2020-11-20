#include <stdio.h>
#include <stdlib.h>

void q2 () {

    int *ponteiro = NULL;
    int count = 20;

    ponteiro = &count;
   
    *ponteiro = 100;

    printf("count: %d\n", count); // %d número inteiro
	printf("*pt: %d\n", *ponteiro);
	printf("pt: \t\t %p\n", ponteiro); // %p endereço de memória
	printf("&count: \t %p\n", &count);
	printf("&pt: \t\t %p\n", &ponteiro); // %p endereço de memória

}

int main (){
    q2 ();
    return 0;
}
