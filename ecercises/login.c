#include <stdio.h>//para entradas e saidas padrões
#include <stdlib.h>//para system
#include <locale.h>//para definir o idioma e seus caracteres

int main()
{
	setlocale(LC_ALL, "Portuguese");//definição do idioma
	int usuario=015, senha=1234, cont=0, usuario1, senha1, prosseguir;//variáveis(lembrando que pode ser utilizadas de diversos tipos)
	printf("---------\n");
	printf("- LOGIN -");//nome do programa

	do //laço para leitura e comparação do usuário e senha
	{
		printf("\n---------\n");
		printf("Usuário: ");
		scanf("%d", & usuario1);//leitura do usuário1
		printf("Senha: ");
		scanf("%d", & senha1);// leitura da senha
		++cont;//contador de tentativas
		if (usuario!=usuario1 && senha!=senha1)//condicional para verificação da senha e usuário
			{
				printf("---------\n");
				printf("Senha ou usuário inválido");//caso for inválidos
			}
		if(cont==3)//condicional para identificação de invasor
			{
			printf("\n-------------------\n");
			printf("INVASOR DETECTADO");
			return 0;
			}
			
	}while(cont!=3 && (usuario!=usuario1 && senha!=senha1) );//fim do laço se a contagem for diferente de 3 e senha e usuário errados

	printf("-------------------\n");
	printf("\nCÓDIGO DE LANÇAMENTO | ATENÇÃO! SÓ FAÇA ISSO SE REALMENTE FOR NECESSÁRIO!!!\n\nProsseguir: ");//aviso ao usuário
	scanf("%d", & prosseguir);//leitura para a variável prosseguir

		if(prosseguir!=1)//condicional caso prosseguir for diferente do valor 1
		{
		printf("\nSISTEMA DE SEGURANÇA ATIVADO\nO sistema será desligado em 5s");//aviso ao usuário
		_sleep(5000);//mesmo que delay
		return 0;//encerramento do programa
		}
	
	return 0;//encerramento do programa caso INVASOR for detectado
}
