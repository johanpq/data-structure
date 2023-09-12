#include <stdio.h>
#include <stdlib.h>

typedef struct funcionarios {
    int ID;
    char nome[50];
    float salario;
} Funcionarios;

//função para armazenar os valores nas variáveis
void armazenar(Funcionarios *var_funcionarios, int total_funcionarios); 

//função para colocar os valores armazenados no arquivo
void coloca_arquivo(int total_funcionarios, int contador, Funcionarios *var_funcionarios, FILE *arquivo);
