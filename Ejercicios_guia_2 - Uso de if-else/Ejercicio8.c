/*
    Ejercicio 8

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita ingresar 3(tres) números por teclado. Determinar si el
    3ero es igual a la suma de los 2(dos) primeros.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;

    printf("Ingrese un numero: ");
    scanf("%d", &n1);

    printf("\nIngrese otro numero: ");
    scanf("%d", &n2);

    printf("\nIngrese otro numero: ");
    scanf("%d", &n3);

    if((n1+n2) == n3)
    {
        printf("\nEl numero %d es igual a la suma de %d + %d", n3, n2,n1);
    }
    else
    {
        printf("\nEl numero %d NO es igual a la suma de %d + %d", n3, n2,n1);
    }

    return 0;
}
