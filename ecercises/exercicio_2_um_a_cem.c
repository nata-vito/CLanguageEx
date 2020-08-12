//Numeros de 1 a 100, com dobro e triplo de cada um
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	for(i=1 ; i<=100 ; i++)
	{
		printf("\n%d, %d, %d", i, i*2, i*3);
	}
	
	return 0;
}	
