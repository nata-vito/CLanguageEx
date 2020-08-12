#include <stdio.h>

int main()
{
	int idade;
	
	do
	{
		
		printf("\nInforme sua idade");
		scanf("%d", &idade);    
		if (idade <0  ||  idade > 150)
		{
			printf("\n Informe uma idade válida- de 0 a 150");
		}
		
	} while ( idade <0  ||  idade > 150 );    
	
	printf("\n Idade válida");
	
	return 0;
}
