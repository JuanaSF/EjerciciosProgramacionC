/*
    Ejercicio 9

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa, que permita reconocer si una palabra de 5 caracteres es un
    palíndromo o no. Un palíndromo es una palabra que puede leerse de igual forma,
    de adelante hacia atrás o de atrás hacia adelante. Ejemplo: RADAR es un
    palíndromo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[6];

    printf("Por favor ingrese una palabra de 5 letras para saber si es un palindromo\n");

    for(int i = 0; i < 5; i++)
    {
        printf("Ingrese el caracter nro %d: ", i+1);
        scanf(" %c", &palabra[i]);
    }

    if(palabra[0] == palabra[4] && palabra[1] == palabra[3])
    {
        printf("\nEsta palabra en un palindromo!");
    }
    else
    {
        printf("\nEsta palabra no es un palindromo");
    }

    return 0;
}
