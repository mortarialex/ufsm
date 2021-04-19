/*10. Leia um vetor de 10 posi��es e um determinado valor X. Passe o vetor e este n�mero para
uma fun��o, que deve verificar quantas vezes este valor X aparece no vetor. Retornar o
resultado para a fun��o main, exibindo o mesmo.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void preencher();
void imprimir();
int verifica();

void main() {
	setlocale(LC_ALL,"");

	printf(">>> EXERC�CIO 22 UFSM <<<\n\n");
	
	int i, x, resultado;
	int *vetor = malloc(TAM * sizeof(int));
	
	preencher(vetor, TAM);
	
	printf("\n");
	
	imprimir(vetor, TAM);
	
	printf("\n");
	
	printf("\n - Digite um valor x para verificar a exist�ncia no vetor: ");
	scanf("%d", &x);
	
	resultado = verifica(vetor, TAM, x);
	
	if(resultado == 1) {
		printf("\n * O valor %d aparece %d vez no vetor.\n", x, resultado);
	} else if(resultado > 0) {
		printf("\n * O valor %d aparece %d vezes no vetor.\n", x, resultado);
	} else {
		printf("\n * O valor %d n�o aparece no vetor.\n", x);
	}
	
	free(vetor);
	
}

void preencher(int *vetor, int cont) {
	int i;
	
	for(i = 0; i < cont; i++) {
		printf(" - Digite o elemento da posi��o [%d]: ", i + 1);
		scanf("%d", &vetor[i]);
	}
}

void imprimir(int *vetor, int cont) {
	int i;
	
	for(i = 0; i < cont; i++) {
		printf(" - Elemento [%d]: %d.\n", (i + 1), vetor[i]);
	}
	
}

int verifica(int *vetor, int cont, int valor) {
	int j, repete = 0;
	
	for(j = 0; j < cont; j++) {
		if(vetor[j] == valor) {
			repete++;
		} else {
			repete = repete;
		}
	}
	
	return repete;
	
}
