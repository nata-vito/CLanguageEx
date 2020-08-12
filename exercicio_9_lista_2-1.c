#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	printf("IMPAR OU PAR?");
	_sleep(1500);
	printf("\nDigite um numero qualquer: ");
	scanf("%d", &num);
	
	if(num%2!=0)
	{
		printf("\nEste numero e IMPAR!");
		}
		else
		{
			printf("\nEste numero e PAR!");
			}	
	
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
