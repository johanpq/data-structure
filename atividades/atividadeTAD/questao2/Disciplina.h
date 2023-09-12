#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototipo da struct
typedef struct disciplina Disciplina;

//Função para declarar a struct dinamicamente
Disciplina *Cria_Disciplina(char *nome, int codigo);



//Função para excluir a disciplina
void ExcluiDisciplina(Disciplina *disciplinas);