/*Fa�a um programa que: 

Crie uma estrutura do tipo Tmoto que contenha os seguintes campos: ano: inteiro; marca, modelo, cor: frase[80], preco: n�mero real. (0,5) 

No programa principal, pe�a ao usu�rio um n�mero inteiro N, e crie um vetor do tipo Tmoto, com N elementos, e preencha-os com dados inseridos pelo usu�rio. (0,5) 

Fa�a uma fun��o para baixar 10% o pre�o de todas as motos brancas. Essa fun��o deve ser chamada no programa principal, da seguinte forma: baixar_brancos()      (1,5) 

Mostre na tela todos os dados de todas as motos fabricadas at� 2010. (1,5) */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define T 80

typedef struct motos {
	char marca[T], modelo[T], cor[T];
	int ano;
	float preco;
} Tmoto;

void baixar_brancas();

void main() {
	setlocale(LC_ALL,"");
	
	printf("\t>> PROVA 2 - EXERC�CIO 2 <<\n\n");

	int n;

	printf(" Digite o n�mero de motos para cadastrar: ");
	scanf("%d", &n);
	
	Tmoto dados[n];
	
	int i;
	
	printf("\n");
	
	for(i = 0; i < n; i++) {
		printf(" - Digite a marca da moto [%d]: ", i+1);
		scanf("%s", &dados[i].marca);
		fflush(stdin);
		
		printf(" - Digite o modelo da moto [%d]: ", i+1);
		scanf("%s", &dados[i].modelo);
		fflush(stdin);
		
		printf(" - Digite a cor da moto [%d]: ", i+1);
		scanf("%s", &dados[i].cor);
		fflush(stdin);
		
		printf(" - Digite o ano da moto [%d]: ", i+1);
		scanf("%d", &dados[i].ano);
		fflush(stdin);
		
		printf(" - Digite o pre�o da moto [%d]: ", i+1);
		scanf("%f", &dados[i].preco);
		fflush(stdin);
		
		printf("\n");
	}
	
		char br[T] = "branca";
		char BR[T] = "BRANCA";
	
	for(i = 0; i < n; i++) {
		if((strcmp(dados[i].cor, br) == 0) || (strcmp(dados[i].cor, BR) == 0)) {
			baixar_brancas(&dados[i].preco);
		}
	}
	
	printf("\t > Pre�o alterado das motos brancas: \n\n");
	
	for(i = 0; i < n; i++) {
		
		if((strcmp(dados[i].cor, br) == 0) || (strcmp(dados[i].cor, BR) == 0)) {
		
		printf("    * Moto [%d]\n\n", i+1);
		
		printf(" * Marca: ");
		puts(dados[i].marca);
		
		printf(" * Modelo: ");
		puts(dados[i].modelo);
		
		printf(" * Cor: ");
		puts(dados[i].cor);
			
		printf(" * Ano: %d\n", dados[i].ano);
				
		printf(" * Pre�o: %.2f\n", dados[i].preco);
		
		printf("\n");
			
		}
	}
	
	printf("\t > Motos fabricadas at� o ano de 2010: \n\n");
	
	for(i = 0; i < n; i++) {
		
		if(dados[i].ano <= 2010) {
		
		printf("    * Moto [%d]\n\n", i+1);
		
		printf(" * Marca: ");
		puts(dados[i].marca);
		
		printf(" * Modelo: ");
		puts(dados[i].modelo);
		
		printf(" * Cor: ");
		puts(dados[i].cor);
		
		printf(" * Ano: %d\n", dados[i].ano);
		
		printf(" * Pre�o: %.2f\n", dados[i].preco);
		
		printf("\n");
		
		}
	}
}
	
void baixar_brancas(float *apreco) {

		*apreco = *apreco - (*(apreco) * 0.1);

}
