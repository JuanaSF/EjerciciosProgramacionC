/*
    Ejercicio 6

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que nos pregunte el año de nacimiento, el año actual, y nos
    calcule nuestra edad.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anio_nacimiento, anio_actual, edad;

    printf("Cual es tu anio de nacimiento? (expresado en numeros): ");
    scanf("%d", &anio_nacimiento);

    printf("\nIngrese el anio actual: (expresado en numeros): ");
    scanf("%d", &anio_actual);

    edad = anio_actual - anio_nacimiento;

    printf("\nSu edad es: %d", edad);

    return 0;
}
