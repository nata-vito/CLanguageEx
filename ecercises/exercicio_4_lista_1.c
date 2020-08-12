#include<stdio.h>
#include<stdlib.h>

int main()
{
	float nota1, nota2, mediaPond;
	printf("MEDIA PONDERADA ENTRE DUAS NOTAS");
	printf("\nDigite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	mediaPond = (nota1*0.3)+(nota2*0,7)/1;
	
	printf("\n=================================");
	printf("\nMedia Ponderada: %.2f", mediaPond);
	printf("\n=================================");
		
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
