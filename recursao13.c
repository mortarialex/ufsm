/*13) Faça uma função recursiva que receba um número inteiro positivo N e imprima
todos os números naturais de 0 até N em ordem decrescente.*/


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int decres();

void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> 13 <<<\n\n");
	
	int numero;
	
	printf(" Digite um número: ");
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
