/*
    Ejercicio 19

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que permita ingresar un n�mero por teclado y muestre en
    pantalla, ese n�mero elevado al cuadrado y el mismo n�mero elevado al cubo.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, cuadrado, cubo;

    printf("Ingrese Valor: ");
    scanf("%f", &valor);

    cuadrado = valor * valor;
    cubo = valor * valor * valor;

    printf("El Nro: %.2f elevado al cuadrado es: %.2f", valor, cuadrado);
    printf("\nEl Nro: %.2f elevado al cubo es: %.2f", valor, cubo);

    return 0;
}
