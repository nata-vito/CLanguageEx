#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define N 3
#define C 40
#define I 3

int main(){
	
	setlocale(LC_ALL, "");
	int i, b, a, idade[I], maiorIdade=0;
	char nomes[N][C];
	
	for(i=0; i<N; i++)
	{
		system("CLS");
		printf("\n  Digite o %dº nome: ", i+1);
		fflush(stdin);
		gets(nomes[i]);
		printf("  Digite a idade: ");
		scanf(" %d", &idade[i]);
		
		if(idade[i] > maiorIdade){
			maiorIdade = idade[i]; 
			a = i;
		}
	}
	
	system("CLS");
	
	printf("\n  ----- Valores Informados -----\n");
	for(b=0; b<N; b++)
	{
		printf("  %d nome e idade: %s, %d anos.\n", b+1, nomes[b], idade[b]);
	}
	
	printf("  -----\n  O(a) %s tem a maior idade com %d anos.\n  -----", nomes[a], idade[a]);
	
	puts("");
	puts("");
	
	return 0;
}
