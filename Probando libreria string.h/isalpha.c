/*
    probando isalpha: Devuelve "verdadero" (un valor distinto de cero) si el carácter está entre A y Z o entre a y z,
    y falso 0(cero) en caso contrario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter para saber si el caracter es una letra: ");
    scanf(" %c", &caracter);

    if(isalpha(caracter) == 0)
    {
        printf("Este caracter no es una letra");
    }
    else
    {
        printf("Este caracter es una letra");
    }

    return 0;
}
