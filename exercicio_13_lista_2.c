#include<stdio.h>
#include<stdlib.h>

int main()
{
	float num1, num2, dif1, dif2;
	printf("DIFERENCA DO MAIOR PELO MENOR");
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &num1);
	printf("\nDigite o segundo valor: ");
	scanf("%f", & num2);

	dif1 = num1 - num2;
	dif2 = num2 - num1;
	 
	if(num1>num2)
	{
		
		printf("\nA diferenca e: %.2f", dif1);
	}
	else
	{
		printf("\nA diferencae: %.2f", dif2);
	}
		
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
