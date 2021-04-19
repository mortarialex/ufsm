/*8) Faça um algoritmo que preencha uma matriz 3 x 4, calcule e mostre:
- a quantidade de elementos pares;
- a soma dos elementos ímpares;
- a média de todos os elementos.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> EXERCÍCIO 8 UFSM <<<\n\n");
	
	int i, j;
	
	do {
		printf(" Quantas linhas a matriz deve ter? ");
		scanf("%d", &i);
		if(i < 0) {
			printf("\n !! Número inválido. Tente novamente.\n\n");
		}
	} while(i < 0);
		
	printf("\n");
		
	do {
		printf(" E quantas colunas? ");
		scanf("%d", &j);
		if(j < 0) {
			printf("\n !! Número inválido. Tente novamente.\n\n");
		}
	} while(j < 0);
	
	int soma = 0, pares = 0, l, c, m[i][j];
	float media;
	
	printf("\n- Preenchendo a matriz de %d linhas e %d colunas.\n\n", i, j);
	
	for(l = 0; l < i; l++){
		for(c = 0; c < j; c++) {
			printf(" [%d][%d]: ", l, c);
			scanf("%d", &m[l][c]);
			
			if((m[l][c] % 2) == 0) {
				pares++;
			} else {
				soma = soma + m[l][c];
			}
			
			media = media + m[l][c];
			
		}
	}
	
	printf("\n- A matriz:\n\n");
	
	for(l = 0; l < i; l++){
		printf("\t");
		for(c = 0; c < j; c++) {
			printf(" %d", m[l][c]);
		}
		printf("\n");
	}
	
	printf("\n * A quantidade de elementos pares: %d.\n", pares);
	printf("\n * A soma dos elementos ímpares é: %d.\n", soma);
	printf("\n * A média de todos os elementos é %.2f.\n", (media/(i*j)));
	
	
}
