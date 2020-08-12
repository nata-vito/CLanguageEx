#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int sexoCrianca, geneMae, genePai;
	setlocale(LC_ALL, "Portuguese");
	printf("IDENTIFICANDO O DALTÔNISMO");
	printf("\n\n1-Masculino   0-Feminino \nDigite o sexo da criança: ");
	scanf("%d", & sexoCrianca);
	printf("\n1-SIM   0-NÃO\nA mãe é portadora do gene do daltônismo?\nR: ");
	scanf("%d", & geneMae);
	printf("\n1-SIM   0-NÃO\nO pai é portador do gene do daltônismo?\nR: ");
	scanf("%d", & genePai);
		
	
	//para menino
	if (sexoCrianca == 1 && geneMae == 1 )
	{
		printf("\nO MENINO É DALTÔNICO");
	}
	else if(sexoCrianca == 1 && geneMae == 0)
	{
		printf("\nO MENINO NÃO É DALTÔNICO");
	}
	//para menina
	else if (sexoCrianca == 0 && geneMae == 1 && genePai == 1)
	{
		printf("\nA MENINA É DALTÔNICA");
	}
	else if (sexoCrianca == 0 && geneMae == 1 && genePai == 0 || sexoCrianca == 0 && geneMae == 0)
	{
		printf("\nA MENINA NÃO É DALTÔNICA");
	}

	
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}

