/*
    Ejercicio 10

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita calcular la suma de los cuadrados de los números del
    1 al 10.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor, suma;

    for(int i = 0; i < 10; i++)
    {
        valor = pow((i+1), 2.0);
        suma = suma + valor;
    }

    printf("La suma de los cuadrados de los numeros del 1 al 10 es = %d", suma);

    return 0;
}
