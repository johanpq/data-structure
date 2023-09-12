#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//FILE *fopen (char *nome_arquivo, char *modo);
	
	FILE *fp;

    char str[100]; //string para armazenar o que vou ler no arquivo
	
	fp = fopen("entrada.txt", "wt");  //caso não exista o arquivo, ele cria  //r pra ler e t pra texto
	
	if(fp == NULL) {
		printf("Erro na abertura do arquivo! \n");
		return 1;
	}												

    fscanf(fp, "%s", str); //função para ler  

    printf(" %s", str);

	fclose(fp); //função para fechar o arquivo  fp é o nomedo ponteiro do arquivo
	
	/*if(!fclose(fp)) {
		printf("Arquivo fechado com sucesso! ");
  	essa pra fechar o arquivo, ou a outra
	}*/	
	return 0;
}

	//todo arquivo tem sua extensão associada

	//.c = programa em c
	//.doc = microsof
	
	//um arquivo pode ser visto de duas maneiras: Modo texto, Modo binário
