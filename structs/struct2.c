#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct pessoa {
    char nome[20];
    int idade;
    int matricula;
}Pessoa;

int main() {
	setlocale(LC_ALL, "Portuguese");

    Pessoa var_pessoas[3];

    int contador;   

    for(contador = 0; contador < 3; contador++) {
    	printf("Digite seu nome: ");
    	scanf("%s", &var_pessoas[contador].nome);
    	printf("Digite sua idade: ");
    	scanf("%i", &var_pessoas[contador].idade);
    	printf("Digite sua matricula: ");
    	scanf("%i", &var_pessoas[contador].matricula);
    }

    for(contador = 0; contador < 3; contador++) {
        printf("Nome: %s \n Idade: %i, Matricula: %i", var_pessoas[contador].nome, var_pessoas[contador].idade, var_pessoas[contador].matricula);
        printf("\n");
    }
 


    return 0;
}
