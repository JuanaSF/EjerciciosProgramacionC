/*
    probando isdigit: Devuelve "verdadero" (un valor distinto de cero) si el carácter es numérico (0 a 9)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter para saber si es un numero: ");
    scanf(" %c", &caracter);

    if(isdigit(caracter))
    {
        printf("Esto es un numero");
    }
    else
    {
        printf("Esto no es un numero");
    }

    return 0;
}
