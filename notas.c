#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int alunos, i=0;
	float nota[alunos],  soma, media;
	
	printf("Quantidade de Alunos: ");
	scanf("%d", &alunos);
	
	for(i=0; i<alunos; i++)
	{
		printf("Informe a nota do %dº aluno: ", i+1);
		scanf(" %f", & nota[i]);
		soma+=nota[i];
	}


	return 0;
}
