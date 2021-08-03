/*
    Ejercicio 7

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita ingresar 3(tres) números enteros por teclado,
    mayores a 0. Determinar cuál es el mayor, cual es el menor y cuál es el del centro.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n2, n3;

    printf("Ingrese un numero entero y positivo: ");
    scanf("%d", &n1);

    printf("\nIngrese otro numero entero y positivo: ");
    scanf("%d", &n2);

    printf("\nIngrese otro numero entero y positivo: ");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3)
    {
        printf("El numero %d es el mayor", n1);
        if(n2 > n3)
        {
            printf("\nEl numero %d es el del medio", n2);
            printf("\nEl numero %d es el menor", n3);
        }
        else
        {
            printf("\nEl numero %d es el del medio", n3);
            printf("\nEl numero %d es el menor", n2);
        }
    }
    else if(n2 > n1 && n2 > n3)
    {
        printf("El numero %d es el mayor", n2);
        if(n1 > n3)
        {
            printf("\nEl numero %d es el del medio", n1);
            printf("\nEl numero %d es el menor", n3);
        }
        else
        {
            printf("\nEl numero %d es el del medio", n1);
            printf("\nEl numero %d es el menor", n3);
        }
    }
    else
    {
        printf("El numero %d es el mayor", n3);
        if(n2 > n1)
        {
            printf("\nEl numero %d es el del medio", n2);
            printf("\nEl numero %d es el menor", n1);
        }
    }

    return 0;
}
