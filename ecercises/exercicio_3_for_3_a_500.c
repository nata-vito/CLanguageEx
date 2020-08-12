#include<stdio.h>

int main()
{
	int n, soma=0, cont=0;
	for(n=1; n<=500 ; n+=2)
	{
		if(n%3==0)
		{
			++cont;
			soma+=n;
			printf("\t%d", n);
		}		
	}
	printf("\n-----------------------------------");	
	printf("\nSOMA DOS %d VALORES IMPARES: %d",cont, soma);
	
	return 0;
}
