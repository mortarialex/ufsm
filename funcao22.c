/*22. Escreva um algoritmo no qual seja chamada uma função que receba como parâmetro um
ano e retorne 1 se o ano for bissexto, e 0 caso contrário. São bissextos todos os anos não
seculares divisíveis por 4 (mas não por 100) e os anos divisíveis por 400.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int bissexto();

void main() {
	setlocale(LC_ALL,"");

	printf(">>> EXERCÍCIO 22 UFSM <<<\n\n");
	
	int ano, *p_ano;
	p_ano = malloc(sizeof(int));
	p_ano = &ano;
	
	printf(" Digite um ano: ");
	scanf("%d", &ano);
			
	if(bissexto(p_ano) == 1) {
		printf("\n * Ano bissexto.\n");
	} else {
		printf("\n * Não é bissexto.\n");
	}
	
	free(p_ano);
	
}

int bissexto(int *a) {
	if(((*a % 4) == 0) && ((*a % 100) != 0)) {
		return 1;
	} else if(((*a % 400) == 0)) {
		return 1;
	} else {
		return 0;
	}
}
