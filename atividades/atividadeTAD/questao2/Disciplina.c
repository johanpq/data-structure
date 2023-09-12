#include "Disciplina.h"

struct disciplina {
    char nome[100];
    int codigo;
};

Disciplina *Cria_Disciplina(char *nome, int codigo) {
    Disciplina *disciplinas = (Disciplina*)malloc(sizeof(Disciplina));
    if(disciplinas == NULL) {
        printf("Erro na alocacao! \n");
        exit(1);
    }

    strcpy(disciplinas->nome, nome); //copiar string
    disciplinas->codigo = codigo;

    return disciplinas;
    printf("Disciplina criada com sucesso! \n");
}

void ExcluiDisciplina(Disciplina *disciplinas) {
    free(disciplinas);
    printf("Disciplina excluida! \n");
}