#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void soma(float *notas1, float *notas2, float *notas3, float *R) {

	*R = *notas1 + *notas2 + *notas3;
	
}

//float soma(float **notas1, float **notas2, float **notas3) {
//	float S = **notas1 + **notas2 + **notas3;
//	
//	return S;
//}
int main() {
	setlocale(LC_ALL, "Portuguese");
    
    int alunos;

    printf("Quantos alunos: ");
    scanf("%i", &alunos);

    float *notas1 = (float*)calloc(alunos, sizeof(float)); 
    float *notas2 = (float*)calloc(alunos, sizeof(float)); 
    float *notas3 = (float*)calloc(alunos, sizeof(float)); 
    float *S = (float*)calloc(alunos, sizeof(float));

    for(int c = 0; c < alunos; c++) {
        printf("As 3 notas do aluno %i = ", c + 1);
        scanf("%f %f %f", &notas1[c], &notas2[c], &notas3[c]);
     	//float S = soma(&notas1, &notas2, &notas3);
     	soma(&notas1[c], &notas2[c], &notas3[c], &S[c]);
     	printf("A soma do aluno %i é: %.f\n", c + 1, S[c]);
    }  

    return 0;
}