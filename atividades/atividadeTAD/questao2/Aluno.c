#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Aluno.h"
#include "Disciplina.h"

struct aluno {
    char nome[50];
    int matricula;
    Disciplina *disciplinas[10];
    int num_disciplinas;
};

Aluno *cria_aluno(char *nome, int matricula) {
    Aluno *alunos = (Aluno*)malloc(5 * sizeof(Aluno));
    if(alunos == NULL) {
        printf("Erro na alocacao! \n");
        exit(1);
    }

    strcpy(alunos->nome, nome); //copiar string
    alunos->matricula = matricula;

    return alunos;
}

void Matricula_Disciplina(Aluno *alunos, Disciplina *disciplinas) {

}

void menu() {
    printf("==========================\n");
    printf("           MENU         \n");
    printf("==========================\n\n");
    printf("CADASTRO MATRICULA ALUNO |1|\n");
    printf("CRIA DISCIPLINA |2| \n");
    printf("CADASTRA ALUNO NA DISCIPLINA |3| \n");
    printf("MOSTRAR DADOS |4|\n");
    printf("EXCLUIR DISCIPLINA |5|\n");
    printf("SAIR |6| \n");
    printf("==========================\n");
}