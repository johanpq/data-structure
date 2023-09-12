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
    
    printf("Digite o nome daa disciplinas: ");
    scanf(" %[^\n] %[^\n]", aluno->disciplina[0].nome, &aluno->disciplina[1].nome);
    

    printf("Digite a nota: ");
    scanf("%f %f", &aluno->disciplina[0].nota, &aluno->disciplina[1].nota);


//quando a variavel é um ponteiro, troca o ponto pela seta -> para acessar as variaveis no struct

    //printf("Nome: %s \n Idade: %i \n Matricula: %i \n Disciplina: %s[0] \n Disciplina: %s[1] \n Nota: %.f[0] \n Nota: %.f[1] \n", (*aluno).nome, (*aluno).idade, (*aluno).matricula, aluno->disciplina->nome, aluno->disciplina->nota, aluno->disciplina[0].nome, aluno->disciplina[1].nome, aluno->disciplina[0].nota, aluno->disciplina[1].nota);

    free(aluno);

    return 0;
}
