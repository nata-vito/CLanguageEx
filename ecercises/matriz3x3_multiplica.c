#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	int i, j, a=0, b, c, d;
	float M[3][3], X=0.0, multi[9], soma=0;

	printf("\n  Digite o valor para a multiplicação: ");
	scanf("%f", &X);
	
	for(i=0; i<3; i++)
	{
		printf("\n  Digite os valores para a %dª linha: \n", i+1);
		for(j=0; j<3; j++)
		{
			printf("  Valor %d de 3: ", j+1);
			scanf("%f", &M[i][j]);
			multi[a] = X*M[i][j];
			a++;
		}
	}
	
	soma = M[0][2]+M[1][1]+M[2][0];
	
	puts("\n  -----");
	puts("  Valores multiplicados:");
		
	for(c=0; c<9; c++)
	{
		printf("  %.2f", multi[c]);
	}
	
	puts("\n  -----");
	puts("  Soma dos valores na diagonal da matriz:");
	printf("  %.2f", soma);
	
	return 0;
}
