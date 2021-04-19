/*Fa�a um algoritmo que fique lendo diversos n�meros inseridos pelo usu�rio, e fa�a a soma de todos os n�meros que forem entre 100 e 1000. 
O crit�rio de parada de inser��o dos n�meros � a inser��o de um n�mero negativo. Ao final, mostre a soma dos n�meros entre 100 e 1000.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	setlocale(LC_ALL,"");

	printf("\t>> EXERC�CIO 2 - PROVA <<\n\n");

	float n, soma;
	
	do {
		printf(" Digite um n�mero: ");
		scanf("%f", &n);
		
		if((n > 100) && (n < 1000)) {
			soma = soma + n;
		}
		
	} while (n > 0);
	
	printf("\n * A soma dos n�meros entre 100 e 100 �: %.2f.\n", soma);

}
