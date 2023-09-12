#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"

int main() {

    int total_alunos, contador;

    printf("Digite o total de alunos: ");
    scanf("%i", &total_alunos);

    Alunos *var_alunos = (Alunos*)malloc(total_alunos * sizeof(Alunos));
    if (var_alunos == NULL) {
        printf("Nao foi possivel alocar na memoria! \n");
        return 1;
    }

    ler(var_alunos, total_alunos);

    FILE *arquivo = fopen("alunos.txt", "w");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo! \n");
        return 1;
    }

    fclose(arquivo);
    free(var_alunos);

    return 0;
}
