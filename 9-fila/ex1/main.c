#include "fila.c"

int main() {

    Fila *Q = CriaFila(50);

    DestruirFila(&Q);

    int vazia = FilaVazia(Q);

    int cheia = FilaCheia(Q);

    InsereFila(Q, 10);

    RemoveFila(Q);

    int elem;
    ConsultaFila(Q, &elem);


    return 0;
}