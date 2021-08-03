/*
    Ejercicio 17

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

     Hacer un programa que permita dibujar esto:
             *
            **
           ***
          ****
         *****
        ******
       *******
      ********
     *********
    **********
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 1;
    int aux = 10;

    for(int i = 0; i < 10; i++)
    {
        for(int k = 0; k < aux; k++)
        {
            printf(" ");
        }
        aux--;

        for(int j = 0; j < numero; j++)
        {
            printf("* ");//Le agrego un espacio solo para que se vea mejor la piramide.
        }
        printf("\n");
        numero++;
    }

    return 0;
}
