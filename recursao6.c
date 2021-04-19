/*6) Crie um programa em C, que contenha uma fun��o recursiva que receba dois inteiros positivos k e n e calcule k^n. Utilize apenas multiplica��es.
O programa principal deve solicitar ao usu�rio os valores de k e n e imprimir o resultado da chamada da fun��o.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int rs();

void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> 6 <<<\n\n");
	
	int k, n;
	
	printf(" Digite o valor de k: ");
	scanf("%d", &k);
	printf(" Digite o valor de n: ");
	scanf("%d", &n);
	
	printf("\n * k^n = %d", rs(k,n));
	
}

int rs(int l, int m) {
	
	if(m == 0) {
		return 1;
	} else {
		return rs(l, m - 1) * l;
	}
	
}
