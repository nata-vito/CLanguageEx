#include <stdio.h>

int main()
{
	int mp, prod=1;
	printf("Informe a qtd de material ");
	scanf("%d", &mp);  //tem que ter no mínimo 5	
			//10 > 5 V
    while (mp >=5  )   // 4>=5 F  não inicia o processo de fabricação - repetição
    {
    	printf("\nFabricando o produto %d", prod); 
    	    
    	if (prod++ == mp)    
    	    break;
    	    // prod = prod +1; 
	}
	printf("\nEncerrada o processo de fabricação ");
	return 0;
}
