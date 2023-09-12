#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct dados_professor {
	char nome[50];
	char disciplinas[50];
	float regime_trabalho;
} Dados;


void fill(Dados *var_dados) {
	printf("Digite seu nome: ");
	scanf(" %[^\n]", var_dados->nome);
	
	printf("Disciplinas: ");
	scanf(" %[^\n]", var_dados->disciplinas);
	
	printf("Regime do trabalho: ");
	scanf("%f", &var_dados->regime_trabalho);
}

void show(Dados *var_dados) {
	printf("==================== \n");
	printf("Nome: %s \n", var_dados->nome);
	printf("Disciplinas: %s \n", var_dados->disciplinas);
	printf("Regime_trabalho: %.f \n", var_dados->regime_trabalho);
	printf("==================== \n");	
}

void change(Dados *var_dados) {
	var_dados->regime_trabalho = var_dados->regime_trabalho + 10;
	
	printf("Seu regime foi mudado, agora são %.f horas! \n", var_dados->regime_trabalho);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Dados *var_dados = (Dados*)malloc(sizeof(Dados));
	
	fill(var_dados);
	
	show(var_dados);
	
	change(var_dados);
	
	return 0;
}
