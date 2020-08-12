/*Faça um programa que receba as idades dos convidados e ao final 
qual é o convidado mais velho e sua idade*/
#include <stdio.h>
#define C 4 //define o número de convidados - trocará o valor de C por 4
#define fim printf("\nFinalizado o programa\n");

int main()
{
	int conv, idade, RefidadeMaisV, RefIdadeMaisJ, RefEntradaConv, somaId=0;
	float media;
	printf("\nCadastro de convidados");
	for ( conv=1   ; conv <= C  ; conv++)  //conv 3
	{
		printf("\nConvidado %d- Qual sua idade ?", conv);
		scanf("%d", &idade); //109   111  7  101
		somaId += idade;  //somaID é acumuladora das idades informadas-- somará todas as idades
		if (conv == 1 )
		{
			RefidadeMaisV = idade;  // 109
			RefEntradaConv = conv;    // 1
			//RefidaddeMenorJ= idade;
		}          
		else //não é mais o primeiro convidado
		{
			if (idade > RefidadeMaisV) 
			{
				RefidadeMaisV= idade;  //111
				RefEntradaConv= conv;   //2
			}
		}	
	}// fim do for
	 
	//após o fim da repetição
	printf("\n\nO convidade %d é o mais velho com %d anos ", RefEntradaConv,RefidadeMaisV);
	media = (float)somaId / C *1.0;
	printf("\n\n A media das idades e %.2f", media);
	fim
	return 0;
}
