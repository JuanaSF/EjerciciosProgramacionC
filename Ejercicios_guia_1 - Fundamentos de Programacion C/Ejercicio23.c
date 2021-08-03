/*
    Ejercicio 23

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que permita, a partir de una X Cantidad de grados Centígrados,
    convertirlo a Fahrenheit.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grados_centigrados, grados_fahrenheit;

    printf("Ingrese los grados centigrados: ");
    scanf("%f", &grados_centigrados);

    grados_fahrenheit = grados_centigrados * (9.0/5.0) + 32;

    printf("\n%.2f grados centigrados equivalen a %.2f grados fahrenheit", grados_centigrados, grados_fahrenheit);

    return 0;
}
