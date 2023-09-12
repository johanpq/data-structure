#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototipo da struct
typedef struct aluno Aluno;

//Função para criar a struct aluno dinamicamente
Aluno *cria_aluno(char *nome, int matricula);

//Função menu
void menu();