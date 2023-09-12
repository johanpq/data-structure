#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/*Crie um programa em C que leia um n´umero inteiro positivo n do usu´ario e aloque dinamicamente
	mem´oria para armazenar uma matriz quadrada de ordem n. Preencha essa matriz com n´umeros
	aleat´orios entre 1 e 100, e em seguida, exiba a matriz resultante.*/
	
	int n;
	
	printf("Digite n: ");
	scanf("%i", &n);
	
	int **matriz = (int**)malloc(n * sizeof(int));
	
	if(matriz == NULL) {
		printf("Erro na alocacao! \n");
		return 1;
	} else {
		printf("Alocado com sucesso! \n");
	}
	
	for(int c = 0; c < n; c++) {
		matriz[c] = (int*)malloc(n * sizeof(int));
		if(matriz == NULL) {
		printf("Erro na alocacao! \n");
		return 1;
	} else {
		printf("Alocado com sucesso! \n");
	}
	}
	for(int c = 0; c < n; c++) {
		for(int j = 0; j < n; j++) {
			printf("Digite o numero da linha %i e da coluna %i: \n", c, j);
			scanf("%i", &matriz[c][j]);
		}
	}
	for(int c = 0; c < n; c++) {
		for(int j = 0; j < n; j++) {
			printf("%i", matriz[c][j]);
		}
		puts("\n");
	}
	for(int c =0; c < n; c++) {
		free(matriz[c]);
	}
	free(matriz);
	
	return 0;
}
