#include <stdio.h>
#include <stdlib.h>

//Constantes utilizadas para tabalhar com arrays e matrizes
#define PESSOAS 20
#define QTD_NOTAS 5
#define QTD_AVALIACOES 2

// Limpa o fluxo de entrada de dados para evitar a falha ao ler um caracter.
void limparEntradaDeDados() {
	int ch;
	while ((ch = fgetc(stdin)) != EOF && ch != '\n') {
	}
}


void mediaIdadePorSexo() {
	char sexo;
	int idade;
	int idadeAcumulado;
	double mediaMasculino;
	double mediaFeminino;
	int contMasculino = 0;
	int contFeminino = 0;

	idadeAcumulado = 0;
	mediaMasculino = 0;
	mediaFeminino = 0;
	printf("\n\n");

	for (int i = 0; i < PESSOAS; i++) {
		printf("\nPor favor, informe o %2iª idade: ", (i + 1));
		scanf("%i", &idade);
		limparEntradaDeDados();

		printf("\nPor favor, informe o sexo\n(M)asculino (F)eminino:");
		scanf("%c", &sexo);
		limparEntradaDeDados();

		if (sexo == 'f' || sexo == 'F') {
			printf("Sexo Feminino\n");
			contFeminino++; // contFeminino += 1 || contFeminino = contFeminino + 1
			mediaFeminino += idade;
		} else if (sexo == 'm' || sexo == 'M') {
			printf("Sexo Masculino\n");
			contMasculino += 1;
			mediaMasculino = mediaMasculino + idade;
		} else {
			printf("O sexo informado é inválido\n\n");
		}
	} // Fim do for

	printf("\n\n");

	printf("Resultado:\n");

	printf("Foram contadas %2i mulheres e a média de idade é: %2.2lf", contFeminino,
			(mediaFeminino / contFeminino));

	printf("\nForam contadas %2i Homens  e a média de idade é: %2.2lf", contMasculino,
			(mediaMasculino / contMasculino));
	


	printf("\n\nFim...");

}


int main(void) {
	mediaIdadePorSexo();

//	printf("\nNúmero: %d", trabalhandoComEnderecoDeMemoria());

//	manipulandoArray();

//	trabalhandoComMatrizes();

	return EXIT_SUCCESS;
}