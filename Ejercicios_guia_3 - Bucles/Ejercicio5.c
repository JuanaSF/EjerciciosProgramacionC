/*
    Ejercicio 5

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Crear un programa que permita visualizar en pantalla, la tabla del 5 hasta el 5x10. La
    salida en pantalla deberá ser así:
    TABLA DEL 5:
    5 * 0 = 0
    5 * 1 = 5
    …..
    5 * 10 = 50
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado;

    printf("TABLA DEL 5:\n");

    for(int i = 0; i < 11; i++)
    {
        resultado = 5 * i;
        printf("\t5 * %d = %d\n", i, resultado);
    }

    return 0;
}
