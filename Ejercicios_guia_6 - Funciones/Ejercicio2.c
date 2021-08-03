/*
    Ejercicio 2

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un Programa que permita calcular mediante el uso de funciones, SIN paso de
    parámetros, el área de un rectángulo cuyos lados serán ingresados por teclado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcular_area_rec();

int main()
{
    float area;

    printf("Averigue el area de un rectangulo\n");
    area = calcular_area_rec();

    printf("\nEl area de este rectangulo es: %.2f", area);

    return 0;
}

int calcular_area_rec()
{
    float lado1, lado2;

    printf("\nIngrese el alto del rectangulo: ");
    scanf("%f", &lado1);

    printf("Ingrese el ancho del rectangulo: ");
    scanf("%f", &lado2);

    return lado1*lado2;
}
