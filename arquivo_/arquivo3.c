#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    FILE *arquivo;
    char str[100];

    arquivo = fopen("teste5.tx", "wt");

    if(arquivo == NULL) {
        printf("Erro");
    }

    fscanf(arquivo, "%s", str);

    printf(" %s", str);

    fclose(arquivo);

    if(!fclose(arquivo)) {
		printf("Arquivo fechado com sucesso! ");
	}
	
	return 0;
}
