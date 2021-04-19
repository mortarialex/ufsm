/*13) Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e imprima
todos os n�meros naturais de 0 at� N em ordem decrescente.*/


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int decres();

void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> 13 <<<\n\n");
	
	int numero;
	
	printf(" Digite um n�mero: ");
	scanf("%d", &numero);

	decres(numero);
	
}

int decres(int n) {
	if(n == 0) {
		printf("\n * %d", n);
		return 0;
 	
	 } else {
 		
		 printf("\n * %d", n);
		 return decres(n - 1);
	 
	 }
}
