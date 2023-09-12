#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct pessoa {
    char nome[20];
    int idade;
    int matricula;
}Pessoa;

typedef struct notas {
    float notas;
    float media;
} conta;

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
 
    conta var_contas[3];

    for(contador = 0; contador < 3; contador++) {
        printf("Digite a %i do aluno %s", contador + 1, var_pessoas[contador].nome);
        scanf("%f", &var_contas[contador].notas);
    }
    
    for(contador = 0; contador < 3; contador++) {
        var_contas[contador].media = var_contas[contador].notas / 3;
        
        printf("A media de %s é: %.f", contador + 1, var_contas[contador].media);
    }




    return 0;
}
