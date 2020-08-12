#include <stdio.h>
#include <stdlib.h>

int main()
{
	int anoNasc, anoAtual=2020, idadeAnos, idadeMes, idadeDias, idadeHoras, idadeMinutos, idadeSemana, idadeFutura;
	
	printf("CALCULO DE IDADE");
	printf("\nDigite o seu ano de nascimento: ");
	scanf("%d", &anoNasc);
	
	idadeAnos = anoAtual-anoNasc;
	idadeMes = idadeAnos*12;
	idadeDias = idadeAnos*365; 
	idadeSemana = idadeDias/7;
	idadeHoras = idadeDias*24;
	idadeMinutos = idadeHoras*60;
	idadeFutura = idadeAnos+30;
	 
	printf("\nVoce tem %d anos, %d meses, %d semanas, %d dias, %d horas e %d minutos.\nA sua idade em 2050 sera: %d anos.", idadeAnos, idadeMes, idadeSemana, idadeDias, idadeHoras, idadeMinutos, idadeFutura);

	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
