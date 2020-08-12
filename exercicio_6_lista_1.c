#include <stdio.h>
#include<stdlib.h>

int main()
{
	float distKm, volumeLitros, consumoMedio;
	
	printf("CONSUMO MEDIO DE COMBUSTIVEL");
	printf("\nDigite a distancia percorrida em km: ");
	scanf("%f", & distKm);
	printf("Digite o volume do tanque em litros: ");
	scanf("%f", &volumeLitros);
	
	consumoMedio = distKm/volumeLitros;
	
	printf("\nO Consumo Medio foi %.1fKm/L", consumoMedio);
	
	
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
