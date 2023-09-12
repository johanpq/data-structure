#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
     Quais serão os valores de x, y e p ao final do trecho de código abaixo:
    */

    int x, y, *p;  //variavel e ponteiro do tipo int declarado
    y = 0;  
    p = &y;  //ponteiro p armazenando o endereço de y
    x = *p;  //x aramazenando o valor da variavel que p armazena o endereço
    x = 4; //x armazena 4
    (*p)++; //variavel que p armazena o endereço recebe 1 de incremento
    --x; //o valor da variavel x recebe -1 
    (*p) += x; //variavel que p tem como endereço recebe ele mesmo + x

    /*p = &y, x = 3, y = 4*/ //resultado



    return 0;
}
