#include <stdio.h>
#include <stdlib.h>

int main() {

    int tamanho, cont; //variaveis estáticas

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tamanho); //armazenando o tamanho do vetor

    int *vetor = (int*)malloc(tamanho * sizeof(int));  //declarando um vetor dinamico com o tamanho sendo a variavel

    if (vetor == NULL) {
        printf("Erro de alocacao \n");
        exit(1);  //checando se o vetor foi alocado na memoria
        //ou return 1
    } else {
        printf("Alocacao realizada \n");
    }

    for (cont = 0; cont < tamanho; cont++) {
        printf("Digite os elementos: %i", cont + 1);
        scanf("%i", &vetor[cont]);  //preenchendo o vetor
    }
    for (cont = tamanho - 1; cont >= 0; cont--) {
        printf("%i\n", vetor[cont]); //mostrando o vetor preenchido na ordem inversa
    }

    free(vetor); //liberando a memoria
    
    return 0;
}


/*Escreva um programa em C que solicite ao usu´ario o tamanho de um vetor e, em seguida, aloque
dinamicamente mem´oria para armazenar esse vetor. Depois disso, pe¸ca ao usu´ario que insira os
elementos do vetor e, por fim, imprima os elementos na ordem inversa.
*/
