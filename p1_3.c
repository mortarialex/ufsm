/*Fa�a um programa que leia um n�mero inteiro N. Crie um vetor de inteiros, com N posi��es. 
Pe�a ao usu�rio para preencher o vetor, e depois mostre todos os n�meros pares e suas posi��es.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	setlocale(LC_ALL,"");

	printf("\t>> EXERC�CIO 3 - PROVA <<\n\n");
	
	int n, i;
	
	printf(" Digite o n�mero de elementos desejado: ");
	scanf("%d", &n);
	
	int *v = malloc(n * sizeof(int));
	
	printf("\n\t- Vetor de %d posi��es criado!\n\n", n);
	
	for(i = 0; i < n; i++) {
		printf(" Digite o valor da posi��o [%d]: ", i);
		scanf("%d", &v[i]);
	}
	
	printf("\n\t- Vetor preenchido! Imprimindo...\n\n");

	for(i = 0; i < n; i++) {
		printf(" * Posi��o [%d] = %d\n", i, v[i]); 
	}

	free(v);

}
