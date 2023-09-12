#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum months{
	Janeiro = 1,
	Fevereiro,
	Marco,
	Abril,
	Maio,
	Junho,
	Julho,
	Agosto,
	Setembro,
	Outubro,
	Novembro,
	Dezembro
};

typedef struct day_year{
	int dia;
	int ano;
} Day_Year;


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Day_Year Data;
	int mes;
	enum months meses;
	
	printf("Digite o dia: ");
	scanf("%i", &Data.dia);
	printf("Digite o mês: ");
	scanf("%i", &meses);
	printf("Digite o ano: ");
	scanf("%i", &Data.ano);
	
	if (meses == Janeiro) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else if (meses == Fevereiro) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else if (meses == Marco) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else if (meses == Abril) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else if (meses == Maio) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else if (meses == Junho) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else if (meses == Julho) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else if (meses == Agosto) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else if (meses == Setembro) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else if (meses == Outubro) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else if (meses == Novembro) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else if (meses == Dezembro) {
		printf("%i/%i/%i", Data.dia, meses, Data.ano);
	} else {
		printf("Você digitou o mês errado! \n");
	}
	

	return 0;
}
