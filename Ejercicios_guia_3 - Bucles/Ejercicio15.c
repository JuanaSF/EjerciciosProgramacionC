/*
    Ejercicio 15

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa parecido al anterior, pero que sea así:
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
    int numero = 10;

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
