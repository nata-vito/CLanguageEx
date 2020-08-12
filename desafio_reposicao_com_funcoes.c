#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define alunos 20 
#define numeros 10


int main(){
	setlocale(LC_ALL, "");
	int opcao, i;
	opcao = menu();
	
	if(opcao == 1)
	{
		system("CLS");
		cadastroAlunos();
	}
	else if(opcao == 2)
	{
		system("CLS");
		dobroIndice();
	}	
	else if(opcao != 1 || opcao !=2)
	{
		puts("  OPÇÃO INVÁLIDA");
	}
	return 0;
}


//MENU
int menu(){
	int op;
	printf("  1 - PROGRAMA PARA CADASTRO DE ALUNOS | MEDIA | QUANTIDADE SUPERIOR A 50\n  2 - O DOBRO DOS ÍNDICES\n  Opção: ");
	scanf(" %d", &op);
	puts("  ---------");
	return op;
}


//CADASTRO DE ALUNOS 
int cadastroAlunos(){
	float nota[alunos], soma=0.0, media, menorNota;
	int i, maiorCinco=0, opcaoSegundo, cont, opcao;
	printf("\n  - CADASTRAMENTO DE %d NOTAS | MÉDIA | MENOR NOTA | QUANTIDADE SUPERIOR A 5 -\n\n", alunos);
	puts("  ----- AVISO -----");
	printf("  Digite os valores conforme a lingua padronizada pelo seu computador\n  Ex.: Inglês - 2.0 | Português - 2,0\n");
	puts("  -----------------");
	
	for(i=0; i<alunos; i++)//enquanto o indice for menor que a quantidade de alunos, o laço continuará sendo executado e será incrementado 1 a variável i
	{
		if(i<9)
		{
			printf("  Informe a %dª nota:  ", i+1);//usuario informará as notas, para que apareça corretamente o numero do aluno usa-se o incremental, pois o primeiro indice sempre é 0
		}
		else if(i>=9)
		{
			printf("  Informe a %dª nota: ", i+1);	
		}
		scanf("%f", & nota[i]);//leitura ds notas, a variavel i é o numero do indice onde será armazendo o valor digitado
		soma+=nota[i];//a variável soma, no momento inicial é = a 0, o seu valor sera somado a nota.
		menorNota=nota[0];//inicialização do menor valor
		
		if(nota[i]>5.0)//condicional para encontrar as notas pelos indices que são maiores que 5
		{
			++maiorCinco;//variável contadora para o número de vezes que as notas foram inferio
		}
		if(i==0)//condicional para a verificação da menor nota, caso for 0, esta sera a menor nota
		{
			menorNota=nota[i];//a variável menorNota sera igual a nota do indice que esta sendo executado, no momento inicial i=0
		}
		else if(nota[i]<=menorNota)//condicional para menor nota caso for superior ao valor armazenado na variável menorNota
		{
			menorNota=nota[i];
		}
	}
	
	system("CLS");//limpeza de tela
	media = soma/alunos;//media dos alunos
	
	printf("\n  - CADASTRAMENTO DE %d NOTAS | MÉDIA | MENOR NOTA | QUANTIDADE SUPERIOR A 5 -\n\n", alunos);
	printf("\n  ----- Valores Informados -----\n\n");
	
	for (i=0; i<alunos; i++)//laço para informa os valores digitados 
		{
			if(i<9)
			{
				printf("  Nota aluno %d  = %.2f\n", 1+i, nota[i]);
			}
			else if(i>=9)
			{
				printf("  Nota aluno %d = %.2f\n", 1+i, nota[i]);
			}
		}
	
	printf("\n  Média dos valores: %.2f\n  Menor nota: %.2f\n  Quantidade de notas acima de 5: %d\n\n  ----------\n\n  Digite 2 para executar o progama DOBRO DOS VALORES DO VETOR\n  0 - Finalizar\n  Digite sua opção: ", media, menorNota, maiorCinco);//saída dos valores e objetivo do exercicio
	
	for(cont = 0; cont <= 3; cont++)
	{
		scanf( "%d", &opcaoSegundo);
		if(opcaoSegundo == 2)
		{
			system("CLS");
			dobroIndice();
		}
		else if(opcao != 0 || opcao != 2)
		{
			printf("  Opção inválida!!!\n  Digite uma opção válida: ");
		}
		if(opcaoSegundo == 0)
		{
			system("CLS");
			return 0;
		}
		if(cont == 3)
		{ 	
			system("CLS");
			return 0;
		}
	}
}



//VETOR DOBRO DE OUTRO VETOR 
int dobroIndice(){
	int numerosDigitados[numeros], numerosDobro[numeros],  i=0, cont, opcao;
	puts("  ----------- AVISO ------------");
	printf("  Digite apenas valores inteiros\n");
	printf("  ------------------------------");
	printf("\n  - O DOBRO DOS ÍNDICES -\n");
	printf("  -----------------------\n");
	
	for(i = 0 ; i < numeros ; i++){
		printf("  Digite o %dº valor: ", i+1);
		scanf("%d", &numerosDigitados[i]);
		numerosDobro[i]= 2*numerosDigitados[i];
	}
	
	system("CLS");
	printf("\n  ----- Valores -----\n\n");
	
	for(i = 0 ; i < numeros ; i++){
		if(i<9)
		{
			printf("  %dº valor e seu dobro:  %d - %d\n", i+1, numerosDigitados[i], numerosDobro[i]);
		}
		else if(i>=9)
		{
			printf("  %dº valor e seu dobro: %d - %d\n", i+1, numerosDigitados[i], numerosDobro[i]);
		}
	}
	
		printf("\n  ----------\n\n  Digite 1 para executar o progama CADASTRAMENTO DE %d NOTAS | MÉDIA | MENOR NOTA | QUANTIDADE SUPERIOR A 5\n  0 - Finalizar\n  Digite sua opção: ", alunos);
	
	for(cont = 0; cont <= 3; cont++)
	{
		scanf("%d", &opcao);
		if(opcao == 1)
		{
			system("CLS");
			cadastroAlunos();
		}
		else if(opcao != 0 || opcao != 1)
		{
			printf("  Opção inválida!!!\n  Digite uma opção válida: ");
		}
		if(opcao == 0)
		{
			system("CLS");
			return 0;
		}
	}
	
}
