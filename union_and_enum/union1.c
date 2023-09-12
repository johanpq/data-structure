#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

union documentos {
	int cpf;
	int rg;
	int cnh;
};

typedef union documentos Docs; //renomeando pra docs

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Docs documento;   //documento é a variável para documentos
	
	printf("Digite o documento CPF: ");
	scanf("%i", &documento.cpf);
	printf("Digite o documento RG: ");
	scanf("%i", &documento.rg);
	printf("Digite o documento CNH: ");
	scanf("%i", &documento.cnh);
	
	
	printf("\n");
	
	printf("Documento informado CPF: %i \n", documento.cpf);
	printf("Documento informado RG: %i \n", documento.rg);
	printf("Documento informado CNH: %i \n", documento.cnh);
	
	//eles serão sobrescrito e armazenará somente o último
	
	return 0;
}
