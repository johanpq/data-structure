#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//struct e ponteiros

typedef struct disciplina {
    char nome[30];
    float nota;

} Disciplina;      //essa funcao tem que ta aqui 

typedef struct aluno {
        char nome[20];
        int idade;
        int matricula;
        Disciplina *disciplina;  
} Aluno;




int main() {
	setlocale(LC_ALL, "Portuguese");
    
    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));

    if(aluno == NULL) {
        printf("Sem memoria \n");
        return 1;
    } else {
        printf("Alocado \n");
    }

    aluno->disciplina = (Disciplina*)malloc(2 * sizeof(Disciplina)); //ponteiro para struct disciplina

    if(aluno->disciplina == NULL) {
        printf("Sem memoria \n");
        return 1;
    } else {
        printf("Alocado");
    }

    printf("Digite o nome: ");
    scanf(" %[^\n]", (*aluno).nome);
    
	printf("Digite sua idade: ");
    scanf("%i", &(*aluno).idade);
    
	printf("Digite a matricula: ");
    scanf("%i", &(*aluno).matricula);
    
    printf("Digite o nome da disciplina: ");
    scanf(" %[^\n]", aluno->disciplina->nome);
    
    printf("Digite a nota: ");
    scanf("%f", &aluno->disciplina->nota);


//quando a variavel é um ponteiro, troca o ponto pela seta -> para acessar as variaveis no struct

    printf("Nome: %s \n Idade: %i \n Matricula: %i \n Disciplina: %s \n Nota: %.f \n", (*aluno).nome, (*aluno).idade, (*aluno).matricula, aluno->disciplina->nome, aluno->disciplina->nota);

    free(aluno);

    return 0;
}
