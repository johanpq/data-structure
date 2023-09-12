#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario{
    char nome[50];
    char funcional[2];
    float Salario;
} Funcionario;

void copia_arquivo(FILE *arquivo, int n, Funcionario *Pessoal) {
    Pessoal = (Funcionario*)malloc(n * sizeof(Funcionario));

    for (int contador = 0; contador < n; contador++){
        fscanf(arquivo, "%s", Pessoal[contador].nome);
    }

     for (int contador = 0; contador < n; contador++){
        printf(" %s", Pessoal[contador].nome);
    }
    
}

int main() {

    FILE *arquivo = fopen("funcionarios", "r");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo! \n");
        return 1;
    }

    Funcionario *Pessoal;
    int n;
    char Departamento;

    fscanf(arquivo, "%i", &n); /*le o arquivo, para ser como limitador*/

    printf("Qual o seu departamento [A, B, C]: ");
    scanf(" %c", &Departamento);
    
    copia_arquivo(arquivo, n, Pessoal);


    return 0;
}