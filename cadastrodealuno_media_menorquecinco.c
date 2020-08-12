#include <stdio.h>
#include <locale.h>
#define alunos 20 //quantidade de alunos

void cadastroAlunos(){
	float nota[alunos], soma=0.0, media, menorNota;
	int i, maiorCinco=0;
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
	printf("\n  ----- Valores Informados -----\n");
	
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
	
	printf("\n  Média dos valores: %.2f\n  Menor nota: %.2f\n  Quantidade de notas acima de 5: %d\n", media, menorNota, maiorCinco);//saída dos valores e objetivo do exercicio
}

int main(){
	setlocale(LC_ALL, "");
	int opcao;
	printf("Escolha a opção");
	
	
	return 0;
}
