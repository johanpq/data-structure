#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct pessoa {
    char nome[20];
    int idade;
    int RG;
    float altura;
}Pessoa;

int main() {
	setlocale(LC_ALL, "Portuguese");

    Pessoa var_pessoa;
    
    printf("Digite seu nome: ");
    scanf(" %s", var_pessoa.nome);
    
    printf("Digite sua idade: ");
    scanf("%i", &var_pessoa.idade);
    
    printf("Digite seu RG: ");
    scanf("%i", &var_pessoa.RG);
    
    printf("Digite sua altura: ");
    scanf("%f", &var_pessoa.altura);
    
    printf("Nome: %s \n Idade: %i \n RG: %i \n Altura: %.1f", var_pessoa.nome, var_pessoa.idade, var_pessoa.RG, var_pessoa.altura);
 


    return 0;
}
