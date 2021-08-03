/*
    Ejercicio 24

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que permita introducir las notas de 4 materias: QUIMICA, FISICA,
    MATEMATICA e INFORMATICA, y que a partir de las notas, calcule el promedio general
    de notas.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quimica, fisica, matematica, informatica, promedio;

    printf("Ingrese la nota de quimica: \n");
    scanf("%f", &quimica);

    printf("Ingrese la nota de fisica: \n");
    scanf("%f", &fisica);

    printf("Ingrese la nota de matematica: \n");
    scanf("%f", &matematica);

    printf("Ingrese la nota de informatica: \n");
    scanf("%f", &informatica);

    promedio = (quimica + fisica + matematica + informatica)/4.0 ;

    printf("El promedio general de sus notas es: %.2f", promedio);

    return 0;
}
