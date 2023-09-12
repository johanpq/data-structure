#include <stdio.h>
#include <stdlib.h>

typedef struct alunos {
    char nome[50];
    float nota1, nota2, nota3;
} Alunos;


//função para armazenar os valores nas variáveis
void ler(Alunos *var_alunos, int total_alunos);

void coloca_arquivo(int total_alunos, int contador, FILE *arquivo, Alunos *var_alunos);
