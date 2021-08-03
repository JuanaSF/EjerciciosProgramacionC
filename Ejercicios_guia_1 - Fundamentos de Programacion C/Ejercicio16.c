/*
    Ejercicio 16

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita donde se le solicite que ingrese las iniciales de su
    nombre. Deben ser 3 iniciales y se deben ingresar de a una a la vez. Luego, se pide
    mostrar en pantalla las tres letras (iniciales) de su nombre, separadas por un (-).
    Ej:
    Ingrese 1er Inicial: G
    Ingrese 2da Inicial: A
    Ingrese 3er Inicial: A
    Ud. Ingreso: G-A-A

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char primerInicial, segundaInicial, terceraInicial;
    printf("Ingrese primer inicial: ");
    scanf(" %c", &primerInicial); //El espacio antes del %c me ayuda a evitar que lea el enter.
    printf("\nIngrese segunda inicial: ");
    scanf(" %c", &segundaInicial);
    printf("\nIngrese tercer inicial: ");
    scanf(" %c", &terceraInicial);

    printf("\nUsted ingreso: %c-%c-%c", primerInicial, segundaInicial, terceraInicial);
    return 0;
}
