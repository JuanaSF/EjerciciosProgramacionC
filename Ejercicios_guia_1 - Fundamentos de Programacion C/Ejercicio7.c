/*
    Ejercicio 7

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que nos pregunte el primer nombre, y nos salude. Ej: Hola Gaston
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre [60];

    printf("Cual es tu primer nombre? :\n");
    scanf(" %s", nombre);

    printf("Hola %s!", nombre);

    return 0;
}
