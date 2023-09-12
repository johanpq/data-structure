#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct contabancaria ContaBancaria;

//Função para criar a conta
ContaBancaria * CriaConta(char *titular, int numero, float saldo);

//Função para atualizar o saldo
void Deposita(ContaBancaria *conta, float novoSaldo);

//Função para atualizar o saldo e verificar se o saldo é suficiente para saque
void Saca(ContaBancaria *conta, float saque);

//Função para atualizar o saldo e verificar se o saldo é suficiente para tranferência
void Transfere(ContaBancaria *conta, float tranferencia);

//Função para retornar o saldo atual
float Saldo(ContaBancaria *conta);

//Função para excluir a conta
void ExcluiConta(ContaBancaria *conta);