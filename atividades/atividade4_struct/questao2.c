#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Registro {
	char nome[80];
	int documento;
	int idade;
} registro;

void Usuario(int pessoas, registro *Ponteiro);

void show(int pessoas, registro *Ponteiro);

void mudar_idade(int pessoas, registro *Ponteiro);

void mais_velho_e_menos_velho(int pessoas, registro *Ponteiro);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int pessoas;
	
	printf("Quantas pessoas? ");
	scanf("%i", &pessoas);
	
	registro *Ponteiro = (registro*)malloc(pessoas * sizeof(registro));
	
	if (Ponteiro == NULL) {
		printf("Erro na alocacao! \n");
		return 1;
	} else {
		printf("Alocado! \n");
	}
	
	Usuario(pessoas, Ponteiro);
	
	show(pessoas, Ponteiro);
	
	mudar_idade(pessoas, Ponteiro);
	
	mais_velho_e_menos_velho(pessoas, Ponteiro);
	
	free(Ponteiro);
	
	return 0;
}


