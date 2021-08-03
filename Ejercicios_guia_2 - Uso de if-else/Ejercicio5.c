/*
    Ejercicio 5

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa para determinar si un número ingresado por teclado es par o
    impar. Se pide que el programa tenga previamente una estructura de control, para que
    en el caso de que el número ingresado sea 0, se muestre un mensaje en pantalla
    indicando “no te puedo decir si es par o impar”. En caso de que el número sea distinto
    de cero, entonces, indicar en pantalla si es par o impar.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Ingrese un numero: ");
    scanf("%d", &valor);

    if(valor == 0)
    {
        printf("No te puedo decir si es par o impar");
    }
    else if(valor%2 == 0)
    {
        printf("El numero es PAR");
    }
    else
    {
        printf("El numero es IMPAR");
    }

    return 0;
}
