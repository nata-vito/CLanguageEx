#include <stdio.h>

int main(){
	
	char palavra[4][10], resposta[6]="Tomate";
	int i, c=0, tamanho=0;;
	for (i=0; i<4; i++)
	{
		puts("Palavra");
		fflush(stdin);
		scanf("%s", palavra[i]);
	} 
	while(palavra[i] != '\0')
	{
		palavra[i][c];
		++c;
	}

	
	
	
	return 0;
}

/*	for (i=0; i<4; i++)
	{
		if(palavra[i][10] == resposta[6] )
		{
			printf("A palavra certa é: %s\n", resposta[6]);
		}
	}*/
