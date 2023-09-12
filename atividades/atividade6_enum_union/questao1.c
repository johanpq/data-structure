#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef enum genero {Masculino = 1, Feminino} Genero;

typedef struct Pessoa {
	char nome[50];
	int idade;
	Genero genero_enum;
} registro;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	registro Registro;
	
	printf("Digite seu nome: ");
	scanf(" %[^\n]", &Registro.nome);
	
	printf("Digite sua idade: ");
	scanf("%i", &Registro.idade);
	
	printf("Digite seu genero: 1.Masculino | 2.Feminino: ");
	scanf("%i", &Registro.genero_enum);
	
	if(Registro.genero_enum == Masculino) {
		printf("Nome: %s \n", Registro.nome);
		printf("Idade: %i \n", Registro.idade);
		printf("Genero: Masculino \n");
	} else if(Registro.genero_enum == Feminino){
		printf("Nome: %s \n", Registro.nome);
		printf("Idade: %i \n", Registro.idade);
		printf("Genero: Feminino \n");
	} else {
		printf("Erro \n");
	}
	
	return 0;
}
