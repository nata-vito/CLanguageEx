#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define alunos 10

void aprovacao(){
	system("cls");
	int numero, quadrado;
	printf("  Quadrado de um número");
	while(numero != 0){
		printf("\n\n  Digite um número != 0:");
		scanf("%d", &numero);
		quadrado = numero*numero;
		printf("  O quadrado de %d é: %d\n\n", numero, quadrado);
	}	
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	puts("0 - Aprovação de alunos com nota >= 6.0");
	printf("Opção: ");
	scanf("%d", & opcao);
	
		if(opcao==0)
		{
			aprovacao();
		}
		
	
	return 0;
}


