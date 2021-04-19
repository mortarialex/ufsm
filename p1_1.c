/* Faça um algoritmo que leia um número ‘N” fornecido pelo usuário, e mostre na tela todos os números de N até 0. */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	setlocale(LC_ALL,"");
	
	printf("\t>> EXERCÍCIO 1 - PROVA <<\n\n");
	
	int n, i;
	
	printf(" Digite um número: ");
	scanf("%d", &n);
	
	printf("\n - Imprimindo os números de %d a 0.\n\n", n);
	
	for(i = n; i >= 0; i--) {
		printf(" * %d\n", i);
	}
	
}
