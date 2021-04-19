/*7) Escreva um algoritmo que leia uma matriz 10 x 10 e um valor X. O algoritmo deverá fazer uma
busca desse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem
de “não encontrado”.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define T 3

void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> EXERCÍCIO 7 UFSM <<<\n\n");
	
	int i, j, v, p = 0, m[T][T];
	
	printf("- Preencha a matriz de tamanho %d x %d.\n\n", T, T);
	
	for(i = 0; i < T; i++) {
		for(j = 0; j < T; j++) {
			printf("\t[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
		printf("\n- A matriz:\n\n");

	
	for(i = 0; i < T; i++) {
		printf("\t");
		for(j = 0; j < T; j++) {
			printf(" %d ", m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Digite um valor a ser procurado na matriz: ");
	scanf("%d", &v);
	
	printf("\n");
	
	for(i = 0; i < T; i++) {
		for(j = 0; j < T; j++) {
			if(m[i][j] == v) {
				printf(" * Valor encontrado na linha %d, coluna %d.\n", i, j);
				p++;
			}
		}
	}
	
	if(p == 0) {
		printf("\n * Valor não encontrado!\n");
	}
	
}
