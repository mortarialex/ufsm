/*Fa�a um programa que leia um n�mero inteiro positivo N. Crie uma fun��o recursiva que receba o n�mero N lido e calcule o retorne o somat�rio dos n�meros PARES de 1 a N. 
No programa principal, chame a fun��o criada e passe N como par�metro, e ap�s mostre o resultado da fun��o. N�o precisa usar os #include. (*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int somatoriopares();

void main() {
	setlocale(LC_ALL,"");
	
	printf("\t> PROVA 2 - EXERC�CIO 3 <\n\n");
	
	int n, r;
	
	printf(" Digite um n�mero: ");
	scanf("%d", &n);
	
	r = somatoriopares(n);

	printf(" A soma dos pares de 1 a %d �: %d.\n\n", n, r);

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
