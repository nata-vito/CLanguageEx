#include <stdio.h>
#define quant 300
#define num 6

int main(){
	
	float aposta[quant][num];
	int i, c=0;
	for(i=0; i<quant; i++)
	{
		++c;
		printf("Digite os 6 numeros do %d apostador: ", c);
		for(i=0; i<num; i++)
		{
			scanf("%f", &aposta[i]);
		}
	}	
	printf()
	return ;
}
