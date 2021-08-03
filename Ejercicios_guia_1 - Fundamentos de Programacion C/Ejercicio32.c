/*
    Ejercicio 32

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Elabore un programa que realice la conversión de metros a pies
    Donde 1 m = 3.2808 pies.
    Por lo tanto, el usuario proporcionara el dato de N m y el programa dirá a cuantos pies
    equivale.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros, pies;

    printf("Ingrese cantidad de metros: ");
    scanf("%f", &metros);

    pies = metros * 3.2808;

    printf("\n%.2f m equivalen a %.5f pies", metros, pies);

    return 0;
}
