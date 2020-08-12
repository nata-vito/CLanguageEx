#include <stdio.h>
#include <stdlib.h>

int main()
{
	float Base, Altura, Area;
	printf("CALCULO DE AREA DE UM TRIANGULO");
	printf("\nDigite o comprimento da base: ");
	scanf("%f", &Base);
	printf("Digite o comprimento da altura: ");
	scanf("%f", &Altura);

	Area = (Base*Altura)/2;
	
	printf("\nA area do triangulo de base %.2f e altura %.2f e de %.2f", Base, Altura, Area);
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
