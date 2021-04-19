/*27) Leia uma matriz 100 x 10 que se refere respostas de 10 questões de múltipla escolha,
referentes a 100 alunos. Leia também um vetor de 10 posições contendo o gabarito d e respostas
que podem ser a, b, c ou d. Seu algoritmo deverá comparar as respostas de cada candidato com
o gabarito e emitir um vetor Resultado, contendo a pontuação correspondente.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define Q 100
#define e 10

void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> EXERCÍCIO 27 UFSM <<<\n\n");
	
	int i, j, resultado[Q]; 
	char prova[Q][e], gabarito[Q];
	
	printf("\t- CORREÇÃO DE PROVA -\n\n");
	
	for(i = 0; i < Q; i++) {
		
		printf(">> Preencha com as respostas do aluno %d:\n\n", (i + 1));
		for(j = 0; j < e; j++) {
			printf(" ~ Questão %d: ", (j + 1));
			scanf("%s", &prova[i][j]);
		}
		printf("\n");
	}
	
	printf("\t - RESPOSTAS ARQUIVADAS! -\n\n");
	system("pause");
	
	printf("\n\t - GABARITO -\n\n");
	
	for(i = 0; i < e; i++) {
			printf(" > Questão %d: ", (i + 1));
			scanf(" %c", &gabarito[i]);
	}
	
	printf("\n\t ...\t...\t...");
	printf("\n\t   - CORRIGINDO -\n");
	printf("\t ...\t...\t...\n\n");
	
// zerando os resultados
	for(i = 0; i < Q; i++) {
		resultado[i] = 0;
	}
	
//corrigindo
	for(i = 0; i < Q; i++) {
		for(j = 0; j < e; j++) {
				if(gabarito[j] == prova[i][j]) {
					resultado[i]++;
			}
		}
	}	
	
	printf("\n\t - RESULTADOS -\n\n");
	
	for(i = 0; i < Q; i++) {
		printf(" * Aluno %d, nota final: %d.\n", (i + 1), resultado[i]);
	}
	
}
