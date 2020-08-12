#include <stdio.h>

int main(){
	
	int cont=0, cont1=0, menores, idade, media, soma=0;
	char escolha, selecione;
	
	while(selecione == 'N'){
	
		printf("Gosta de perfume com cheiro de fruta <S/N> ?\n");
		scanf("%c", &escolha);
		printf("Qual sua idade?\n");
		scanf("%d", &idade);
		++cont;
		soma+=idade;
		

			
		if (escolha=='S');
		{
			++cont1;
		}
		if (idade<40 && escolha=='N');
		{
			++menores;
		}	
		
		printf("Deseja continuar <S/N> ?\n");
		scanf(" %c", &selecione);
			
	}
	
	
	
	
	return 0;
}
