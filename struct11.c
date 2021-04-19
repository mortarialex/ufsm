/*11) Crie uma estrutura para descrever 10 restaurantes. Os campos dessa estrutura devem
armazenar: o nome, o endere�o e pre�o da comida por quilo. Calcule e exiba a m�dia de pre�o da
comida por quilo e imprima quais restaurantes t�m o pre�o da comida menor ou igual � m�dia.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define T 100
#define n 10

typedef struct dados {
	char nome[T], endereco[T];
	float precokg;
}	restaurante;


void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> EXERC�CIO 11 UFSM <<<\n\n");
	
	restaurante rst[n];
	
	int i, seletor;
	float mediakg = 0;
	
	printf("\t - PREENCHER OS DADOS\n");
	
	for(i = 0; i < n; i++) {
		
		printf("\n\t\t RESTAURANTE [%d]\n\n", i);
		
		printf(" Digite o nome do restaurante: ");
		fflush(stdin);
		gets(rst[i].nome);
		printf(" Digite o endere�o do restaurante: ");
		fflush(stdin);
		gets(rst[i].endereco);
		printf(" Digite o pre�o da comida por quilo: ");
		fflush(stdin);
		scanf("%f", &rst[i].precokg);
		
		mediakg = mediakg + rst[i].precokg;
		
	}
	
	mediakg = (mediakg / n);

	printf("\n\n\t\t - DADOS ARMAZENADOS -\n\n\n");
	printf(" Deseja sair agora (0) ou exibir a lista com a m�dia dos restaurantes com os menores pre�os e sair (1)? ");
	scanf("%d", &seletor);
	
	switch(seletor) {
		case 0: {
			printf("\t * SAINDO DO PROGRAMA\n");
			exit;
		}
		case 1: {
			
			printf("\n\n\t\t - A M�DIA DO PRE�O DAS COMIDAS POR KG � DE %.2f. \n\n\n", mediakg);
			
			printf(" \t * LISTA COM OS MENORES PRE�OS\n\n");
		
			for(i = 0; i < n; i++) {
				if((rst[i].precokg <= mediakg)) {
				printf("\n");
				printf(" * Nome: %s.\n", rst[i].nome);
				printf(" * Endere�o: %s. \n", rst[i].endereco);
				printf(" * Pre�o por KG: %.2f.\n", rst[i].precokg);	
				}
			}
		}
	}
	
	printf("\n");
	
}
