#include <stdio.h>
#include <stdlib.h>

typedef struct fruta {
    char nome[20];
    float preco;
} Fruta;

void armazenar(Fruta *var_fruta, int tamanho) {
    int contador = 0, sair;

    FILE *arquivo = fopen("frutas.txt", "w");
    if(arquivo == NULL) {
        printf("Nao foi possivel abrir o arquivo! \n");
    }

     do {
    	contador++;
        printf("Digite o nome da fruta %i: ", contador);
        scanf(" %[^\n]", var_fruta[contador].nome);
        getchar();
        printf("Digite o preco da fruta %i: ", contador);
        scanf("%f", &var_fruta[contador].preco);
        printf("Deseja continuar |1.Cotinuar|2.Sair|: ");
        scanf("%i", &sair);
        
        if(sair == 1) {
            tamanho+= 2;
            var_fruta = (Fruta*)realloc(var_fruta, tamanho * sizeof(Fruta));
        } else if(sair == 2) {
            printf("Progama encerrado! \n");
        } else {
            printf("Como voce nao digitou nenhum numero solicitado, continuaremos! \n");
        }
        
        fprintf(arquivo, "Nome da fruta %i: %s, Preco: R$ %.1f \n", contador, var_fruta[contador].nome, var_fruta[contador].preco);


	} while(sair != 2);

    fclose(arquivo);
    free(var_fruta);
}

int main() {

    int tamanho = 2;

    Fruta *var_fruta = (Fruta*)malloc(tamanho * sizeof(Fruta));
    if(var_fruta == NULL) {
        printf("Algo está errado \n");
        return 1;
    }

    armazenar(var_fruta, tamanho);

    return 0;
}
