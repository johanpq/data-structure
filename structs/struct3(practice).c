#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Disciplina {
    char nome_disciplina[20];
    float nota;
} disciplina;

typedef struct Aluno {
    char nome[20];
    int idade;
    int matricula;
    disciplina *Disciplina;
} aluno;

int main() {
	setlocale(LC_ALL, "Portuguese");
    
    int qnt_alunos, contador;

    printf("Quantos alunos: ");
    scanf("%i", &qnt_alunos);

    aluno *var_aluno = (aluno*)malloc(qnt_alunos * sizeof(aluno));    // declaracao dos tipos de ponteiro e a quantidade, coloca o nome da struct renomeada

    var_aluno->Disciplina = (disciplina*)malloc(qnt_alunos * sizeof(disciplina)); //criando um vetor para a struct Disciplina atraves do ponteiro criado na struct Aluno


    if(var_aluno == NULL && var_aluno->Disciplina == NULL) {
        printf("Sem memoria \n");
    } else {
        printf("Alocado! \n");
    }

    for (contador = 0; contador < qnt_alunos; contador++) {
        printf("Nome do aluno %i: ", contador + 1);
        scanf(" %[^\n]", var_aluno[contador].nome);

        printf("Idade do aluno %i: ", contador + 1);
        scanf("%i", &var_aluno[contador].idade);

        printf("Número da matricula do aluno %i: ", contador + 1);
        scanf("%i", &var_aluno[contador].matricula);

        printf("Nome da discipina %i: ", contador + 1);
        scanf(" %s", var_aluno->Disciplina[contador].nome_disciplina);

        printf("Nota do aluno %i: ", contador + 1);
        scanf("%f", &var_aluno->Disciplina[contador].nota);
    }

    printf("\n");

    for(contador = 0; contador < qnt_alunos; contador++) {
        printf("Nome %i: %s\n", contador + 1, var_aluno[contador].nome);
        printf("Idade %i: %i\n", contador + 1, var_aluno[contador].idade);
        printf("Matricula %i: %i\n", contador + 1, var_aluno[contador].matricula);
        printf("=============================================================\n");
    }

    free(var_aluno);
    free(var_aluno->Disciplina);

    return 0;
}
