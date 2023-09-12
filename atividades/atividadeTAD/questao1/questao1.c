#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ContaBancaria.h"

//armazenar a struct dinamicamente


int main() {

    char titular[50];
    int numero;
    float saldo;

    printf("Digite o nome do titular: ");
    scanf(" %[^\n]", titular);
    printf("Digite o numero: ");
    scanf("%i", &numero);
    printf("Digite o saldo: ");
    scanf("%f", &saldo);

    //ContaBancaria *conta = CriaConta("Joao", 1003, 400.00);

    ContaBancaria *conta = CriaConta(titular, numero, saldo);

    float novoSaldo;

    printf("Digite o novo saldo: ");
    scanf("%f", &novoSaldo);

    Deposita(conta, novoSaldo);
    
    float saque;

    printf("Digite o novo saldo 2: ");
    scanf("%f", &saque);

    Saca(conta, saque);

    float transferencia;

    printf("Digite o novo saldo 3: ");
    scanf("%f", &transferencia);

    Transfere(conta, transferencia);

    float SaldoRetorno = Saldo(conta);
    
    ExcluiConta(conta);

    return 0;
}


//gcc -c ContaBancaria.c -> arquivo objeto
//gcc -c questao1.c  -> main
//gcc -o questao1 ContaBancaria.o questao1.o

