/*
    Ejercicio 8

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa que lea un vector de 10 elementos. Deberá imprimir el
    mismo vector por pantalla pero invertido. Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9
    10 el programa debería imprimir 10 9 8 7 6 5 4 3 2 1.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[10];
    srand(time(NULL));

    for(int i = 0; i < 10; i++)
    {
        vector[i] = rand()%11;
    }

    printf("Valores del arreglo\n");

    for(int i = 0; i < 10; i++)
    {
        printf(" %d", vector[i]);
    }

    printf("\nArreglo invertido\n");

    for(int i = 9; i >= 0; i--)
    {
        printf(" %d", vector[i]);
    }

    return 0;
}
