/*
    Ejercicio 11

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita calcular la suma de los cuadrados de los números del
    13 al 25.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor, suma;

    for(int i = 12; i < 25; i++)
    {
        valor = pow((i+1), 2.0);
        suma = suma + valor;
    }

    printf("La suma de los cuadrados de los numeros del 13 al 25 es = %d", suma);

    return 0;
}
