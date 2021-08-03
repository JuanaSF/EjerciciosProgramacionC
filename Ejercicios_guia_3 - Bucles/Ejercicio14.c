/*
    Ejercicio 14

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Crear un programa utilizando bucles que nos dibuje esto:
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

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j<numero; j++)
        {
            printf("*");
        }
        printf("\n");
        numero++;
    }

    return 0;
}
