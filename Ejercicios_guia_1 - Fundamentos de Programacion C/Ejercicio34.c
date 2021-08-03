/*
    Ejercicio 34

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa que calcule la hipotenusa de un triángulo rectángulo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cateto_a, cateto_b, hipotenusa;

    printf("Ingrese un lado del triangulo: ");
    scanf("%f", &cateto_a);

    printf("\nIngrese el otro lado del triangulo: ");
    scanf("%f", &cateto_b);

    hipotenusa = sqrt(pow(cateto_a, 2.0) + pow(cateto_b, 2.0));

    printf("La hipotenusa de este triangulo es = %.2f", hipotenusa);

    return 0;
}
