/*
    Ejercicio 23

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa donde se permita el ingreso por teclado de un numero entre 1 y
    99. Dicho número será la supuesta edad de un individuo. Si el numero ingresado está
    entre 1 y 12 el programa debe imprimir “ES UN NIÑO”. Si está entre 12 y 21 “ES
    ADOLESCENTE”. Si el numero está entre 21 y 69 “ES ADULTO” para números mayores a
    69 “Tercera EDAD”. El programa finaliza cuando se ingresa 0.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    while(edad != 0)
    {
        if(edad > 69)
        {
            printf("Tercera EDAD\n");
        }
        else if(edad <= 69 && edad > 21)
        {
            printf("ES ADULTO\n");
        }
        else if(edad <= 21 && edad > 12)
        {
            printf("ES ADOLESCENTE\n");
        }
        else if(edad <= 12 && edad >= 1)
        {
            printf("ES UN NINIO\n");
        }
        else
        {
            printf("EDAD NO VALIDA\n");
        }

        printf("\nIngrese otra edad, si desea terminar el programa ingrese 0: ");
        scanf("%d", &edad);
    }

    return 0;
}
