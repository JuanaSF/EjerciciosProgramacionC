/*
    probando toupper: devuelve la may�scula asociada a caracter, si la tiene; si no, devuelve el mismo caracter.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char caracter;
    printf("Ingrese un caracter para obtener su mayuscula: ");
    scanf(" %c", &caracter);

    printf("La mayuscula de %c es %c", caracter, toupper(caracter));

    return 0;
}
