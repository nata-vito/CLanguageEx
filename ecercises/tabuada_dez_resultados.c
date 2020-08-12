//tabuada até o 10
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, num, somaTotal=0;
	scanf("%d", &num);
	for( n=1; n<=10; n++)
	{
		somaTotal += n*num; //variável acumuladora
		printf("%d x %d = %d\n", num, n, n*num);
	}
	printf("\nSOMA TOTAL = %d\n", somaTotal);
	return 0;
}
