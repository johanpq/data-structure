#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct change_salario {
	
	float novo_salario;
	
} new_salario;

typedef struct Employer {
	
	char nome[80];
	float salario;
	char identificador[50];
	char cargo[80];
	
	
} funcionario;

void employers (int pessoas, funcionario *var_employ) {
	
	//**var_employ = (funcionario**)malloc(pessoas * sizeof(funcionario**));
	
	//tentando receber a variavel var_employ do main em um ponteiro
	
	int contador;
	
	for(contador = 0; contador < pessoas; contador++) {
			printf("Nome %i: ", contador + 1);
			scanf(" %[^\n]", &var_employ[contador].nome);
						
			printf("Salário %i: ", contador + 1);
			scanf("%f", &var_employ[contador].salario);
			
			printf("Identificador %i: ", contador + 1);
			scanf(" %[^\n]", &var_employ[contador].identificador);
			
			printf("Cargo %i: ", contador + 1);
			scanf(" %[^\n]", &var_employ[contador].cargo);
	}
};

void show (int pessoas, funcionario *var_employ) {
	int contador;
	
	for(contador = 0; contador < pessoas; contador++) {
		printf("Nome %i: %s \n", contador + 1, var_employ[contador].nome);
		printf("Salário %i: %.1f \n", contador + 1, var_employ[contador].salario);
		printf("Identificador %i: %s \n", contador + 1, var_employ[contador].identificador);
		printf("Cargo %i: %s \n", contador + 1, var_employ[contador].cargo);
		printf("\n");
	}
};

void new_salary(int pessoas, funcionario *var_employ, new_salario *var_salario) {
	for(int contador = 0; contador < pessoas; contador++) {
	var_salario[contador].novo_salario = (var_employ[contador].salario + 10 / 100 * var_employ[contador].salario);
		
	printf("O novo salário do(a) %s é: %.1f \n\n", var_employ[contador].nome, var_salario[contador].novo_salario);
	}
}
void maior_e_menor_salario (int pessoas, funcionario *var_employ, new_salario *var_salario) {
	float maior_salario = 0;
	char maior_salario_cargo[80];
	
	float menor_salario;
	char menor_salario_cargo[80];
	
	char nome_maior_salario[80];
	char nome_menor_salario[80];
	int contador; 
	
	for(contador = 0; contador < pessoas; contador++) {
		if (contador == 0) {
			menor_salario = var_salario[contador].novo_salario;
			strcpy(menor_salario_cargo, var_employ[contador].cargo);
			strcpy(nome_menor_salario, var_employ[contador].nome);
		}
		if (var_salario[contador].novo_salario > maior_salario) {
			maior_salario = var_salario->novo_salario;
			strcpy(maior_salario_cargo, var_employ[contador].cargo); //strcpy copiar a string do cargo pra maior_salario_cargo
			strcpy(nome_maior_salario, var_employ[contador].nome);
		}
		if (var_salario[contador].novo_salario < menor_salario) {
			menor_salario = var_salario[contador].novo_salario;
			strcpy(menor_salario_cargo, var_employ[contador].cargo);
			strcpy(nome_menor_salario, var_employ[contador].nome);
		}
	}
	printf(" %s que tem o maior salário: %.1f e o cargo: %s \n", nome_maior_salario, maior_salario, maior_salario_cargo);
	printf(" %s que tem o menor salário: %.1f e o cargo: %s \n", nome_menor_salario, menor_salario, menor_salario_cargo);

}

int main() {
	setlocale(LC_ALL, "Portuguese");	
	
	int pessoas;
	
	printf("Quantas pessoas: ");
	scanf("%i", &pessoas);
	
	funcionario *var_employ = (funcionario*)malloc(pessoas * sizeof(funcionario));
	
	new_salario *var_salario = (new_salario*)malloc(pessoas * sizeof(new_salario));
	
	if(var_employ == NULL && var_salario == NULL) {
		printf("Erro na alocacao de memória \n");
		return 1;
	} else {
		printf("Alocado! \n");
	}
	
	
	employers(pessoas, var_employ); //passando um ponterio como parametro para um ponterio de ponteiro
	
	show(pessoas, var_employ);
	
	new_salary(pessoas, var_employ, var_salario);
	
	maior_e_menor_salario(pessoas, var_employ, var_salario);
	
	free(var_employ);
	free(var_salario);
	return 0;
}
