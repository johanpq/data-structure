#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    
    int c;
    char entrada[121];
    char saida[121];

    FILE *e; //armazena nome do arquivo de entrada
    FILE *s; //armazena nome do arquivo de saida

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%120s", entrada);
    printf("Digite o nome do arquivo de saida: ");
    scanf("%120s", saida);

    e = fopen(entrada, "rt");

    if(e == NULL) {
        printf("Nao foi possivel abrir o arquivo de entrada \n");
        return 1;
    }
    
    s = fopen(saida, "wt");

    if(s == NULL) {
        printf("Nao foi possivel abrir o arquivo de saida \n");
        fclose(e);
        return 1;
    }

    //le da entrada e escreve na saida
    while((c = fgetc(e)) != EOF) {
        fputc(toupper(c), s);
    }

    fclose(e);
    fclose(s);

    return 0;
}