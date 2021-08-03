/*
    Ejercicio 4

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita ingresar una letra (en mayúsculas o en minúsculas) y
    determina si es una vocal o es consonante.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Ingrese una letra (puede estar en mayuscula o minuscula): ");
    scanf(" %c", &letra);

    if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')
    {
        printf("\nLa letra ingresada es una vocal");
    }
    else
    {
        printf("\nLa letra ingresada es una consonante");
    }

    return 0;
}
