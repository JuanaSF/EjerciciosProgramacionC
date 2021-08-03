/*
    Ejercicio 11

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita resolver una ecuación de primer grado: a*X + b = 0
    El programa debe permitir el ingreso de valores de los coeficientes, considerando que
    si el coeficiente a=0, no existe la ecuación. Caso contrario, se pide hallar X y mostrarlo
    en pantalla.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float x;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);

    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    if(a == 0)
    {
        printf("No existe la ecuacion");
    }
    else
    {
        x = (float)(- b) / (float)a;
        printf("Siendo a = %d y b = %d para la ecuacion a*X + b = 0, el resultado de X es = %.5f", a, b, x);
    }

    return 0;
}
