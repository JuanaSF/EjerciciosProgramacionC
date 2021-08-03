/*
    Ejercicio 18

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que dibuje un rombo completo.
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

    numero = 10;
    aux = 0;

    for(int i = 1; i < 10; i++)
    {
        for(int k = 0; k > aux; k--)
        {
            printf(" ");
        }
        aux--;

        for(int j = 0; j < numero; j++)
        {
            printf(" *");
        }
        printf("\n");
        numero--;
    }

    return 0;
}
