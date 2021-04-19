/*17) Considere uma string composta por várias subsequencias, por exemplo,
cccaaaabbbbxdddddddddaaannn. A menor subsequencia é a da letra x, com apenas um
elemento; a maior subsequencia é a da letra d, com 9 elementos. Faça um algoritmo para ler uma
string e mostrar qual é a letra que ocorre na maior subsequencia e o tamanho desta.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define T 100

void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> EXERCÍCIO 17 UFSM <<<\n\n");
	
	char string[T], letramaior = ' ', letramenor = ' ';
	
	printf(" Digite uma string de subsequências: ");
	gets(string);

	int i, verifica = 1, maior = 0, menor = 100, tstring;
	
	tstring = strlen(string);
	
	for(i = 0; i < tstring; i++) {
		if(string[i] == string[i + 1]) {
			verifica++;
		} else {
			if (verifica < menor) {
				menor = verifica;
				letramenor = string[i];
			} else if(verifica > maior) {
				letramaior = string[i];
				maior = verifica;
			}
			verifica = 1;
		}
	}
	
	printf("\n * Maior subsequência onde %c aparece %d vezes.\n", letramaior, maior);
	printf("\n * Menor subsequência onde %c aparece %d vezes.\n", letramenor, menor);
	
}
