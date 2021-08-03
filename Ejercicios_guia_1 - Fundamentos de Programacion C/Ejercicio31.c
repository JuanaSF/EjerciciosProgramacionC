/*
    Ejercicio 31

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Elabore un programa que realice la conversión de cm. a pulgadas.
    Donde 1cm = 0.39737 pulgadas.
    Por lo tanto, el usuario proporcionara el dato de N cm. y el programa dirá a cuantas
    pulgadas es equivalente.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float centimetros, pulgadas;

    printf("Ingrese cantidad de centimetros: ");
    scanf("%f", &centimetros);

    pulgadas = centimetros / 2.54;

    printf("\n%.2f cm equivalen a %.5f pulgadas", centimetros, pulgadas);

    return 0;
}
