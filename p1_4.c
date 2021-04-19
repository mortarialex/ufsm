/*Faça um algoritmo que mostre na tela todos os números primos entre 1.000 e 10.000.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define LIM1 1000
#define LIM2 10000


void main() {
	setlocale(LC_ALL,"");

	printf("\t>> EXERCÍCIO 4 - PROVA <<\n\n");
	
	int i, n, r = 0;
	
	printf(" Números primos entre %d e %d: \n\n", LIM1, LIM2);
	
	for(n = LIM1 + 1; n < LIM2; n++) {
		for(i = 1; i <= n; i++) {
			if((n % i) == 0) {
				r++;
			}
		}
		
		if(r == 2) {
			printf(" * %d\n", n);
		} else {
			r = 0;
		}
		
	}
	
}
