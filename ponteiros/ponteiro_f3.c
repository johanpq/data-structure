#include <stdio.h>
#include <stdlib.h>

int soma_e_sub(int x, int y, int *p) {
	int soma = x + y;
	*p = x - y;
	
	return soma;
}
int main() {
	
	int x, y, soma, sub;
	
	printf("Digite o valor x e y: ");
	scanf("%i %i", &x, &y);
	
	soma = soma_e_sub(x, y, &sub);
	
	printf("A soma é: %i\nE a subtração: %i", soma, sub);
	
	return 0;
}