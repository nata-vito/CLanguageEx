#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int senha=1234, cont=0, senha1;
    char usuario[4]={'n','a','t','a'};
    char usuario1;
	do
	{
	    printf("\nusuário: ");
        scanf("%s", & usuario1);
        printf("senha: ");
        scanf("%d", &senha1);
        ++cont;
        if(usuario1!=usuario && senha1!=senha)
        {
        	printf("usuário ou senha invalida\n");
		}
    }while(cont<=3 && (usuario1 != usuario && senha1 != senha));


    return 0;
}
