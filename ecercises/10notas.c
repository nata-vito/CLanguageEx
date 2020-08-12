#include <stdio.h>
#include <stdlib.h>
#define alunos 3

int main(){
    int i=0;
    float notasAlunos[alunos], maior=0, menor=0, soma=0;

    printf("Digite 20 notas\n");

    for (i=0;i<alunos;i++){
      printf("nota %d : ", i+1);
      scanf("%f", &notasAlunos[i]);
      soma+=notasAlunos[i];
      if(i==0)
		{
		  	maior=notasAlunos[i];
		  	menor=notasAlunos[i];
		}
      else if(notasAlunos[i]>maior)
	  	{
        	maior=notasAlunos[i];
     	 }
      else if(notasAlunos[i]<menor)
	  	{
            menor=notasAlunos[i];
        }
       
      
    }
    printf("\nA menor nota �: %.2f\nSoma = %.2f", menor, soma);
   
    system("pause");
    return 0;
}
