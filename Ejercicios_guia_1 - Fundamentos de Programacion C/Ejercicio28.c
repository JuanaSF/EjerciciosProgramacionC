/*
    Ejercicio 28

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que permita introducir el precio de un producto, y que calcule su
    valor final, aplicando un 21% de IVA.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precio;
    const float iva = 1.21;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);

    precio = precio * iva;

    printf("\nValor final del producto, aplicando IVA: %.2f", precio);

    return 0;
}
