/*18. Faça uma função que leia um número não determinado de valores positivos (o usuário deve
digitar zero para encerrar a digitação) e retorna a média aritmética dos mesmos, exibindo
este resultado na função principal (main).*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define TAM 100

float media();

void main() {
	setlocale(LC_ALL,"");

	printf(">>> EXERCÍCIO 18 UFSM <<<\n\n");
	
	int i, cont = 0;
	float r;
	int *numeros = malloc(TAM * sizeof(int));
	
	for(i = 0; i < TAM; i++) {
		
		printf(" Digite um número: ");
		scanf("%d", &numeros[i]);
		
		if(numeros[i] == 0) {
		
			break;
		
		} else {
	
		cont++;
		
		}
	}
	
	numeros = realloc (numeros, cont * sizeof(int));
	
	r = media(numeros, cont);
	
	printf("\n * A média dos números digitados é %.2f.\n", r);
	
	free(numeros);
	
}

float media(int *n, int count) {
	int j;
	float media = 0;
	
	for(j = 0; j < count; j++) {
		media = media + n[j];
	}
	
	media = media/count;
		
	return media;
}
