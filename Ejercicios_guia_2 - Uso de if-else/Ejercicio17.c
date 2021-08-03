/*
    Ejercicio 17

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Haga un programa que permita determinar qué tipo de ángulo es, el valor ingresado
    por teclado (recto, agudo, obtuso).

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angulo;

    printf("Ingrese un angulo: ");
    scanf("%d", &angulo);

    if(angulo < 90 && angulo > 0)
    {
        printf("\nEste es un angulo agudo");
    }
    else if(angulo == 90)
    {
        printf("\nEste es un angulo recto");
    }
    else if(angulo > 90 && angulo < 180)
    {
        printf("\nEste es un angulo obtuso");
    }

    return 0;
}
