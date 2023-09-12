#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main() {

    int total_funcionarios, contador;

    FILE *arquivo = fopen("funcionarios.txt", "w");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo \n");
        return 1;
    }

    printf("Quantos funcionários: ");
    scanf("%i", &total_funcionarios);

    var_funcionarios(total_funcionarios);
    armazenar(var_funcionarios, total_funcionarios);
    coloca_arquivo(total_funcionarios, contador, var_funcionarios, arquivo);

    fclose(arquivo);
    free(var_funcionarios);

    return 0;
}