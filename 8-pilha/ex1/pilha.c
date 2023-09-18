#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

#define N 50 /*numero máximo de elementos*/

struct pilha {
    int n; // armazenar o topo da pilha
    float vet[N];  //se temos n elementos na pilha, vet[n-1] representa o topo da pilha
};

Pilha *pilha_cria(void) {
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    p->n = 0; // inicializa com zero elementos, porque não tenho nenhum elemento na pilha ainda
    return p;
}

void pilha_push(Pilha *p, float v) { // v é o elemento que eu quero inserir na pilha
    if(p->n == N) { //checa se a pilha está cheia
        printf("Capacidade de pilha estourou. \n");
        exit(1);
    }

    p->vet[p->n] = v; //insere elemento na próxima posição livre
    p->n++; //atualiza a quantidade da pilha
}