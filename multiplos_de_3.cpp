//multiplos de 3 de 1 a 500
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int x, contM3=0, soma;
	for( x=1 ; x <= 500; x++ )
	{
		if(x%3 == 0)
		{
			++contM3; // contM3 = contM3+1; || variavel contadora
			printf("\t%d", x);
		}
	}
	
	printf("\n\nQuantidade de Ocorrência: %d", contM3);
	return 0; 
}
