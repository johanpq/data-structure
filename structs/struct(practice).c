#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Aluno {
    char nome[20];
    int idade;
    int matricula;
} aluno;

int main() {
	setlocale(LC_ALL, "Portuguese");
    
    int qnt_alunos, contador;

    printf("Quantos alunos: ");
    scanf("%i", &qnt_alunos);

    aluno var_aluno[qnt_alunos];

    for (contador = 0; contador < qnt_alunos; contador++) {
        printf("Nome do aluno %i: ", contador + 1);
        scanf(" %[^\n]", var_aluno[contador].nome);

        printf("Idade do aluno %i: ", contador + 1);
        scanf("%i", &var_aluno[contador].idade);

        printf("Número da matricula do aluno %i: ", contador + 1);
        scanf("%i", &var_aluno[contador].matricula);
    }

    for(contador = 0; contador < qnt_alunos; contador++) {
        printf("Nome %i: %s\n\n", contador + 1, var_aluno[contador].nome);
        printf("Idade %i: %i\n", contador + 1, var_aluno[contador].idade);
        printf("Matricula %i: %i\n", contador + 1, var_aluno[contador].matricula);
    }

    return 0;
}
