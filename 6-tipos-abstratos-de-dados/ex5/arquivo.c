#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"

void ler(Alunos *var_alunos, int total_alunos) {
    int contador;

    for(contador = 0; contador < total_alunos; contador++) {
        printf("Digite o nome do aluno %i: ", contador + 1);
        scanf(" %[^\n]", var_alunos[contador].nome);
        getchar();
        printf("Digite as três notas do aluno %i: ", contador + 1);
        scanf("%f %f %f", &var_alunos[contador].nota1, &var_alunos[contador].nota2, &var_alunos[contador].nota3);
    }
}

void coloca_arquivo(int total_alunos, int contador, FILE *arquivo, Alunos *var_alunos) {
        for(contador = 0; contador < total_alunos; contador++) {
        fprintf(arquivo, "Nome %i: %s \n", contador + 1, var_alunos[contador].nome); //tentando armazenar no arquivo 1 por 1
        fprintf(arquivo, "Nota 1: %.f \n", var_alunos[contador].nota1);
        fprintf(arquivo, "Nota 2: %.f \n", var_alunos[contador].nota2);
        fprintf(arquivo, "Nota 3: %.f \n", var_alunos[contador].nota3);
    }
}
