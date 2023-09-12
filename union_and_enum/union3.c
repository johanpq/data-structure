#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

typedef union indice {
	float IG, IRA, IRT;
} Indices;

typedef struct aluno {
	char Nome[50];
	int Matricula;
	char Curso[50];
	Indices Indice_Academico;  //variável que Indice_Academico do tipo Indices, vai acessar a union 
	
} Aluno;

int main() { 
   setlocale(LC_ALL, "Portuguese");
   
   Aluno *Registro = (Aluno*)malloc((Aluno));
   
   if(Registro == NULL) {
   		printf("Erro na alocacao! \n");
   		return 1;
   } else {
   		printf("Alocado! \n");
   }
   int choice;
   
   printf("Digite o nome: ");
   scanf(" %[^\n]", Registro->Nome);
   
   printf("Digite a matricula: ");
   scanf("%i", &Registro->Matricula);
   
   printf("Digite o curso: ");
   scanf(" %[^\n]", Registro->Curso);
   
   printf("Digite o indice: 0.IG | 1.IRA | 2.IRT: ");
   scanf("%i", &choice);
   
   switch (choice) {
   		case 0:
   			printf("Digite o IG: ");
   			scanf("%f", &Registro->Indice_Academico.IG);
   			break;
   		case 1:
   			printf("Digite o IRA: ");
   			scanf("%f", &Registro->Indice_Academico.IRA);
   			break;
   		case 2:
   			printf("Digite o IRT: ");
   			scanf("%f", &Registro->Indice_Academico.IRT);
   			break;
   		default:
   			printf("Erro! \n");
   }
   
   	printf("\n");
   
   	printf("Nome informado: %s \n", Registro->Nome);
   	printf("Matricula informada: %i \n", Registro->Matricula);
  	printf("Curso informado: %s \n", Registro->Curso);
   	printf("Indice informado: %.1f", Registro->Indice_Academico.IRA);
   	
   	//sendo um ponteiro estático é seta, mas se add o contador vira ponto 
   
   
   return 0;
}
