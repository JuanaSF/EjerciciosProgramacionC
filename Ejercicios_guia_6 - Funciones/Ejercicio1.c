/*
    Ejercicio 1

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita, mediante el uso de funciones con paso de parámetros
    por valores, realizar el cálculo del cuadrado de cualquier número introducido por el
    usuario. Ej. Si se introduce el nro 2, el programa deberá pasar ese valor a la función que
    calcula el cuadrado del número, devolviendo el valor correcto: 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcular_cuadrado(int valor);

int main()
{
    int valor;
    int cuadrado;

    printf("Ingrese un numero para obtener su cuadrado: ");
    scanf("%d", &valor);

    cuadrado = calcular_cuadrado(valor);

    printf("\nEl cuadrado de %d es: %d", valor, cuadrado);

    return 0;
}

int calcular_cuadrado(int valor)
{
    return pow(valor, 2.0);
}
