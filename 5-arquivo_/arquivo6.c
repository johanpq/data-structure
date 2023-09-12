#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char nome_arquivo[20];  //usuario vai digitar o nome do arquivo

    printf("Informe o nome do arquivo: \n");
    scanf(" %[^\n]", nome_arquivo);

    FILE *arquivo = fopen(nome_arquivo, "w");  //se existe eu vou escrever senão eu crio o arquivo (w)

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo \n");
        return 1;
    } else {
        printf("Arquivo criado com sucesso \n");
    }

    fputc('A', arquivo); //ele vai escrever caractere dentro do arquivo, essa funcao é somente para caracteres

    while (!feof(nome_arquivo)) {  //enquanto não chegar ao final do arquivo
        arquivo = fgetc(nome_arquivo); //lê um caractere do arquivo

        printf(" %c", arquivo); //imprime
    }
    
    fclose(arquivo); //fechar o arquivo

    return 0;
}