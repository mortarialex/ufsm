/* Fa�a um algoritmo que leia um n�mero �N� fornecido pelo usu�rio, e mostre na tela todos os n�meros de N at� 0. */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	setlocale(LC_ALL,"");
	
	printf("\t>> EXERC�CIO 1 - PROVA <<\n\n");
	
	int n, i;
	
	printf(" Digite um n�mero: ");
	scanf("%d", &n);
	
	printf("\n - Imprimindo os n�meros de %d a 0.\n\n", n);
	
	for(i = n; i >= 0; i--) {
		printf(" * %d\n", i);
	}
	
}
