#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio 1
/*int main() //Progrma de pesquisa perfumes tabajara
{
	char opcao, opcaoEncerra;
	int idade, cont=0, contCheiro=0, contIdade=0, soma=0;
	float mediaIdade;
	
	do
	{
		system("CLS");
		printf("Gosta de perfume com cheiro de fruta <S/N>?\n");
		scanf(" %c", &opcao);
		printf("Qual a sua idade?\n");
		scanf("%d", &idade);
		
		++cont;
		soma+=idade;
		mediaIdade=soma/cont;
		
		printf("Deseja continuar?\n");
		scanf(" %c", &opcaoEncerra);
				
		if (opcao == 'S')
		{
			++contCheiro;
		}		
		if (idade<40 && opcao =='N')
		{
			++contIdade;
		}		
	}while(opcaoEncerra =='S' || opcaoEncerra =='s');
	
	printf("\nPessoas que responderam sim na pergunta 1: %d\nPessoas menores de 40 anos que responderam nao: %d\nMedia das idades: %.2f", contCheiro, contIdade, mediaIdade);
	return 0;
}*/


//Exercicio 2
/*int main() //Progrma de pesquisa da faculdade São Miguel
{
	char estadoCivil, opcaoEncerra;
	int  contAltura=0, contCasado=0;
	float peso, altura, alturaPadrao=1.60;
	
	do
	{
		printf("Qual o seu peso?\n");
		scanf("%d", &peso);
		printf("Qual seu estado civil?\nS - Solteiro | C - Casado\n");
		scanf(" %c", &estadoCivil);
		printf("Qual a sua altura?\n");
		scanf("%f", &altura);
	
		printf("Deseja continuar?\n");
		scanf(" %c", &opcaoEncerra);
				
		if (altura > alturaPadrao)
		{
			++contAltura;
		}		
		if (estadoCivil =='C')
		{
			++contCasado;
		}		
		if(opcaoEncerra=='S')
		{
			system("CLS");
		}
		
	}while(opcaoEncerra =='S' || opcaoEncerra =='s');
	
	printf("\nQuantidade de alunos com mais de 1.60 de altura: %d\nQuantidade de alunos casados: %d", contAltura, contCasado);
	return 0;
}
*/

/*
//Exercicio 3
int main()
{
	setlocale(LC_ALL, "Portuguese"); //Eleição do presidente do Sindicato dos Feirantes
	int candidato, diferenca, contNulos=0, contJuca=0, contAdu=0, contPedro=0, contBranco=0, contNulo=0, opcaoEncerra, menorVoto, maiorVoto;

	do{
	printf("1 - Juca Sincero\n2 - Adu Garra\n3 - Pedro Laranja\n4 - Voto em Branco\n5 - Voto Nulo\n0 - Finalizar\n\nDigite o seu voto: ");		
	scanf("%d", &candidato);
	
	//contagem de votos de cada um
	if (candidato == 1)
	{
		++contJuca;
	}
	else if (candidato == 2)
	{
		++contAdu;
	}
	else if (candidato == 3)
	{
		++contPedro;
	}
	else if (candidato == 4)
	{
		++contBranco;
	}
	else if (candidato == 5)
	{
		++contNulo;
	}
	system("CLS");
	
	
	}while(candidato != 0 );
	printf("\n----- Quantidade de votos de cada canditado -----\nJuca Sincero: %d\nAdu Garra: %d\nPedro Laranja: %d\nVotos Brancos: %d\nVotos Nulos: %d", contJuca, contAdu, contPedro, contBranco, contNulo);
	
	//candidato vencedor
	if(contJuca>contAdu && contJuca>contPedro)
	{
		maiorVoto=contJuca;
		printf("\n\n----- Juca Sincero é o Vencedor! -----");
	}
	else if(contAdu>contJuca && contAdu>contPedro)
	{
		maiorVoto=contAdu;
		printf("\n\n----- Adu Garra é o Vencedor! -----");
	}
	else if(contPedro>contAdu && contPedro>contJuca)
	{
		maiorVoto=contPedro;
		printf("\n\n----- Pedro Laranja é o Vencedor! -----");
	}
	
	if(contJuca<contAdu && contJuca<contPedro)
	{
		menorVoto=contJuca;
	}
	else if(contAdu<contJuca && contAdu<contPedro)
	{
		menorVoto=contAdu;
	}  
	else if(contPedro<contJuca && contPedro<contAdu)
	{
		menorVoto=contPedro;
	}  
	diferenca= maiorVoto-menorVoto;
		
	printf("\nA diferença entre o mais votado e o menos votado é: %d votos", diferenca);
	
	return 0;
}
*/


