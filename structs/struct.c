#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct aluno {
        char nome[20];
        int idade;
        int matricula;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
    

    //struct = permite agrupar diferentes variaveis e criar um novo tipo e a palavra struct é reservada da linguagem C

    /*
    Struct {
        lista de variaveis
    };
    */


    struct aluno var_aluno;  //criando a variavel (var_aluno) ela vai ter as variaveis dentro de struct

    // operador (.) é o operador de acesso para acessar a struct

    //var_aluno.idade //acessando a variavel idade dentro de struct

    printf("Digite o nome do aluno: ");
    scanf(" %s", var_aluno.nome);     //vai armazenar na variavel nome
    
    printf("Digite a idade: ");
    scanf("%i", &var_aluno.idade);  //armazena na variavel idade

	printf("Digite a matricula: ");
	scanf("%i", &var_aluno.matricula);

    printf("Os dados informados: \n Nome: %s \n Idade: %i \n Matricula: %i \n", var_aluno.nome, var_aluno.idade, var_aluno.matricula);


    return 0;
}
