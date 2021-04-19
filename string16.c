/*16) Leia duas strings. Se as strings forem iguais escreva “strings iguais”. Caso contrário,
concatene as duas strings e imprima a string resultante.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#define T 100

void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> EXERCÍCIO 17 UFSM <<<\n\n");

	char s1[T], s2[T];
	
	printf(" Digite uma frase: ");
	gets(s1);
	printf(" Digite outra frase: ");
	gets(s2);

	int ts1, ts2, i;
	
	ts1 = strlen(s1);
	ts2 = strlen(s2);

	if(strcmp(s1,s2) == 0) {
		printf("\n * Strings iguais!.\n");
	} else {
		if(isupper(s1[i])) {
			
			for(i = 0; i < T; i++) {
				s2[i] = tolower(s2[i]);
				s1[i] = tolower(s1[i]);
			}
							
		} else if(isupper(s2[i])) {
		
			for(i = 0; i < T; i++) {
				s1[i] = tolower(s1[i]);
				s2[i] = tolower(s2[i]);
			}			
		
		} else {
			s1[0] = toupper(s1[0]);
		}
		
		if(strcmp(s1,s2) == 0) {
			printf("\n * Frases iguais!.\n");
		}
		
		else {
			strcat(s1," ");
			printf("\n * São diferentes. Concatenadas: %s. \n", strcat(s1,s2));
		}
	}
	
}
