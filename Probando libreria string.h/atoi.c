/*
    probando atoi: recibe una cadena, Devuelve el entero convertido;
    si str no se puede convertir a int o str es una cadena vacía, se devolverá 0.

    ATOF SIRVE PARA CONVERTIR UNA CADENA A FLOAT
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena[20];
    printf("Ingrese una cadena para convertirla en un entero(si se puede): ");
    scanf(" %s", cadena);

    printf("%d", atoi(cadena));



    return 0;
}
