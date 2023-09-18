#include "pilha.c"

int main() {

    Pilha *p = pilha_cria();

    float pilha;

    pilha_push(p, 5);
    pilha_push(p, 8);
    pilha_push(p, 9);
    pilha_push(p, 10);

    //pilha_vazia(p);

    pilha_imprimir(p);

    pilha_pop(p);

    pilha_libera(p);

    return 0;
}