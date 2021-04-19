/*Faça um programa que leia uma MATRIZ 5x5, e depois mostre os elementos da diagonal principal da matriz inserida pelo usuario.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define L 5
#define C 5

void main() {
	setlocale(LC_ALL,"");
	
	printf("\t> PROVA 2 - EXERCÍCIO 4 <\n\n");
	
	int **m;
	int i, j;
	
	m = malloc(L * sizeof(int));
	
	for(i = 0; i < L; i++) {
		m[i] = malloc(C * sizeof(int));
	}
	
	for(i = 0; i < L; i++) {
		for(j = 0; j < C; j++) {
			printf(" Digite elemento da posição [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n\t> Matriz digitada: \n\n");
	
	for(i = 0; i < L; i++) {
		printf("\t");
		for(j = 0; j < C; j++) {
			printf(" [%d] ", m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\t> Diagonal principal: \n\n");
	
	printf("\t");

	for(i = 0; i < L; i++) {
			printf(" [%d] ", m[i][i]);
	}
	
	printf("\n");
	
	for(i = 0; i < L; i++) {
		free(m[i]);
	}
	
	free(m);
	
}
