/*
    probando islower: devuelve cierto si caracter es una letra minúscula, y falso en caso contrario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char caracter;
    printf("Ingrese un caracter para saber si es mayuscula o minuscula: ");
    scanf(" %c", &caracter);

    if(islower(caracter))
    {
        printf("Esta es una letra minuscula");
    }
    else
    {
        printf("Esta no es una letra minuscula");
    }

    return 0;
}
