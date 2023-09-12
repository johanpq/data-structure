#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Registro {
	char nome[80];
	int documento;
	int idade;
} registro;

void Usuario(int pessoas, registro **Ponteiro) {
	int contador;
	
	for(contador = 0; contador < pessoas; contador++) {
		
		printf("Digite seu nome %i: ", contador + 1);
		scanf(" %[^\n]", &Ponteiro[contador]->nome);
		
		printf("Documento %i: ", contador + 1);
		scanf("%i", &Ponteiro[contador]->documento);
	}
	
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int pessoas;
	
	printf("Quantas pessoas? ");
	scanf("%i", &pessoas);
	
	registro **Ponteiro = (registro**)malloc(pessoas * sizeof(registro*));
	
	if (Ponteiro == NULL) {
		printf("Erro na alocacao! \n");
		return 1;
	} else {
		printf("Alocado! \n");
	}
	
	Usuario(pessoas, Ponteiro);
	
	return 0;
}
