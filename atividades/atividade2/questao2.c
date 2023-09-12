#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	/*Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
	questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
	questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
	10 alunos matriculados. Calcule e mostre:
	a) a nota obtida para cada aluno;
	b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6.
	*/

	int total_questoes, contador, contador1;  //variável limite de questões(total_questoes) e os contadores
	char gabarito[50]; //gabarito
	
	

	printf("Digite o total de questões: ");
	scanf("%i", &total_questoes);
	printf("Digite o gabarito: ");
	scanf("%s", &gabarito); 
	
	char *resposta = (char*)malloc(total_questoes * sizeof(char));  //armazenando dinamicamente as respostas com a variavel total_questoes sendo o tamanho
	float *nota = (float*)calloc(total_questoes, sizeof(float));  //armazenando dinamicamente as notas
	float *resultado = (float*)calloc(total_questoes, sizeof(float)); //armazenando dinamicamente os resultados
	int aprovados = 0;  //variavel que recebe os aprovados
	float porcentagem = 0;  //variavel que recebe a porcentangem
	
	if(resultado == NULL || nota == NULL || resposta == NULL) {
		printf("Aloacao nao realizada! \n");
		return 1;
	} else { //checando se os vetores foram alocados
		printf("Alocacao realizada! \n");
	}
	
	
	for(contador = 0; contador < 10; contador++) {
		for(contador1 = 0; contador1 < total_questoes; contador1++) {
			printf("Digite a respota %i do aluno %i: ", contador1 + 1, contador + 1);
			scanf("%s", &resposta[contador]);  //preenchendo o vetor
			
			if(resposta[contador] == gabarito[0]) {
				nota[contador] = nota[contador] + 10;  //vetor de nota recebendo a soma para cada valor = a o valor do gabarito na posição 0
			}
			resultado[contador] = nota[contador] / total_questoes;  //fazendo o calculo 
		}
		printf("============================================== \n");
	}

	for(contador = 0; contador < 10; contador++) {
		
		if(resultado[contador] >= 6) {
			porcentagem++;  //fazendo a porcentagem das pessoas que tiveram aprovação
		}
		
		printf("A nota do aluno %i é: %.f\n", contador + 1, resultado[contador]);  //mostrando a nota
	}
	printf("A porcentagem dos alunos aprovados é: %.f", (porcentagem * 100) / 10); //mostrando a porcentagem
	
	free(resposta); //liberando a memoria
	free(nota);
	free(resultado);
	
	return 0;
}
