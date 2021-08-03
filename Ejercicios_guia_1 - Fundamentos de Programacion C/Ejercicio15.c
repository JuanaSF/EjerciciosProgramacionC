/*
    Ejercicio 15

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa que permita ingresar una X cantidad de días, y que como
    resultado, muestre en pantalla, la cantidad de minutos y segundos que hay en esa X
    cantidad de días.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, minutos, segundos;
    const int horasPorDia = 24;

    printf("Ingrese la cantidad de dias: ");
    scanf("%d", &dias);

    minutos = dias * horasPorDia * 60;
    segundos = minutos * 60;

    printf("Para %d dias, existen %d minutos o %d segundos", dias, minutos, segundos);
    return 0;
}
