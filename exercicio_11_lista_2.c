#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario, venda, comis1, comis2, comis3, comis4;
	printf("COMISSAO DO COLABORADOR\nDigite os valores em decimal!");

	printf("\n\nDigite o salario sem desconto do colaborador: ");
	scanf("%f", & salario);
	printf("\nDigite o valor total vendido: ");
	scanf("%f", & venda);
	
	comis1 = salario+(salario*(1.5/100));
	comis2 = salario+(salario*(5.0/100));
	comis3 = salario+(salario*(7.75/100));
	comis4 = salario+(salario*(12.0/100));
	
	//comis1
	if (venda <= 100.00)
	{
		printf("\nSalario com comissao: %.2f", comis1);
	}
	//comis2
	else 
	if (venda>100.00 && venda<=500.00)
	{
		printf("\nSalario com comissao: %.2f", comis2);
	}
	else
	//comis3
	if(venda>500.00 && venda<=1000.00)
	{
		printf("\nSalario com comissao: %.2f", comis3);
	}
	else
	//comis3
	if (venda>1000.00)
	{
		printf("\nSalario com comissao: %.2f", comis4);
	}

	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
