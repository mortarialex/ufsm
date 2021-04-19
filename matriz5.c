/*24) Escreva um algoritmo que lê uma matriz M(10,10) e a escreve. Troque, a seguir:
a) a linha 2 com a linha 8;
b) a coluna 4 com a coluna 10.
Escreva a matriz depois de modificada. */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define M 10

void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> EXERCÍCIO 5 UFSM <<<\n\n");
	
	int i, c = 100, j, m[M][M], aux[M];
	
	for(i = 0; i < M; i++) {
		for(j = 0; j < M; j++) {
			printf(" Preencha a posição [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n - Matriz digitada:\n\n");
	
	for(i = 0; i < M; i++) {
		printf("\t");
		for(j = 0; j < M; j++) {
			printf(" %d ", m[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < M; i++) {
		for(j = 0; j < M; j++) {
			if(i == 2) {
				aux[j] = m[i][j];
			} else if(i == 8) {
				m[i-6][j] = m[i][j];
				m[i][j] = aux[j];
			}
		}
	}
	
	printf("\n - Matriz com as linhas trocadas:\n\n");
	
	for(i = 0; i < M; i++) {
		printf("\t");
		for(j = 0; j < M; j++) {
			printf(" %d ", m[i][j]);
		}
		printf("\n");
	}
	
	
}
	
