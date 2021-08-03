/*
    Ejercicio 7

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Generar 3 vectores de 20 posiciones cada uno. El vector A deberá contener
    números aleatorios entre 0 y 99. El B, también deberá ser rellenado con valores
    aleatorios entre 0 y 99, y el vector C deberá contener la suma de A + B en cada
    posición. Al finalizar, el vector C además deberá indicar el promedio de todos los
    números que tiene almacenado.

    La salida del programa será así:

        A  B  C
        10 10 20
        11 11 22
        20 20 40

    Promedio de C = (20+22+42)/3 = 27,3333

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector_a[20], vector_b[20], vector_c[20];
    int suma = 0;
    float promedio;
    srand(time(NULL));

    for(int i = 0; i < 20; i++)
    {
        vector_a[i] = rand()%100;
        vector_b[i] = rand()%100;
        vector_c[i] = vector_a[i] + vector_b[i];

        suma += vector_c[i];
    }

    printf("\t| A\t| B\t| C\n");
    printf("\t|-------|-------|------\n");

    for(int i = 0; i < 20; i++)
    {
        printf("\t| %d\t| %d\t| %d\n", vector_a[i], vector_b[i], vector_c[i]);
        printf("\t|-------|-------|------\n");
    }

    promedio = suma / 20.0;

    printf("\nEl promedio de C es %.2f", promedio);

    return 0;
}
