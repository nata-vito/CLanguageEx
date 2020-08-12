#include <stdio.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "");	
	int i, b, a, maiorIdade, idade[3];
	char nome[3][40];
	
	for(i=0; i<3; i++)
	{
		printf("Digite o %dº nome: ", i+1);
		scanf(" %s", nome[i]);
		printf("Digite a idade: ");
		scanf(" %d", & idade[i]);
   } 
	 for (b=0; b<3; b++)
		{
			if(idade[b] > maiorIdade)
			{
				maiorIdade=idade[b];
				printf("\nMaior idade é do %s com %d\n",nome[b], maiorIdade);
			}
			printf("%s - %d anos ", nome[b], idade[b]);
		}
		
	return 0;
}
