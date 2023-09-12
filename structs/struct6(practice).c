#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct DISCIPLINA {
    char nome_disciplinas[10];
    float notas[10];
} Disciplinas;

typedef struct ALUNO {
    char nome[80];
    int idade; 
    int matricula;
    int periodo;
    Disciplinas *disciplinas;
} Aluno;

int main() {
	setlocale(LC_ALL, "Portuguese");
    
    int quantidade_alunos;

    printf("Quantos alunos: ");
    scanf("%i", &quantidade_alunos);

    Aluno *var_alunos = (Aluno*)malloc(quantidade_alunos * sizeof(Aluno));

    var_alunos->disciplinas = (Disciplinas*)malloc(quantidade_alunos * sizeof(Disciplinas));

    return 0;
}
