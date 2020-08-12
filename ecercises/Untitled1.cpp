#include <stdio.h>
#include <stdlib.h>

float  salario;

scanf(“%f”, &salario);

if (salario > 0)

{

            if  (salario <=1450) 

            {

                        printf ("Aumento de 25%");

            }

            else

            {

                        if  (salario > 1450)

                        {

                                    if  (salario <= 2750)

                                    {          

                                               printf ("Aumento de 20%");

                                    }

                                    else

                                    {

                                               if (salario > 4750)

                                               {

                                                           printf("Bem Remunerado");

                                                           printf("Aumento de 17%");

                                               }

                                    }

                        }

            }

}

else

            {

                        printf ("Salário inválido");

            } }
