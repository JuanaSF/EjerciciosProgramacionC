/*
    Ejercicio 17

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un Programa que permita calcular las raíces de una función cuadrática (X1 y X2).
    Los valores de a, b y c deberán ser ingresados por teclado.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, discriminante, x1, x2;

    printf("Ingrese a: ");
    scanf("%f", &a);

    printf("Ingrese b: ");
    scanf("%f", &b);

    printf("Ingrese c: ");
    scanf("%f", &c);

    discriminante = pow(b, 2.0) - 4 * a * c;

    if(discriminante > 0)
    {
        x1 = ((-b + sqrt(discriminante))/(2.0 * a));
        x2 = ((-b - sqrt(discriminante))/(2.0 * a));

        printf("Dado a = %.2f, b = %.2f y c = %.2f", a, b, c);
        printf("\nX1 = %.2f y X2 = %.2f", x1, x2);
    }
    else if (discriminante == 0)
    {
        x1 = ((-b)/(2.0 * a));
        x2 = x1;

        printf("Dado a = %.2f, b = %.2f y c = %.2f", a, b, c);
        printf("\nLa unica raiz de esta funcion es: %.2f", x1);
    }
    else
    {
        printf("El discriminante es menor a cero, por lo cual no existe una solucion dentro de los numeros reales");
    }

    return 0;
}
