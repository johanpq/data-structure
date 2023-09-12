#include <stdio.h>
#include <stdlib.h>
//#include "funcao.h" //nao funciona
#include "funcao.h" //aqui funciona 

Funcionarios *var_funcionarios(int total_funcionarios) {
    Funcionarios *var_funcionarios = (Funcionarios*)malloc(total_funcionarios * sizeof(Funcionarios));
}

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

void coloca_arquivo(int total_funcionarios, int contador, Funcionarios *var_funcionarios, FILE *arquivo) {

    for(contador = 0; contador < total_funcionarios; contador++) {
        
        fprintf(arquivo, "%i \n", var_funcionarios[contador].ID);
        fprintf(arquivo, "%s \n", var_funcionarios[contador].nome);
        fprintf(arquivo, "%f \n", var_funcionarios[contador].salario);
    }
}
