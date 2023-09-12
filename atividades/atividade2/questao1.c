#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

    /*Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um
    novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário
    consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o
    produto (gostou/não gostou). Escreva um programa em C que:
    a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados,
    um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
    para a segunda pergunta.
    b) determine a porcentagem de pessoas do sexo feminino que responderam que
    gostaram do produto.
    c) determine a porcentagem de pessoas do sexo masculino que responderam que não
    gostaram do produto.
    */

    int total_pessoas, contador; //limite de pessoas e o contador

    char *sexo = (char*)malloc(total_pessoas * sizeof(char));  //armazenando dinamicamente a variavel, e tendo a variavel total_pessoas
    							       //como tamanho para multiplicar pelo tamanho do tipo
    if(sexo == NULL) {
        printf("Memoria insuficiente para alocacao \n");
        return 1;
    } else {
        printf("Memoria alocada com sucesso \n");
    } //condição para checar se a variável foi alocada ou não

    int *opiniao = (int*)malloc(100 * sizeof(int)); //armazenando dinamicamente a variavel, e tendo 100 como o tamanho

    if(sexo == NULL) {
        printf("Memoria insuficiente para alocacao \n");
        return 1;
    } else {
        printf("Memoria alocada com sucesso \n");
    } //condição para checar se a variável foi alocada ou não

    int quantidade_homem;  //variáveis para pegar quantidade de quem gostou e não gostou
    int quantidade_mulher;

    int Porcentagem_mulher_like;
    int Porcentagem_homem_dislike;  //variaveis que vão receber o calculo

    printf("Quantas pessoas: ");
    scanf("%i", &total_pessoas);

    for (contador = 0; contador < total_pessoas; contador++) {   //armazenar os valores nos vetores dinamicos
        printf("Digite o sexo da %i pessoa {M/F}: ", contador + 1);
        scanf(" %c", &sexo[contador]);  //armazenando no vetor dinamico 
        
    	/*if(sexo[contador] != 'F' || sexo[contador] != 'M') {
			printf("Algo errado! \n");
			printf("Digite o sexo da %i pessoa {M/F}: ", contador + 1);
        	scanf(" %c", &sexo[contador]);	
		}*/
        
        printf("Qual a sua opiniao do produto [digite 0 para (gostei), e 1 para (nao gostei)]? ");
        scanf("%i", &opiniao[contador]); //armazenando no vetor dinamico
        
        if(sexo[contador] == 'F' && opiniao[contador] == 0) {
        	quantidade_mulher++;  //incrementendo +1 na variável para fazer a porcentagem de quantas mulheres gostaram
        	printf("Entao voce nao gostou! \n");
		} //comparando os valores que o usuario digitou no vetor sexo
        
        if(sexo[contador] == 'M' && opiniao[contador] == 1) {
        	quantidade_homem++;   //incrementando +1 na variável para fazer a porcentagem de quantos homens não gostaram
        	printf("Entao voce nao gostou! \n");   //comparando os valores que o usuario digitou no vetor sexo
		}
        
    }
	
	Porcentagem_mulher_like = ((quantidade_mulher * 100) / total_pessoas);  //calculando a porcentagem
	Porcentagem_homem_dislike = ((quantidade_homem * 100) / total_pessoas);

    printf("São %i porcento das mulheres que gostaram! \n", Porcentagem_mulher_like); //mostrando na tela
    printf("São %i porcento dos homens que nao gostaram! \n", Porcentagem_homem_dislike);

    //printf("qnt de homem : %i\n", quantidade_homem);
	//printf("qnt de mulher : %i\n", quantidade_mulher);

    free(sexo);  //liberando a memória
    free(opiniao);

    return 0;
}
