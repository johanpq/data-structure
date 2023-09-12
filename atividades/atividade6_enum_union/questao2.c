#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

union Tipo_de_produtos {
	char Alimento[50];
	char Bebida[50];
	char Eletronico[50];
};

typedef struct produtos {
	char nome[50];
	float preco;
	union Tipo_de_produtos Produtos;
} produto;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	produto Produto;
	
	printf("Digite o nome do produto: ");
	scanf(" %[^\n]", Produto.nome);
	printf("Digite o preço: ");
	scanf("%f", &Produto.preco);
	
	int P;
	
	printf("Digite o tipo do produto: 1.Alimento | 2.Bebida | 3.Eletronico: ");
	scanf("%i", &P);
	
	switch(P) {
		case 1:
			printf("Digite o tipo do alimento: ");
			scanf(" %[^\n]", Produto.Produtos.Alimento);
			printf("Nome do produto: %s \n", Produto.nome);
			printf("Preço do produto: %.1f \n", Produto.preco);
			printf("Tipo do produto: %s \n", Produto.Produtos.Alimento);
			break;
		case 2:
			printf("Digite o tipo da bebida: ");
			scanf(" %[^\n]", Produto.Produtos.Bebida);
			printf("Nome do produto: %s \n", Produto.nome);
			printf("Preço do produto: %.1f \n", Produto.preco);
			printf("Tipo do produto: %s \n", Produto.Produtos.Alimento);
			printf("Tipo do produto: %s \n", Produto.Produtos.Bebida);
			break;
		case 3:
			printf("Digite o tipo do eletronico: ");
			scanf(" %[^\n]", Produto.Produtos.Eletronico);
			printf("Nome do produto: %s \n", Produto.nome);
			printf("Preço do produto: %.1f \n", Produto.preco);
			printf("Tipo do produto: %s \n", Produto.Produtos.Alimento);
			printf("Tipo do produto: %s \n", Produto.Produtos.Eletronico);
			break;
		default:
			printf("Erro! ");
	}
	
	
	return 0;
}
