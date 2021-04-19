/*Faça um algoritmo que fique lendo diversos números inseridos pelo usuário, e faça a soma de todos os números que forem entre 100 e 1000. 
O critério de parada de inserção dos números é a inserção de um número negativo. Ao final, mostre a soma dos números entre 100 e 1000.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	setlocale(LC_ALL,"");

	printf("\t>> EXERCÍCIO 2 - PROVA <<\n\n");

	float n, soma;
	
	do {
		printf(" Digite um número: ");
		scanf("%f", &n);
		
		if((n > 100) && (n < 1000)) {
			soma = soma + n;
		}
		
	} while (n > 0);
	
	printf("\n * A soma dos números entre 100 e 100 é: %.2f.\n", soma);

}
