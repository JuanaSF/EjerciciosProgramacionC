/*
    Ejercicio 16

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Ahora el programa deberá dibujar los dos dibujos anteriores, uno debajo del otro.
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
    **********
    *********
    ********
    *******
    ******
    *****
    ****
    ***
    **
    *
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 1;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < numero; j++)
        {
            printf("*");
        }
        printf("\n");
        numero++;
    }

    numero = 10;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < numero; j++)
        {
            printf("*");
        }
        printf("\n");
        numero--;
    }

    return 0;
}
