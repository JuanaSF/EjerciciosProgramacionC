/*
    Ejercicio 18

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que permita calcular el área y el perímetro de un círculo
    cualquiera. El programa al igual que el ejercicio anterior, deberá permitir el ingreso
    por teclado de la información necesaria para procesar el cálculo y mostrarlo en
    pantalla.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float area, perimetro, radio;
    const float pi = 3.141592;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    area = pi * pow(radio, 2.0);
    perimetro = 2 * pi * radio;

    printf("El perimetro del circulo es: %.2f y su area: %.2f", perimetro, area);

    return 0;
}
