#include "Aluno.h"
#include "Disciplina.h"

int main(void) {
    int choice, contador, limite = 0, sair = 0;

    char nome_aluno[100];
    int codigo_matricula;

    char nome_disciplina[100];
    int codigo_disciplina;
    do {
        menu();
        scanf("%i", &choice);
        switch(choice) {
            case 1:
                do{
                    limite++;
                    printf("Digite o nome do aluno(A) %i: ", limite);
                    scanf(" %[^\n]", nome_aluno);
                    printf("Digite o codigo de matricula: %i: ", limite);
                    scanf("%i", &codigo_matricula);

                    Aluno *alunos = cria_aluno(nome_aluno, codigo_matricula);
            
                    printf("Deseja cadastrar mais alunos? [1.Sim | 2.Nao]\n");
                    scanf("%i", &sair);

                    if(limite == 4) {
                        printf("Você atingiu o limite de cadastro de alunos! \n");
                    }
                    getchar();
                } while(sair != 2 || limite == 4);
            break;

            case 2:
                do {
                    limite++;
                    printf("Digite o nome da disciplina: %i: ", limite);
                    scanf(" %[^\n]", nome_disciplina);
                    printf("Digite o codigo da disciplina: %i: ", limite);
                    scanf("%i", &codigo_disciplina);

                    printf("Deseja cadastrar mais disciplinas? [1.Sim | 2.Nao]\n");
                    scanf("%i", &sair);
                } while(sair != 2);

            Disciplina *disciplinas = Cria_Disciplina(nome_disciplina, codigo_disciplina);
            break;
        case 3:

           // Matricula_Disciplina();
        case 5: 
            ExcluiDisciplina(disciplinas);
    }  

    } while(choice != 6);


    return 0;
}