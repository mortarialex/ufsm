/* 6) Implemente um algoritmo para declarar uma matriz 5 x 5. Preencha com 1 a diagonal principal
e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> EXERCÍCIO 6 UFSM <<<\n\n");
	
	int i, j, m[5][5];
	
	for(j = 0; j < 5; j++) {
		for(i = 0; i < 5; i++) {
			printf("Posição [%d][%d]: ", j, i);
			scanf("%d", &m[j][i]);
		}
	}
	
	for(j = 0; j < 5; j++) {
		for(i = 0; i < 5; i++) {
			if(j == i){
				m[j][i] = 1;
			} else {
				m[j][i] = 0;
			}
		}
	}
	
	printf("\n\n...\n\n");
	
	for(j = 0; j < 5; j++) {
		for(i = 0; i < 5; i++) {	
			printf(" %d ", m[j][i]);
		}
		
	printf("\n");
	
	}
	
	
}
