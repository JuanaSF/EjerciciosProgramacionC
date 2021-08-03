/*
    Ejercicio 27

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Contar el número de números pares que introduzca el usuario y el número de impares.
    Terminar cuando el usuario introduzca el número 100.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, pares = 0, impares = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    while(numero != 100)
    {
        if(numero%2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }

        printf("\nIngrese otro numero, si desea terminar ingrese 100: ");
        scanf("%d", &numero);
    }

    printf("\nEl total de numeros PARES ingresados es: %d (sin contar el 100)", pares);
    printf("\nEl total de numeros IMPARES ingresados es: %d", impares);

    return 0;
}
