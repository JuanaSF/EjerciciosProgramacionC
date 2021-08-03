/*
    Ejercicio 22

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que permita ingresar 5 números enteros por teclado y que
    muestre en pantalla el promedio.
    Nota: Al igual que el programa anterior, se pide que se coloque un título para mostrar
    en pantalla que hace el programa y sus resultados.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e;
    float promedio;

    printf("CALCULA EL PROMEDIO DE 5 NUMEROS ENTEROS\n");

    printf("Ingrese primer numero: ");
    scanf("%d", &a);

    printf("\nIngrese segundo numero: ");
    scanf("%d", &b);

    printf("\nIngrese tercer numero: ");
    scanf("%d", &c);

    printf("\nIngrese cuarto numero: ");
    scanf("%d", &d);

    printf("\nIngrese quinto numero: ");
    scanf("%d", &e);

    promedio = (a + b + c + d + e)/5.0;

    printf("\nEl promedio de estos 5 numeros es: %.2f", promedio);

    return 0;
}
