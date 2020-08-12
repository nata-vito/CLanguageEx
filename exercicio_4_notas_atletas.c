#include <stdio.h>
#include <locale.h>
#define A 15

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int nota1, nota2, nota3, atletas, cont=0, mediaMenor=0;
	float media;
	printf("\t   --------------------------\t\n");
	printf("\tCÁLCULO DE NOTAS PARA 15 ATLETAS\n");
	printf("\t   --------------------------\t\n");
	
	for (atletas = 1; atletas<=15; atletas++)
	{
		++cont;
		printf("\t\tNOTA JUIZ 1: ");
		scanf("%d", &nota1);
		printf("\t\tNOTA JUIZ 2: ");
		scanf("%d", &nota2);	
		printf("\t\tNOTA JUIZ 3: ");
		scanf("%d", &nota3);
		
		media = (nota1+nota2+nota3)/3.0;
		printf("\t------------------------------");
		printf("\n\t\tMEDIA ATLETA %d: %.2f\n", cont, media);
		
			if(media<5)//acumulador de media inferior a 5
			{
				++mediaMenor;
			}
			
			if(nota1>=nota2 && nota1>=nota3)//maior nota
			{
				printf("\t\tMAIOR NOTA: %d\n", nota1);
			}
			else if(nota2>=nota1 && nota2>=nota3)
			{
				printf("\t\tMAIOR NOTA: %d\n", nota2);
			}
			else if(nota3>=nota1 && nota3>=nota2)
			{
				printf("\t\tMAIOR NOTA: %d\n", nota3);
			}
			
			if(nota1<=nota2 && nota1<=nota3)//menor nota
			{
				printf("\t\tMENOR NOTA: %d\n", nota1);
				printf("\t------------------------------\n");	
			}
			else if(nota2<=nota1 && nota2<=nota3)
			{
				printf("\t\tMENOR NOTA: %d\n", nota2);
				printf("\t------------------------------\n");	
			}
			else if(nota3<=nota1 && nota3<=nota2)
			{
				printf("\t\tMENOR NOTA: %d\n", nota3);
				printf("\t------------------------------\n");	
			}
		}
	
//	printf("\t----------------------------------------");
	printf("     ATLETAS COM PONTUAÇÃO INFERIOR A 5: %d\n",mediaMenor);
	//printf("----------------------------------------");
	return 0; 
}
