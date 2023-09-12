#include <stdio.h>
#include <stdlib.h>

typedef struct funcionarios {
    int ID;
    char nome[50];
    float salario;
} Funcionarios;

void armazenar(Funcionarios *var_funcionarios, int total_funcionarios) {
    
    int contador;

    for(contador = 0; contador < total_funcionarios; contador++) {
        printf("Digite seu ID |1. A| 2. B|: ");
        scanf("%i", &var_funcionarios[contador].ID);

        printf("Digite seu nome %i: ", contador + 1);
        scanf(" %[^\n]", var_funcionarios[contador].nome);

        printf("Digite seu salário %i: ", contador + 1);
        scanf("%f", &var_funcionarios[contador].salario);

        getchar();        
    }
}

/*void imprimir(Funcionarios *var_funcionarios, int total_funcionarios) {
    
    int contador;

    for(contador = 0; contador < total_funcionarios; contador++) {
        printf("ID %i: %i \n", contador + 1, var_funcionarios[contador].ID);
        printf("Nome %i: %s \n", contador + 1, var_funcionarios[contador].nome);
    }
}
*/
int main() {

    FILE *arquivo = fopen("funcionarios.txt", "w");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo \n");
        return 1;
    }


    int total_funcionarios, contador;

    Funcionarios *var_funcionarios = (Funcionarios*)malloc(total_funcionarios * sizeof(Funcionarios));

    printf("Quantos funcionários: ");
    scanf("%i", &total_funcionarios);

    armazenar(var_funcionarios, total_funcionarios);

    for(contador = 0; contador < total_funcionarios; contador++) {
        fprintf(arquivo, "%i \n", var_funcionarios[contador].ID);
        fprintf(arquivo, "%s \n", var_funcionarios[contador].nome);
        fprintf(arquivo, "%f \n", var_funcionarios[contador].salario);
    }



   // imprimir(var_funcionarios, total_funcionarios);

    fclose(arquivo);
    free(var_funcionarios);

    return 0;
}