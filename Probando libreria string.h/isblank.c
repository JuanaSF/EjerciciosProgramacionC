/*
    probando isblank: devuelve cierto si caracter es un espacio en blanco o un tabulador.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char caracter = '0';

    if(isblank(caracter) == 0)
    {
        printf("Esto no es un espacio");
    }
    else
    {
        printf("Esto es un espacio");
    }

    return 0;
}
