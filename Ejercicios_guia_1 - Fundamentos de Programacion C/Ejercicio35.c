/*
    Ejercicio 35

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa que permita al usuario introducir un valor expresado en Horas, y
    calcule su equivalente en Minutos y en Segundos.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int horas, minutos, segundos;

    printf("Ingrese la cantidad de horas: ");
    scanf("%d", &horas);

    minutos = horas * 60;
    segundos = minutos * 60;

    printf("\nEn %d horas, existen %d minutos o %d segundos", horas, minutos, segundos);

    return 0;
}
