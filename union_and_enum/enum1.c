#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

/*#define TRUE 1  //declarando uma constante

define FALSE 0
*/
/*Enumeração (ENUM) pode declarar constantes inteiras*/

/*enum bool {
	false,   //cada valor assume um valor inteiro
	true
};*/

enum booleano{
	false, 
	true
}; //valores booleanos

int main() { 
   setlocale(LC_ALL, "Portuguese");
   
   	enum booleano value;
   
   printf("Digite 0 ou 1: ");
   scanf("%i", &value);
   
   if(value == true) {
   		printf("Verdadeiro \n");
   } else {
   		printf("Falso \n");
   }
   
   
   return 0;
}


//formas para declarar constantes:

		//define
		//enum
