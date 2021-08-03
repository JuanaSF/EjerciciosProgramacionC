/*
    Ejercicio 21

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Haga un programa que permita calcular la raíz cuadrada de un valor ingresado por
    teclado.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valor, raiz;

    printf("Ingrese un valor: ");
    scanf("%f", &valor);

    if(valor < 0)
    {
        printf("\nEl numero: %.2f no tiene una raiz cuadrada dentro de los numeros reales", valor);
    }

    raiz = sqrt(valor);

    printf("\nLa raiz cuadrada del numero: %.2f es: %.2f", valor, raiz);

    return 0;
}
