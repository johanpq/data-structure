#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro) {
    *area = (((3 * pow(l, 2)) * sqrt(3))) / 2;
    *perimetro = 6 * l;
}
//ponteiros do tipo float como parametro da função para receber os argumentos no int main e armazenando dentro das variaveis que eles tem o endereço
int main() {

    /*Crie um programa para calcular a área e o perímetro de um hexágono. O seu
    programa deve implementar uma função chamada calcula_hexagono que calcula a área e o
    perímetro de um hexágono regular de lado l. A função deve obedecer ao seguinte protótipo:
    void calcula_hexagono(float l, float *area, float *perimetro); A área e o perímetro de um
    hexágono regular são dados, respectivamente, por:
    */

    /*Obs: Para os cálculos, utilize as funções sqrt e pow do módulo math da biblioteca
    padrão de C. Em seguida, crie a função principal do programa e utilize a função
    calcula_hexagono para calcular a área e o perímetro de um hexágono de lado l
    informado pelo usuário.
    */

   float l, area, perimetro; //variaveis declaradas

   printf("Digite o lado: "); 
   scanf("%f", &l); 

   calcula_hexagono(l, &area, &perimetro);  //argumentos para a função, passando o endereço das variaveis para os ponteiros na função

   printf("A área é: %.f\tO perimetro é: %.f", area, perimetro);  

    return 0;
}
