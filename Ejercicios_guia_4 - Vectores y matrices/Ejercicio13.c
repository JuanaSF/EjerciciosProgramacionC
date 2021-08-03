/*
    Ejercicio 13

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Ingrese una cadena, verificar si está en minúscula, y convertirla a mayúsculas y
    viceversa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena[50];
    int can_letras = 0, may = 0, min = 0;

    printf("Ingrese una frase: ");
    gets(cadena);

    for(int i = 0; i < strlen(cadena); i++)
    {
        if(isalpha(cadena[i]))
        {
            can_letras++;
            (islower(cadena[i])) ? min++ : may++;
        }
    }

    if(can_letras == may)
    {
        printf("\nLa frase esta toda en mayusculas, en minusculas se veria asi: \n");

        for(int i = 0; i < strlen(cadena); i++)
        {
            printf("%c", tolower(cadena[i]));
        }
    }
    else if(can_letras == min)
    {
        printf("\nLa frase esta toda en minusculas, en mayusculas se veria asi: \n");

        for(int i = 0; i < strlen(cadena); i++)
        {
            printf("%c", toupper(cadena[i]));
        }
    }
    else
    {
        printf("\nLa palabra no se encuentra completamente ni en mayusculas ni en minusculas");
    }


    return 0;
}
