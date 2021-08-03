/*
    Ejercicio 19

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

     Hacer un programa que calcule el factorial de un número.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, factorial = 1;

    printf("Ingrese un numero para conocer su factorial: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }

    printf("\nEl factorial de %d es = %d", numero, factorial);

    return 0;
}
