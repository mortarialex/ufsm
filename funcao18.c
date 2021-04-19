/*18. Fa�a uma fun��o que leia um n�mero n�o determinado de valores positivos (o usu�rio deve
digitar zero para encerrar a digita��o) e retorna a m�dia aritm�tica dos mesmos, exibindo
este resultado na fun��o principal (main).*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define TAM 100

float media();

void main() {
	setlocale(LC_ALL,"");

	printf(">>> EXERC�CIO 18 UFSM <<<\n\n");
	
	int i, cont = 0;
	float r;
	int *numeros = malloc(TAM * sizeof(int));
	
	for(i = 0; i < TAM; i++) {
		
		printf(" Digite um n�mero: ");
		scanf("%d", &numeros[i]);
		
		if(numeros[i] == 0) {
		
			break;
		
		} else {
	
		cont++;
		
		}
	}
	
	numeros = realloc (numeros, cont * sizeof(int));
	
	r = media(numeros, cont);
	
	printf("\n * A m�dia dos n�meros digitados � %.2f.\n", r);
	
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
