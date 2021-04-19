/*Faça um programa que leia um número inteiro positivo N. Crie uma função recursiva que receba o número N lido e calcule o retorne o somatório dos números PARES de 1 a N. 
No programa principal, chame a função criada e passe N como parâmetro, e após mostre o resultado da função. Não precisa usar os #include. (*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int somatoriopares();

void main() {
	setlocale(LC_ALL,"");
	
	printf("\t> PROVA 2 - EXERCÍCIO 3 <\n\n");
	
	int n, r;
	
	printf(" Digite um número: ");
	scanf("%d", &n);
	
	r = somatoriopares(n);

	printf(" A soma dos pares de 1 a %d é: %d.\n\n", n, r);

}

int somatoriopares(n) {
	int soma = 0;
	
	if(n == 0) {
		return soma;
	} else {
		if((n % 2) == 0) {
			soma = soma + n;
		}	
	}
		return soma + somatoriopares(n - 1);
	}
