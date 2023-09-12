#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//FILE *fopen (char *nome_arquivo, char *modo);
	
	FILE *fp;
	
	fp = fopen("entrada.txt", "wt");  
                                         // o w cria o arquivo 
	
	if(fp == NULL) {
		printf("Erro na abertura do arquivo! \n");
		return 1;
	}											

	fclose(fp); //função para fechar o arquivo  fp é o nomedo ponteiro do arquivo
	
	if(!fclose(fp)) {
		printf("Arquivo fechado com sucesso! ");
	}
	
	return 0;
}



	//todo arquivo tem sua extensão associada

	//.c = programa em c
	//.doc = microsof
	
	//um arquivo pode ser visto de duas maneiras: Modo texto, Modo binário

	fgetc(FILE* fp); //você ler caractere por caractere