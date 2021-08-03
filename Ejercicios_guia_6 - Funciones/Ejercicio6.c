/*
    Ejercicio 6

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Repetir el programa anterior, pero esta vez, considerando que los 3 valores serán números
    aleatorios entre 0 y 100. Implementar una función “aleatorio” para el cálculo del número,
    y una función promedio para encontrar el promedio del número.
*/

#include <stdio.h>
#include <stdlib.h>

float calcular_prom();
int aleatorio();

int main()
{
    float promedio;
    srand(time(NULL));

    promedio = calcular_prom();

    printf("\nEl promedio es: %.2f", promedio);

    return 0;
}

float calcular_prom()
{
    printf("------ Calculando promedio -------\n\n");

    float prom;
    int num_aleatorio, sumatoria = 0;

    for(int i = 0; i < 3; i++)
    {
        num_aleatorio = aleatorio();
        sumatoria += num_aleatorio;

        printf("Valor %d: %d\n", i+1, num_aleatorio);
    }

    prom = sumatoria / 3.0;
    return prom;
}

int aleatorio()
{
    int num;

    num = rand()% 101;
    return num;
}
