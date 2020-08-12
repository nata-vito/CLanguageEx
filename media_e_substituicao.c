#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, faltas, media, controle=80.00, freq, exame;
	int subs;
	printf("MÉDIA E SUBSTITUIÇÃO");
	printf("\nDigite a primeira nota: ");
	scanf("%f", & n1);
	printf("Digite a segunda nota: ");
	scanf("%f", & n2);
	printf("Digite a quantidade de faltas: ");
	scanf("%f", & faltas);
	
	media = (n1*0.4+n2*0.6)/1;
	freq = 100.00-((faltas*100.00)/controle);
	
	printf("\nMédia parcial: %.1f", media);
	printf("\nFrequência: %.1f",freq);
	
	//condições para aprovação sem substituição
	if(media >= 6.0 && freq >75.0)
	{
		printf("\nALUNO APROVADO");
	}
	else if(media >= 6.0 && freq<75.0)
	{
		printf("\nALUNO REPROVADO POR FREQUÊNCIA: %.1f%%", freq);
	}
	
	//condições para aprovação com substituição
	else if(media<6.0)
	{
		printf("\nMédia abaixo do limite de aprovação: %.1f", media);
		printf("\n\nInforme a nota do exame: ");
		scanf("%f", & exame);
		printf("\n1 - PRIMEIRA NOTA    2 - SEGUNDA NOTA\n Qual nota você deseja substituir: ");
		scanf(" %d", & subs);
		switch(subs)
		{
			case 1:
			media = (exame*0.4+n2*0.6)/1;
			if(media>=6.0)
			{
				printf("\nMÉDIA FINAL: %.1f \nALUNO APROVADO", media);	
			}
			else if(media<6.0 && freq <= 75.0)
			{
				printf("\nMÉDIA ABAIXO DO LIMITE DE APROVAÇÃO: %.1f \nALUNO COM DEPENDÊNCIA", media);
			}
			break;
			case 2:
			media = (n1*0.4+exame*0.6)/1;
			if (media>=6.0)
			{
				printf("\nMÉDIA FINAL: %.1f \nALUNO APROVADO", media);
			}
			else if(media<6.0)
			{
				printf("\nMÉDIA ABAIXO DO LIMITE DE APROVAÇÃO: %.1f \nALUNO COM DEPENDÊNCIA",media);
			}
			break;
			default:
				break;
		} 	
	}
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
