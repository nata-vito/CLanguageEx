#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, adicao, subtra, multipli, div;
	printf("CALCULO DE ADICAO, SUBTRACAO, MULTIPLICACAO E DIVISAO ENTRE 2 NUMEROS");
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero:  ");
	scanf("%d", &num2);
	
	adicao = num1+num2;
	subtra = num1-num2;
	multipli = num1*num2;
	div = num1/num2;
	
	printf("\nPrimeiro numero: %d\nSegundo numero: %3d", num1, num2);
	printf("\n\nADICAO: %d", adicao);
	printf("\nSUBTRACAO: %d", subtra);
	printf("\nMULTIPLICACAO: %d", multipli);
	printf("\nDIVISAO: %d", div);
	
	
	
	
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
