/*5) Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int somatorio();

void main() {
	setlocale(LC_ALL,"");

	printf(">>> 5 <<<\n\n");
	
	int numero;
	
	printf(" Digite um número: ");
	scanf("%d", &numero);
	
	printf("\n * A soma de 1 a %d é %d.\n", numero, somatorio(numero));
	
}

int somatorio(int a) {
	
	if(a == 1) {
		return 1;
	} else {
		return a + somatorio(a - 1);
	}
	
}
