/*
    Ejercicio 20

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Utilizando la estructura de repetición While, imprimir en pantalla, las tablas de
    multiplicar, hasta el número 10, del 1 a N. Donde N es el valor que el usuario ingresa
    por pantalla.

    Ej: Si el usuario ingresa N=3, el programa deberá imprimir en pantalla, la tabla del 1, la del
    2 y la del 3, hasta el 10 inclusivo (1x10; 2x10 y 3x10).

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad_tablas, resultado;
    int tabla = 1;
    printf("Ingrese la cantidad de tablas que desea conocer: ");
    scanf("%d", &cantidad_tablas);

    while(0 < cantidad_tablas)
    {
        printf("\nTABLA DEL %d\n", tabla);

        for(int i = 0; i < 11; i++)
        {
            resultado = tabla * i;
            printf("\t%d * %d = %d\n", tabla, i, resultado);
        }

        tabla++;
        cantidad_tablas--;
    }

    return 0;
}
