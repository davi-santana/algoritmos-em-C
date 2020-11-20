/*
 ============================================================================
 Name        : Aula2809.c
 Author      : Fabricio Valadares
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Constantes utilizadas para tabalhar com arrays e matrizes
#define PESSOAS 3
#define QTD_NOTAS 4
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

	printf("\n\nFim...");

}

int trabalhandoComEnderecoDeMemoria(){

	int numero;

	printf("\nPor favor, informe um número: ");
	scanf("%i", &numero);

	printf("\n\n");

	printf("O número informado foi: %d\n", numero);
	printf("O endereço de memória da variável é: %p", &numero);

	return numero;
}


void manipulandoArray() {
	int j; // index
	double notas[QTD_NOTAS]; // array de notas (vetor de notas)
	double media = 0;

	// Inserção de dados:
	for ( j = 0; j < QTD_NOTAS; j++ ){
		printf("\nInserir a nota %i: ", j+1);
		scanf("%lf", &notas[j]);
	}

	// Visualização dos dados:
	printf("\n\nNotas inseridas: \n");
	for ( j = 0; j < QTD_NOTAS; j++ ){
		printf("%.2lf\n", notas[j]);
	}


	// Visualização do endereço de memória:
	printf("\n\nNotas inseridas: \n");
	for ( j = 0; j < QTD_NOTAS; j++ ){
		printf("%p\n", &notas[j]);
	}

	printf("\n\nMedia das notas: \n");
	for ( j = 0; j < QTD_NOTAS; j++ ){
		media += notas[j];
	} 
	printf("%2.2lf", media/j);
}

void trabalhandoComMatrizes(){
	double notas[QTD_AVALIACOES][QTD_NOTAS];

	// Primeiro for controla as linhas
	for (int i = 0; i < QTD_AVALIACOES; i ++ ) {
		// Segundo for controla as colunas
		for (int j = 0; j < QTD_NOTAS; j++ ) {
			printf("\nInforme a nota do aluno %2d, na oficial %d: ", j+1, i+1);
			scanf("%lf", &notas[i][j]);
		}
	}


	// Primeiro for controla as linhas
	for (int i = 0; i < QTD_AVALIACOES; i ++ ) {
		printf("Oficial %d\t", i+1);
		// Segundo for controla as colunas
		for (int j = 0; j < QTD_NOTAS; j++ ) {
			printf("%2.2lf\t", notas[i][j]);
		}
		printf("\n");
	}
}

// Retire abaixo o comentário da função que deseja executar.
int main(void) {
	//mediaIdadePorSexo();

	//printf("\nNúmero: %d", trabalhandoComEnderecoDeMemoria());

	manipulandoArray();

	//trabalhandoComMatrizes();

	return EXIT_SUCCESS;
}

