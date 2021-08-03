/*
    Ejercicio 5

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que implemente funciones para realizar el cálculo del promedio de 3
    valores del tipo Float que son introducidos por teclado
*/

#include <stdio.h>
#include <stdlib.h>

float calcular_prom();

int main()
{
    float promedio;

    promedio = calcular_prom();

    printf("\nEl promedio es: %.2f", promedio);

    return 0;
}

float calcular_prom()
{
    printf("------ Calculando promedio -------\n\n");

    float prom, aux, sumatoria = 0;

    for(int i = 0; i < 3; i++)
    {
        printf("Ingrese valor %d: ", i+1);
        scanf("%f", &aux);

        sumatoria += aux;
    }

    prom = sumatoria / 3.0;
    return prom;
}
