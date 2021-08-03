/*
    Ejercicio 41

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa que solicite por teclado 3 nùmeros (datos enteros) y que lo
    mismos sean almacenados en 3 variables diferentes, llamadas a, b, y c,
    respectivamente. Se pide que el programa haga lo siguiente:
    a) Que el contenido de a pase a ser el doble de c
    b) Que el contenido de b pase a ser la suma de a+c
    c) Que el contenido de c pase a ser el triple de b.
    d) MUESTRE EN PANTALLA TODOS LOS RESULTADOS.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, auxiliar;

    printf("Ingrese un numero entero: ");
    scanf(" %d", &a);

    printf("\nIngrese otro numero entero: ");
    scanf(" %d", &b);

    printf("\nIngrese otro numero entero: ");
    scanf(" %d", &c);

    printf("\nA = %d, B = %d, C = %d", a, b, c);

    auxiliar = a;
    a = c * 2;

    printf("\nAhora A es igual al doble de C: %d", a);

    a = auxiliar;
    auxiliar = b;
    b = a + c;

    printf("\nAhora B es igual a la suma de A + C: %d", b);

    b = auxiliar;
    c = b * 3;

    printf("\nAhora C es igual al triple de B: %d", c);

    return 0;
}
