#include<stdio.h>
#include<stdlib.h>

int main()
{   
	float salarioHora=150.00, horasPadrao=40.00, HorasTrabalhadas, refeicao=1.50, salario, salarioBruto, salarioTrible, salarioLiquidoTrible, quantFood, valueFood, salarioLiquido, horasTrabalhadas, horasTrabalhadas1;
	printf("CALCULO DE SALARIO PARA HORAS TRABALHADAS | SysFas");

	printf("\nDigite a quantidades de refeicoes: ");
	scanf("%f", &quantFood);
	
	HorasTrabalhadas = horasTrabalhadas-horasPadrao;
	valueFood = quantFood*refeicao;
	salario = salarioHora*horasTrabalhadas;
	salarioTrible = (22*(salarioHora*3))+(40*salarioHora);
	salarioLiquido = salario-valueFood;
	salarioLiquidoTrible = salarioTrible-valueFood;
	
	printf("\nValor do desconto da refeicao: R$%.2f\nSalario Bruto: R$%.2f\nSalario Liquido: R$%.2f", valueFood, salarioTrible, salarioLiquidoTrible);
			
	//ou
/*	
	printf("\nDigite suas horas trabalhadas: ");
	scanf("%f", & horasTrabalhadas);
	printf("Digite a quantidades de refeicoes: ");
	scanf("%f", &quantFood);
	
	HorasTrabalhadas = horasTrabalhadas-horasPadrao;
	valueFood = quantFood*refeicao;
	salario = salarioHora*horasTrabalhadas;
	salarioTrible = (HorasTrabalhadas*(salarioHora*3))+(horasPadrao*salarioHora);
	salarioLiquido = salario-valueFood;
	salarioLiquidoTrible = salarioTrible-valueFood;
	
	if(horasTrabalhadas<=40.00)
	{
		printf("\nValor do desconto da refeicao: R$%.2f\nSalario Bruto: R$%.2f\nSalario Liquido: R$%.2f", valueFood, salario, salarioLiquido);
	
	}
	if(horasTrabalhadas>40.00)
	{
		printf("\nValor do desconto da refeicao: R$%.2f\nSalario Bruto: R$%.2f\nSalario Liquido: R$%.2f", valueFood, salarioTrible, salarioLiquidoTrible);
	}
*/
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
