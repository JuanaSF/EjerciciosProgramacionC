/*
    Ejercicio 3

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modificar el programa anterior para hacer lo mismo, pero mediante funciones CON PASO
    DE PARAMETROS CON VALOR.

*/

#include <stdio.h>
#include <stdlib.h>

int calcular_area_rec(int alto, int ancho);

int main()
{
    float area, lado1, lado2;

    printf("Averigue el area de un rectangulo\n");

    printf("\nIngrese el alto del rectangulo: ");
    scanf("%f", &lado1);

    printf("Ingrese el ancho del rectangulo: ");
    scanf("%f", &lado2);

    area = calcular_area_rec(lado1, lado2);

    printf("\nEl area de este rectangulo es: %.2f", area);

    return 0;
}

int calcular_area_rec(int alto, int ancho)
{
    return alto * ancho;
}
