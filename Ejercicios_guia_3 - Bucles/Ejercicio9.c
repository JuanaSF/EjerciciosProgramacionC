/*
    Ejercicio 9

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modificar el programa anterior, pero para imprimir 50 números aleatorios entre 0 y
    100, y mostrar el promedio de dichos números.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    int suma;
    float promedio;
    srand(time(NULL));

    for(int i = 0; i < 50; i++)
    {
        valor = rand()%101;
        suma = suma + valor;
        printf("%d\n", valor);
    }

    promedio = suma/50.0;
    printf("\nEl promedio es: %.2f", promedio);

    return 0;
}
