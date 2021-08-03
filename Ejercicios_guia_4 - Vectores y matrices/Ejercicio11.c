/*
    Ejercicio 11

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa que lea del teclado una cadena y muestre en la pantalla la
    cantidad de consonantes y de vocales que contiene.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena[50];
    char vocales[11] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    int cant_cons = 0, cant_voc = 0, es_vocal = 0;

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
                    cant_voc++;
                    es_vocal = 1;
                    break;
                }
            }

            if(!es_vocal)
            {
                cant_cons++;
            }
        }
    }

    printf("La cadena ingresada tiene %d vocales y %d consonantes", cant_voc, cant_cons);

    return 0;
}
