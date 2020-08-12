#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define A 3 //numero de alunos
#define Q 5 //numero de alternativas
#define q 4 //numero de questoes


int main(){
	
	setlocale(LC_ALL, "");
	int i, b, c,a, alunos, questoes=0, nota[A], opcao;
	char gabarito[Q]={'a', 'b', 'c', 'd', 'a'};
	char aluno[A][Q];
	char comando;
	
	printf("\n   Gabarito: ");
	for(c=0; c<5; c++)
	{
		printf("\n   Questão %d: %c", c+1, gabarito[c]);
	}	
	
	printf("\n\n   Deseja inserir um novo gabarito? \n   <s/n>\n   ");
	scanf(" %c", & comando);
	if (comando == 's'|| comando == 'S')
	{
		system("CLS");
		printf("\n   Digite o gabarito\n");
		for (i=0; i<5; i++)
		{
			printf("   questão %d: ", i+1);
			scanf(" %c", & gabarito[i]);
		}
		printf("\n   Gabarito: ");
		for(a=0; a<5; a++)
		{
			printf("\n   Questão %d: %c", a+1, gabarito[a]);
		}	
	}
	else if(comando == 'n' || comando == 'N')
	{	
		printf("  ---- CORREÇÃO DA PROVA ----\n");//inserir as respostas corretas
		
		for( i=0; i<A; i++ )
		{
			printf("\n  Digite as alternativas do aluno %d\n", i+1);
			for(b=0; b<5; b++)
			{
				printf("  Questão %d: ", b+1);
				scanf(" %c", &aluno[i][b]);
				if(aluno[i][b] == gabarito[b])
				{
					questoes+=1;
				}
				else if(aluno[i][b] != gabarito[b])
				{
					questoes=0;
				}
			}
			
			nota[i] = questoes*2;
			
			if(nota[i]<6)
			{
				printf("  -----\n  Precisa estudar um pouco mais!\n  Nota: %d\n", nota[i]);
			}
			else
			{
				printf("  -----\n  Nota: %d\n", nota[i]);
			}
			
			questoes = 0;
		}
	//	printf("\n  Quantidade de acertos por questão: \n  Pergunta 1 - %d", acertos[0]);
	}
	return 0;
}
