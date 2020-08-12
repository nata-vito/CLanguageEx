#include<stdio.h>
#include<stdlib.h>

int main()
{
	int prod;
	printf("Insira o valor da producao de hoje: ");
	scanf("%d", & prod);
	
	if(prod>=60000)
{
	printf("\nClassificacao BOA!");
}
	else
	if(prod<60000 && prod>=40000)
{
	printf("\nClassificacao REGULAR!");
}
	else
	if(prod<40000)
	{
		printf("\nClassificacao RUIM!!!");
	}
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
