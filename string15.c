/* 15) Construa um algoritmo que receba como entrada uma string (A) e dois caracteres (B e C) e
mostre uma string formada pela substituição de todas as ocorrências do carácter B pelo C dentro
da string A. Ex.: Se A=”a sapa naa lava a pa”, B=”a” e C=”e”, a resposta deve ser: “e sepe nee
leve e pe”. */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define T 100

void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> EXERCÍCIO 15 UFSM <<<\n\n");
	
	char a[T], b, c;
	
	printf(" Digite uma frase: ");
	gets(a);
	
	printf(" Digite um caractere: ");
	scanf(" %c", &b);

	printf(" Digite outro caractere: ");
	scanf(" %c", &c);
	
	int ta, i;
	
	ta = strlen(a);
	
	for(i = 0; i < ta; i++) {
		if(a[i] == b) {
			a[i] = c;
		} else {
			a[i] = a[i];
		}
	}
	
	printf("\n * Trocando os caracteres: ");	
	puts(a);
	
}
