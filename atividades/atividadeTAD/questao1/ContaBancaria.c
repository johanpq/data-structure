#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ContaBancaria.h"

// char *titular é a mesma coisa de char titular[50]

struct contabancaria {
    char titular[50];
    int numero;
    float saldo;
};

ContaBancaria *CriaConta(char *titular, int numero, float saldo) {
    ContaBancaria *conta = (ContaBancaria*)malloc(sizeof(ContaBancaria));
    if(conta == NULL) {
        exit(1);
    }
    conta->numero = numero;
    conta->saldo = saldo;
    strcpy(conta->titular, titular); //copiar string

    return conta; 
}

void Deposita(ContaBancaria *conta, float novoSaldo) {
    conta->saldo+= novoSaldo;
}

void Saca(ContaBancaria *conta, float saque) {
    conta->saldo += saque;
    
    if(conta->saldo > 0 && conta->saldo < 10000) {
        printf("Valor para saque suficiente! \n");
    } else {
        printf("Valor para saque insuficiente! \n");
    }
}

void Transfere(ContaBancaria *conta, float transferencia) {
    conta->saldo+= transferencia;

    if(conta->saldo > 0 && conta->saldo < 5000) {
        printf("Saldo disponivel para transferencia! \n");
    } else {
        printf("Saldo indisponivel para transferencia! \n");
    }
}

float Saldo(ContaBancaria *conta) {
    float SaldoRetorno = conta->saldo;
    return SaldoRetorno;
} 

void ExcluiConta(ContaBancaria *conta) {
    free(conta);
    printf("Conta excluída! \n");
}