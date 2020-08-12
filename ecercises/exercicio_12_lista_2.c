#include<stdio.h>
#include<stdlib.h>

int main()
{
	float num1;
	printf("PROGRAMA PARA IDENTIFICACAO DE NUMEROS POSITIVOS, NEGATIVOS E NULOS");
	printf("\nDigite um numero: ");
	scanf("%f", & num1);
	
	if (num1>0.00)
	{
		printf("\nO numero %.2f e positivo (+).", num1);
	}
	else 
	if(num1<0.00)
	{
		printf("\nO numero %.2f e negativo (-).", num1);
	}
	else
	if (num1 == 0.00)
	{
		printf("\nO numero %.2f e nulo!", num1);
	}
	
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
