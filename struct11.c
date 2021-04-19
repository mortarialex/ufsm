/*11) Crie uma estrutura para descrever 10 restaurantes. Os campos dessa estrutura devem
armazenar: o nome, o endereço e preço da comida por quilo. Calcule e exiba a média de preço da
comida por quilo e imprima quais restaurantes têm o preço da comida menor ou igual à média.*/

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
	
	printf(">>> EXERCÍCIO 11 UFSM <<<\n\n");
	
	restaurante rst[n];
	
	int i, seletor;
	float mediakg = 0;
	
	printf("\t - PREENCHER OS DADOS\n");
	
	for(i = 0; i < n; i++) {
		
		printf("\n\t\t RESTAURANTE [%d]\n\n", i);
		
		printf(" Digite o nome do restaurante: ");
		fflush(stdin);
		gets(rst[i].nome);
		printf(" Digite o endereço do restaurante: ");
		fflush(stdin);
		gets(rst[i].endereco);
		printf(" Digite o preço da comida por quilo: ");
		fflush(stdin);
		scanf("%f", &rst[i].precokg);
		
		mediakg = mediakg + rst[i].precokg;
		
	}
	
	mediakg = (mediakg / n);

	printf("\n\n\t\t - DADOS ARMAZENADOS -\n\n\n");
	printf(" Deseja sair agora (0) ou exibir a lista com a média dos restaurantes com os menores preços e sair (1)? ");
	scanf("%d", &seletor);
	
	switch(seletor) {
		case 0: {
			printf("\t * SAINDO DO PROGRAMA\n");
			exit;
		}
		case 1: {
			
			printf("\n\n\t\t - A MÉDIA DO PREÇO DAS COMIDAS POR KG É DE %.2f. \n\n\n", mediakg);
			
			printf(" \t * LISTA COM OS MENORES PREÇOS\n\n");
		
			for(i = 0; i < n; i++) {
				if((rst[i].precokg <= mediakg)) {
				printf("\n");
				printf(" * Nome: %s.\n", rst[i].nome);
				printf(" * Endereço: %s. \n", rst[i].endereco);
				printf(" * Preço por KG: %.2f.\n", rst[i].precokg);	
				}
			}
		}
	}
	
	printf("\n");
	
}
