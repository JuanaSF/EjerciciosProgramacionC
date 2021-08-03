/*
    Ejercicio 12

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribe un programa que lea del teclado una cadena y construya y muestre en la
    pantalla otra cadena en la que cada vocal haya sido reemplazada por un punto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena[50];
    char vocales[11] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    int es_vocal = 0;

    printf("Ingrese una frase: ");
    gets(cadena);

    for(int i = 0; i < 50; i++)
    {
        if(isalpha(cadena[i]))
        {
            for(int j = 0; j < 10; j++)
            {
                es_vocal = 0;

                if(cadena[i] == vocales[j])
                {
                    es_vocal = 1;
                    break;
                }
            }

            if(es_vocal)
            {
                cadena[i] = '.';
            }
        }
    }

    printf("\La cadena fue modicada y las vocales fueron reemplazadas por puntos");
    printf("\nAhora la cadena es: \n%s", cadena);

    return 0;
}
