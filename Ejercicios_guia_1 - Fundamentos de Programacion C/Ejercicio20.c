/*
    Ejercicio 20

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba el mismo programa anterior, pero utilizando la función POW. Para este
    ejercicio, en pantalla se deberá mostrar lo siguiente:
    Ingrese Valor: X
    El Nro: X elevado al cuadrado es: Y
    El Nro: X elevado al cubo es: Z

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valor, cuadrado, cubo;

    printf("Ingrese Valor: ");
    scanf("%f", &valor);

    cuadrado = pow(valor, 2.0);
    cubo = pow(valor, 3.0);

    printf("El Nro: %.2f elevado al cuadrado es: %.2f", valor, cuadrado);
    printf("\nEl Nro: %.2f elevado al cubo es: %.2f", valor, cubo);

    return 0;
}
