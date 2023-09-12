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

    fputs("Hellow World!", arquivo); //escreve string no arquivo
    fputc('A', arquivo); //ele vai escrever caractere dentro do arquivo, essa funcao é somente para caracteres
    fprintf(arquivo, "\n Algoritmos \n"); //escreve string no arquivo também e qualquer outra formatação

    while (!feof(nome_arquivo)) {  //enquanto não chegar ao final do arquivo
        arquivo = fgetc(nome_arquivo); //lê um caractere do arquivo

        printf("%c", arquivo); //imprime
    }
    
    fclose(arquivo); //fechar o arquivo

    return 0;
}