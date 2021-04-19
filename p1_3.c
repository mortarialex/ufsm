/*Faça um programa que leia um número inteiro N. Crie um vetor de inteiros, com N posições. 
Peça ao usuário para preencher o vetor, e depois mostre todos os números pares e suas posições.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	setlocale(LC_ALL,"");

	printf("\t>> EXERCÍCIO 3 - PROVA <<\n\n");
	
	int n, i;
	
	printf(" Digite o número de elementos desejado: ");
	scanf("%d", &n);
	
	int *v = malloc(n * sizeof(int));
	
	printf("\n\t- Vetor de %d posições criado!\n\n", n);
	
	for(i = 0; i < n; i++) {
		printf(" Digite o valor da posição [%d]: ", i);
		scanf("%d", &v[i]);
	}
	
	printf("\n\t- Vetor preenchido! Imprimindo...\n\n");

	for(i = 0; i < n; i++) {
		printf(" * Posição [%d] = %d\n", i, v[i]); 
	}

	free(v);

}
