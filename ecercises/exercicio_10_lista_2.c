#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Tempo
	float horas, botoes, mediaCo, mediaInd = 50.00;
	printf("Quantas horas voce trabalhou hoje?");
	printf("\nRESPOSTA: ");
	scanf("%f", &horas);
	
	//Botoes
	printf("\n\nQuantos botoes voce produziu hoje?");
	printf("\nRESPOSTA: ");
	scanf("%f", &botoes);
	
	//media
	mediaCo = botoes/horas;
		
	//Verificação
	printf("\n\nHoras trabalhadas hoje: %.2f \nQuantidade de botoes produzidos hoje: %.2f\nA sua media de producao hoje: %.2f", horas, botoes, mediaCo);
	
	//Condição 
	if (mediaCo>mediaInd)
	{
		printf("\n\nVoce foi contemplado!!! A empresa te PARABENIZA pelo SUCESSO!!!");
	}
	else
	{
		_sleep(3000);
	}
 
	
	printf("\n\n\n\n");
	system("PAUSE");
	return 0;
}
