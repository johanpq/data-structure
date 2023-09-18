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

int pilha_vazia(Pilha *p) {
    return (p->n == 0); //checa se a pilha está vazia (usa como condição)
}

float pilha_pop(Pilha *p) {
    float v; 

    if(pilha_vazia(p)) {
        printf("Pilha vazia. \n");
        exit(1);
    }

    v = p->vet[p->n-1]; //retira elemento do topo
    p->n--; // e atualiza a lista
    return v;
}

void pilha_libera(Pilha *p) {
    free(p);
}

void pilha_imprimir(Pilha *p) {
    int contador;

    for(contador = p->n-1; contador >= 0; contador--) { //do topo pra base
        printf("%.f\n", p->vet[contador]);
    }
}