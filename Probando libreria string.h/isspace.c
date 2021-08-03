/*
    probando isspace: devuelve cierto si caracter es un espacio en blanco, un salto de línea,
    un retorno de carro, un tabulador, etc., y falso en caso contrario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter para saber si es un espacio: ");
    scanf("%c", &caracter);

    if(isspace(caracter))
    {
        printf("Esto es un espacio");
    }
    else
    {
        printf("Esto no es un espacio");
    }

    return 0;
}
