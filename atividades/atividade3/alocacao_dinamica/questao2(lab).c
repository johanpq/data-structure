#include <stdio.h>
#include <stdlib.h>

int main() {

    int linhas, colunas; //variaveis estáticas

    printf("Digite as linhas e as colunas: ");
    scanf("%i %i", &linhas, &colunas); //armzenando linhas e colunas

    int **matriz = (int**)malloc(linhas * sizeof(float*)); //declarando a matriz(linhas) dinamicamente com o tamanho das linhas

    if (matriz == NULL) {
        printf("Erro na alocacao \n"); //checando se a matriz foi alocada na memoria
    } else {
        printf("Alocacao realizada \n");
    }
       
    for (int c = 0; c < colunas; c++) {
        matriz[c] = (int*)malloc(colunas * sizeof(int)); //declarando a matriz(colunas) dinamicamente com o tamanho das colunas
    }

    int linha, coluna; //contadores

    for (linha = 0; linha < linhas; linha++) { //linha é o contador e linhas é o valor limite
        for (coluna = 0; coluna < colunas; coluna++) { //coluna é o contador e colunas é o valor limite
        	printf("Digite a linnha %i da coluna %i: ", linha + 1, coluna + 1); 
            	scanf("%i", &matriz[linha][coluna]); //armazenando valores na matriz dinamica
        }
    }
    
    for (linha = 0; linha < linhas; linha++) {
    	for (coluna = 0; coluna < colunas; coluna++) {
        	printf("%i", matriz[linha][coluna]);  //mostrando os valores da matriz
        }
        printf("\n");
    }
    printf("\n\n");

    for (linha = 0; linha < linhas; linha++) {
    	for (coluna = 0; coluna < colunas; coluna++) {
        	printf("%i", matriz[coluna][linha]);  //mostrando a matriz transposta
        }
        printf("\n");
    }
    
    for (linha = 0; linha < linhas; linha++) {
    	free(matriz); //liberando as linhas da matriz
	}
	free(matriz); //liberando as colunas


    return 0;
}

/*Implemente um programa em C que solicite ao usu´ario o n´umero de linhas e colunas de uma matriz e,
em seguida, aloque dinamicamente mem´oria para armazenar essa matriz. Pe¸ca ao usu´ario que insira
os elementos da matriz e, por fim, imprima a matriz na forma original e transposta.*/


//a transposta é a inversão de linhas e colunas.>
