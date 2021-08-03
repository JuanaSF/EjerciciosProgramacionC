/*
    Ejercicio 12

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que permita calcular la superficie de un triángulo rectángulo. El
    programa debe permitir el ingreso de los valores por teclado y mostrar el resultado
    por pantalla.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, base, superficie;
    printf("Introduzca la base del triangulo rectangulo: ");
    scanf("%f", &base);
    printf("Introduzca la altura del triangulo: ");
    scanf("%f", &altura);

    superficie = (base * altura)/2;

    printf("La superficie del triangulo rectangulo es de: %.2f cm2", superficie);

    return 0;
}
