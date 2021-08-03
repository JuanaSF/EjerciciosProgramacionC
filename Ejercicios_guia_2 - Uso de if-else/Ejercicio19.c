/*
    Ejercicio 19

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Se pide que ingrese el sueldo de un trabajador expresado en con 2 decimales. Si el
    sueldo ingresado es menor a $15.000 , se le debe aplicar un incremento del 15%. Para
    sueldos comprendidos entre $15.000 y $25.000 el incremento debe ser del 10.5% y
    para sueldos superiores a $25.000 el incremento debe ser del 8%. Mostrar en pantalla
    el sueldo ingresado, el % a incrementar y sueldo con incremento.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sueldo, sueldo_incrementado;

    printf("Ingrese su sueldo expresado con 2 decimales: ");
    scanf("%f", &sueldo);

    printf("\nSueldo Ingresado: $%.2f", sueldo);

    if(sueldo < 15000)
    {
        sueldo_incrementado = sueldo * 1.15;
        printf("\nEl incremento es del 15%%");
    }
    else if(sueldo >= 15000 && sueldo < 25000)
    {
        sueldo_incrementado = sueldo * 1.105;
        printf("\nEl incremento es del 10.5%%");
    }
    else
    {
        sueldo_incrementado = sueldo * 1.08;
        printf("\nEl incremento es del 8%%");
    }

    printf("\nEl sueldo con incremento es de $%.2f", sueldo_incrementado);

    return 0;
}
