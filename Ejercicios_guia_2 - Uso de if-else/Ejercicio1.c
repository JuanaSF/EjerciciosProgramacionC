/*
    Ejercicio 1

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Haga un programa que solicite el ingreso de un número por teclado e indique si es
    mayor a 100.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Ingrese un numero: ");
    scanf("%d", &valor);

    if(valor > 100)
    {
        printf("El numero %d es mayor a 100", valor);
    }
    else
    {
        printf("El numero %d no es mayor a 100", valor);
    }

    return 0;
}
