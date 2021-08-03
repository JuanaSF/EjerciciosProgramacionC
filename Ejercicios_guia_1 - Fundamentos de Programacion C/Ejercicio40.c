/*
    Ejercicio 40

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Haga un programa que permita calcular el costo de una llamada telefónica. Para eso
    se pide que ingrese por teclado, la duración de la llamada (Expresada en minutos,
    enteros) Considere que el costo de la llamada es de $0.054 el segundo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int duracion_llamada;
    float costo;
    const float tarifa = 0.054;

    printf("Ingrese la duracion de su llamada (Expresada en minutos, enteros): ");
    scanf("%d", &duracion_llamada);

    costo = duracion_llamada * tarifa;

    printf("Su llamada telefonica tiene un costo de $%.2f", costo);

    return 0;
}
