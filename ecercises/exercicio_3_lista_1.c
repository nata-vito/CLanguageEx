#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float xreal, fdexreal;
	printf("CALCULO DE f(x)");
	printf("\nDigite o valor de x: ");
	scanf("%f", &xreal);
	printf("\nO valor de x e %.2f", xreal);
	
	fdexreal = sqrt(xreal)+(xreal/2)+pow(xreal,xreal);
	
	printf("\nO resultado e: %.2f", fdexreal);
		
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
