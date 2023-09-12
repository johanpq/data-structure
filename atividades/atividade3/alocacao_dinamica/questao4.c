#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	/*Vocˆe foi contratado para desenvolver um programa em C que permita armazenar nomes completos
	e idades de v´arias pessoas. O programa deve solicitar ao usu´ario o n´umero de pessoas e, em seguida,
	permitir que ele digite o nome completo e a idade de cada pessoa.
	Seu programa deve alocar mem´oria dinamicamente para armazenar os nomes em uma matriz de
	strings, e as idades devem ser armazenadas em um vetor. Ap´os a entrada de todos os nomes e idades,
	o programa deve exibir os nomes armazenados.
	Aqui est˜ao as especifica¸c˜oes do programa:
	– O programa deve come¸car solicitando ao usu´ario o n´umero de pessoas que deseja armazenar.
	– Em seguida, o programa deve pedir ao usu´ario que digite o nome completo de cada pessoa.
	– Os nomes devem ser armazenados em uma matriz alocada dinamicamente.
	– Ap´os o nome, o programa deve solicitar a idade da pessoa.
	– As idades devem ser armazenadas em um vetor alocado dinamicamente.
	– Ap´os a entrada de todos os nomes e idades, o programa deve exibir os nomes armazenados.
	– Certifique-se de tratar adequadamente a aloca¸c˜ao dinˆamica de mem´oria e liberar a mem´oria
	alocada corretamente ap´os o uso.
	Observa¸c˜ao: O programa deve ser capaz de armazenar at´e 100 nomes completos.
	*/
	
	int quantidade_pessoas;
	
	printf("Digite a quantidade de pessoas: ");
	scanf("%i", &quantidade_pessoas);
	getchar(); // Limpar o caractere de nova linha deixado pelo scanf
	
	char **matriz_nomes = (char**)malloc(quantidade_pessoas * sizeof(char*));
	int *idade = (int*)malloc(quantidade_pessoas * sizeof(int));
	
	if(matriz_nomes == NULL && idade == NULL) {
		printf("Alocacao não realizada! \n");
		return 1;
	} else {
		printf("Alocacao realizada! \n");
	}
	
	
	for(int c = 0; c < quantidade_pessoas; c++) {
		matriz_nomes[c] = (char*)malloc(100 * sizeof(char));
		
		if(matriz_nomes == NULL) {
		printf("Alocacao não realizada! \n");
		return 1;
		} else {
		printf("Alocacao realizada! \n");
		}
	}
	for(int c = 0; c < quantidade_pessoas; c++) {
		printf("Digite o nome da pessoa %i: ", c + 1);
		fgets(matriz_nomes[c], 100, stdin); //ler até espaços 
		printf("Digite a idade da pessoa %i: ", c + 1);
		scanf("%i", &idade[c]);
		getchar(); //apaga o buffer de memoria que o scanf deixa pra nao dar erro ao voltar o loop para ler a matriz.
	}
	
	for(int c = 0; c < quantidade_pessoas; c++) {
		printf(" %s\t", matriz_nomes[c]);
		printf("%i", idade[c]);
		printf("\n");
	}
	
	for(int c = 0; c < quantidade_pessoas; c++) {
		free(matriz_nomes[c]);
	}
	free(matriz_nomes);
	free(idade);
	
	
	
	return 0;
}
