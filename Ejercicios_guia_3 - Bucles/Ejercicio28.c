/*
    Ejercicio 28

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Elabora un algoritmo tal que solicite palabras hasta que se introduzca la palabra ‘FIN’ o
    ‘fin’. Muestra cuántas palabras introdujo el usuario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[60];
    int cantidad_palabras = 0;
    const char FIN[4] = {'F', 'I', 'N'};
    const char fin[4] = {'f', 'i', 'n'};

    do
    {
        printf("\nIngrese una palabra \nPara terminar el programa ingrese FIN o fin: \n");
        scanf(" %s", &palabra);

        if(strcmp(palabra, fin)!= 0 && strcmp(palabra, FIN)!= 0)
        {
            cantidad_palabras++;

        }
    }
    while(strcmp(palabra, fin)!= 0 && strcmp(palabra, FIN)!= 0);

    printf("\nLa cantidad de palabras que ingreso es: %d", cantidad_palabras);

    return 0;
}
