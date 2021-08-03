/*
    Ejercicio 15

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que dado un número que se ingresa por teclado, mayor a cero,
    indique si es un número primo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Ingrese un numero mayor a cero: ");
    scanf("%d", &valor);

    if(valor < 0)
    {
        printf("\nNo acepto numeros negativos");
        return 0;
    }

    if(valor == 2 || valor == 3 || valor == 5 || valor == 7 || valor == 11)
    {
        printf("\nEl numero ingresado es primo");
    }
    else if(valor%2 == 0)
    {
        printf("\nEl numero ingresado no es primo");
    }
    else if(valor%3 == 0)
    {
        printf("\nEl numero ingresado no es primo");
    }
    else if(valor%5 == 0)
    {
        printf("\nEl numero ingresado no es primo");
    }
    else if(valor%7 == 0)
    {
        printf("\nEl numero ingresado no es primo");
    }
    else if(valor%11 == 0)
    {
        printf("\nEl numero ingresado no es primo");
    }
    else
    {
        printf("\nEl numero ingresado es primo");
    }

    return 0;
}
