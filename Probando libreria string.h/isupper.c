/*
    probando isupper: devuelve cierto si caracter es una letra mayúscula, y falso en caso contrario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char caracter;
    printf("Ingrese un caracter para saber si es mayuscula: ");
    scanf(" %c", &caracter);

    if(isupper(caracter))
    {
        printf("Esta es una letra mayuscula");
    }
    else
    {
        printf("Esta no es una letra mayuscula");
    }

    return 0;
}
