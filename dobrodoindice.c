#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define numeros 10

int main(){
	setlocale(LC_ALL, "");
	int numerosDigitados[numeros], numerosDobro[numeros],  i=0;
	puts("  ----- AVISO -----");
	printf("  Digite apenas valores inteiros\n\n");
	printf("  ------------------------------");
	printf("\n  - DOBRO DOS VALORES DO VETOR -\n");
	printf("  ------------------------------\n");
	
	for(i = 0 ; i < numeros ; i++){
		printf("  Digite o %dº valor: ", i+1);
		scanf("%d", &numerosDigitados[i]);
		numerosDobro[i]= 2*numerosDigitados[i];
	}
	
	system("CLS");
	printf("\n  ----- Valores -----\n");
	
	for(i = 0 ; i < numeros ; i++){
		printf("  %dº valor: %d - %d\n", i+1, numerosDigitados[i], numerosDobro[i]);
	}
	
	return 0;
}
