#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//struct e ponteiros

typedef struct aluno {
        char nome[20];
        int idade;
        int matricula;
} Aluno;

int main() {
	setlocale(LC_ALL, "Portuguese");
    
    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));

    printf("Digite o nome: ");
    scanf(" %[^\n]", aluno->nome);
    printf("Digite sua idade: ");
    scanf("%i", &aluno->idade);
    printf("Digite a matricula: ");
    scanf("%i", &aluno->matricula);


//quando a variavel é um ponteiro, troca o ponto pela seta -> para acessar as variaveis no struct

    printf("Nome: %s \n Idade: %i \n Matricula: %i \n", aluno->nome, aluno->idade, aluno->matricula);


    return 0;
}
