#include <stdio.h>
#include <stdlib.h>

int main() {

    /*Qual será a saída exibida pelo programa a seguir:*/

    int a, b, c, d;  //declaração das variáveis
    int *p1;  //ponteiro p1 do tipo int
    int *p2 = &a;  //ponteiro p2 do tipo int, armazenando o endereço de a
    int *p3 = &c;  //ponteiro p3 do tipo int, armazenando o endereço de c
    p1 = p2;  //p1 apontando para p2
    *p2 = 10;  //a variavel que p2 está apontando recebe 10
    b = 20; 
    int **pp;  //ponteiro de ponteiro do tipo int
    pp = &p1;  //ponteiro de ponteiro armazenando o endereço do ponteiro p1
    *p3 = **pp;  //a variavel que o ponteiro p3 tem como endereço recebe o valor da variavel que o ponteiro de ponteiro tem como endereço
    int *p4 = &d; //ponteiro p4 do tipo int armazena o endereço da variavel d
    *p4 = b + (*p1)++;  //variavel que p4 aponta recebe b(valor) mais o valor que a variavel do ponteiro p1 aponta com incremento 1
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);  //mostrando na tela

    /*Observe que, se int *p é uma variável do tipo ponteiro para inteiro, então int **pp é uma
variável do tipo ponteiro para ponteiro de inteiro, isto é, uma varável que poderá armazenar o
endereço de um ponteiro do tipo int. */



    /*a = 10, b = 20, c = 10, d = 30*/

    return 0;
}
