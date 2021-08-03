/*
    Ejercicio 13

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Haga un programa que permita calcular el área y el perímetro de cuadrado. El
    programa deberá preguntar los valores de los lados y almacenar dichos valores,
    considerando que pueden ser enteros o con decimales.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, area, perimetro;
    printf("Introduzca cuanto mide un lado del cuadrado: ");
    scanf("%f", &lado);

    area = lado * lado;
    perimetro = lado * 4;

    printf("El area del cuadrado es: %.2f y su perimetro es: %.2f", area, perimetro);

    return 0;
}
