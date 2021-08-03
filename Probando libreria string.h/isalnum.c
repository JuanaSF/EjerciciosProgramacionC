/*
    probando isalnum: devuelve cierto (un entero cualquiera distinto de cero)
    si caracter es una letra o dígito, y falso (el valor entero 0) en caso contrario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter para saber si es una letra o numero: ");
    scanf(" %c", &caracter);

    if(isalnum(caracter) == 0)
    {
        printf("Este caracter no es ni un numero ni una letra");
    }
    else
    {
        printf("Este caracter es un numero o una letra");
    }

    return 0;
}
