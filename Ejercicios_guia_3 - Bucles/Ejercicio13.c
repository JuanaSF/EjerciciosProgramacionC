/*
    Ejercicio 13

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa que le pida una palabra al usuario, para luego imprimirla 1000
    veces, con espacios intermedios.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[50];

    printf("Ingrese una palabra: ");
    scanf(" %s", &palabra);

    for(int i = 0; i < 1000; i++)
    {
        printf("%s ", palabra);
    }

    return 0;
}
