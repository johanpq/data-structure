#include <stdio.h>
#include "str.h" //chamando a biblioteca(modulo) para cá

/*int comprimento(char *str);
void copia(char *dest, char *orig);
void concatena(char *dest, char *orig);    prototipos
*/
int main() {

    char str[101], str1[51], str2[51];

    printf("Digite uma sequencia de caracteres: ");
    scanf(" %50[^\n]", str1);
    printf("Digite outra sequencia de caracteres: ");
    scanf(" %50[^\n]", str2);
    copia(str, str1);
    concatena(str, str2);
    printf("Comprimento da concatenacao: %i \n", comprimento(str));

    return 0;

    //comandos para rodag
    /*
        gcc -c str.c
        gcc -c prog1.c
        gcc -o prog1.exe str.o prog1.o
        ./prog1

        //caso o terminal seja do tipo unix(linux) tira o .exe 
    */
}

/*  
    str.h = arquivo de cabeçalho com os prototipos das funcoes
    str.c = modulo
    prog1.c = int main


*/