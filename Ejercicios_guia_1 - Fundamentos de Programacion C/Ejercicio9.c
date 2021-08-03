/*
    Ejercicio 9

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que permita realizar la división de 2 (dos) números del tipo coma
    flotante ingresados por teclado.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1, valor2;

    printf("Ingrese un valor: ");
    scanf("%f", &valor1);

    printf("\nIngrese otro valor: ");
    scanf("%f", &valor2);

    printf("\nLa division entre %f y %f es: %.2f", valor1, valor2, (valor1/valor2));

    return 0;
}
