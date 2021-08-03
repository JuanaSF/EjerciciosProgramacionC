/*
    Ejercicio 15

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Ingresar una cadena de caracteres y muestre por pantalla una cadena formada
    únicamente por las letras en mayúsculas de la cadena ingresada o un mensaje en
    caso de que la cadena ingresada no posea letras en mayúsculas. Ejemplo: Cadena
    ingresada: INFORMatica y ProgramACION i. Muestra: INFORMACION.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena[50];
    int cant_may = 0;

    printf("Ingrese una frase, las letras mayusculas seran mostradas nuevamente: \n");
    gets(cadena);

    for(int i = 0; i < strlen(cadena); i++)
    {
        if(isalpha(cadena[i]) && isupper(cadena[i]))
        {
            cant_may++;
            printf("%c", cadena[i]);
        }
    }

    if(cant_may == 0)
    {
       printf("\nEsta frase no tiene mayusculas");
    }

    return 0;
}
