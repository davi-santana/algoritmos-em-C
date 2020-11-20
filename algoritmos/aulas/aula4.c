#include <stdio.h>
#include <stdlib.h>

void exemploWhile() {
	int count = 0;

	while (count < 0) {
		printf("Estruturas de repetição facilitam muito a minha vida, somenteassim eu conseguiria imprimir esta frase”\n", count+1);
		count++;
	}
}

/*int exemploFor(){

	int count;

	for (count = 1; count <= 20; count++) {
		printf("%i, ", count);
	}

	return count;*/
//}



int main(void) {

	exemploWhile();

	/*int result = exemploFor();

	printf("\n\nFim do exemplo %d\n\n", result);

	return EXIT_SUCCESS;*/
	return 0;
}