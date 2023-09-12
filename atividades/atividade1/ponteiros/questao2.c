#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    Considere o trecho de código abaixo:
    */
    int x, *p;   //declarado x e o ponteiro p do tipo int
    x = 100;  //x armazenando 100
    p = &x;  //p armazenando o endereço de x
    printf("Valor de p = %p\tValor de *p = %d", p, *p);   

	//mostrando na tela o valor do ponteiro alocado na memoria
	//mostrando o valor que está na variável que o ponteiro p armazena o endereço


    /*Se tentarmos compilar o programa (não o compile ainda), você acha que o compilador nos
    fornece alguma mensagem? Se sim, responda:
    a) Esta mensagem é de erro ou advertência?
    b) Por que o compilador emite tal mensagem?
    c) Compile e execute o programa. A execução foi bem sucedida?
    d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida
    pelo compilador.
    e) Compile e execute novamente o programa. A execução foi bem sucedida?
    */

    /*  a) Erro.
        b) Porque há um erro no ponteiro.
        c) Não.
        d)      int x, *p;
                x = 100;
                p = &x;
                printf("Valor de p = %p\tValor de *p = %d", p, *p);
        e) Sim.
   
    */


    return 0;
}
