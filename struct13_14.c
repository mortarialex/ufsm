/*13) Crie uma estrutura chamada Endereco que contenha os campos Rua, Numero e Bairro. Em
seguida declare uma variável do tipo Endereco

14) Crie uma estrutura chamada Cadastro que tenha os campo Nome, Ender, Telefone e Idade,
onde Ender é do tipo Endereco conforme o exercício anterior. Declare uma variável DadosAluno
como sendo do tipo Cadastro.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define T 100
#define n 5

typedef struct endereco {
	char rua[T], bairro[T];
	int numero;
}	endereco;

typedef struct cadastro {
	char nome[T];
	endereco ender;
	long int telefone, idade; 
} cadastro;


void main() {
	setlocale(LC_ALL,"");
	
	printf(">>> EXERCÍCIO 13 - 14 UFSM <<<\n\n");
	
	cadastro dadosaluno[n];
	
	int i, seletor;
	
	for(i = 0; i < n; i++) {
		printf("\t\tAluno [%d]\n\n", (i + 1));

		printf(" Digite o nome: ");
		fflush(stdin);
		gets(dadosaluno[i].nome);
		
		printf(" Digite a idade: ");
		fflush(stdin);
		scanf("%d", &dadosaluno[i].idade);
		
		printf(" Digite o endereço (Rua): ");
		fflush(stdin);
		gets(dadosaluno[i].ender.rua);	
	
		printf(" Digite o endereço (Bairro): ");
		fflush(stdin);
		gets(dadosaluno[i].ender.bairro);	
		
		printf(" Digite o endereço (número): ");
		fflush(stdin);
		scanf("%d", &dadosaluno[i].ender.numero);	
		
		printf(" Digite o telefone: ");
		fflush(stdin);
		scanf("%d", &dadosaluno[i].telefone);	
		
		printf("\n");		
	}
	
	printf("\t\t - DADOS CADASTRADOS -\n\n");
	
	printf("\n - Digite 0 para sair ou 1 para ver a lista: ");
	scanf("%d", &seletor);
	
	switch(seletor) {
		case 0: {
			printf(" * Programa finalizado.\n\n");
			exit;
		}	
		
		case 1: {
			for(i = 0; i < n; i++) {
				
				printf("\n\n\n\t\t[%d]\n\n", (i + 1));
				
				printf(" Nome: %s.\n", dadosaluno[i].nome);
				printf(" Idade: %d.\n", dadosaluno[i].idade);
				printf(" Rua: %s.\n", dadosaluno[i].ender.rua);
				printf(" Bairro: %s.\n", dadosaluno[i].ender.bairro);
				printf(" Número: %d.\n", dadosaluno[i].ender.numero);
				printf(" Telefone: %d.\n", dadosaluno[i].telefone);
				
			}
		}
	}
	
	printf("\n");
	
}
