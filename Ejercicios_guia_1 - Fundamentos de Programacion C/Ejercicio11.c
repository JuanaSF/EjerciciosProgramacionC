/*
    Ejercicio 11

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modifique el programa anterior para que los números ingresados sean decimales,
    pero esta vez debe mostrarlos uno debajo del otro. Ej:
    0.3452
    0.1123
    1.5432

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1, valor2, valor3;
    printf("Introduzca Nro 1: ");
    scanf("%f", &valor1);
    printf("Introduzca Nro 2: ");
    scanf("%f", &valor2);
    printf("Introduzca Nro 3: ");
    scanf("%f", &valor3);

    printf("Los numeros ingresados son:\n%f\n%f\n%f", valor1, valor2, valor3);

    return 0;
}
