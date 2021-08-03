/*
    Ejercicio 8 - Con funciones

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modifique el programa anterior, para que se pueda utilizar un menú de opciones. El
    programa debe permitir ingresar datos de contactos, Mostrar todos los contactos, Mostrar
    solo amigos que viven en una zona determianda (Ej: Retiro)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;
    int aux;
    float resta;

    printf("Ingrese un numero: ");
    scanf("%f", &numero);

    aux = (int) numero;
    resta = numero - aux;

    printf("\n%.2f", resta);

    if(resta == 0)
    {
        printf("Este numero es entero");
    }
    else {
        printf("Este numero es decimal");
    }
}
