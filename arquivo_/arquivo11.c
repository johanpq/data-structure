#include <stdio.h>
#include <stdlib.h>

typedef struct alunos {
    char nome[50];
    float nota1, nota2, nota3;
} Alunos;

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

int main() {

    int total_alunos, contador;

    printf("Digite o total de alunos: ");
    scanf("%i", &total_alunos);

    Alunos *var_alunos = (Alunos*)malloc(total_alunos * sizeof(Alunos));

    ler(var_alunos, total_alunos);

    FILE *arquivo = fopen("alunos.txt", "w");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo! \n");
        return 1;
    }

    for(contador = 0; contador < total_alunos; contador++) {
        fprintf(arquivo, "Nome %i: %s \n", contador + 1, var_alunos[contador].nome); //tentando armazenar no arquivo 1 por 1
        fprintf(arquivo, "Nota 1: %.f \n", var_alunos[contador].nota1);
        fprintf(arquivo, "Nota 2: %.f \n", var_alunos[contador].nota2);
        fprintf(arquivo, "Nota 3: %.f \n", var_alunos[contador].nota3);
    }

    fclose(arquivo);
    free(var_alunos);

    return 0;
}
